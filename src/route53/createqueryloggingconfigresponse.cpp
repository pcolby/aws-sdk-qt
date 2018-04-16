/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createqueryloggingconfigresponse.h"
#include "createqueryloggingconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateQueryLoggingConfigResponse
 *
 * \brief The CreateQueryLoggingConfigResponse class encapsulates Route53 CreateQueryLoggingConfig responses.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::createQueryLoggingConfig
 */

/*!
 * @brief  Constructs a new CreateQueryLoggingConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateQueryLoggingConfigResponse::CreateQueryLoggingConfigResponse(
        const CreateQueryLoggingConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new CreateQueryLoggingConfigResponsePrivate(this), parent)
{
    setRequest(new CreateQueryLoggingConfigRequest(request));
    setReply(reply);
}

const CreateQueryLoggingConfigRequest * CreateQueryLoggingConfigResponse::request() const
{
    Q_D(const CreateQueryLoggingConfigResponse);
    return static_cast<const CreateQueryLoggingConfigRequest *>(d->request);
}

/*!
 * @brief  Parse a Route53 CreateQueryLoggingConfig response.
 *
 * @param  response  Response to parse.
 */
void CreateQueryLoggingConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateQueryLoggingConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateQueryLoggingConfigResponsePrivate
 *
 * \brief Private implementation for CreateQueryLoggingConfigResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateQueryLoggingConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateQueryLoggingConfigResponse instance.
 */
CreateQueryLoggingConfigResponsePrivate::CreateQueryLoggingConfigResponsePrivate(
    CreateQueryLoggingConfigResponse * const q) : Route53ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Route53 CreateQueryLoggingConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateQueryLoggingConfigResponsePrivate::parseCreateQueryLoggingConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateQueryLoggingConfigResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
