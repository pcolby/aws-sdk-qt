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

#include "createappresponse.h"
#include "createappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateAppResponse
 *
 * \brief The CreateAppResponse class encapsulates Pinpoint CreateApp responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::createApp
 */

/*!
 * @brief  Constructs a new CreateAppResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAppResponse::CreateAppResponse(
        const CreateAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateAppResponsePrivate(this), parent)
{
    setRequest(new CreateAppRequest(request));
    setReply(reply);
}

const CreateAppRequest * CreateAppResponse::request() const
{
    Q_D(const CreateAppResponse);
    return static_cast<const CreateAppRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint CreateApp response.
 *
 * @param  response  Response to parse.
 */
void CreateAppResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateAppResponsePrivate
 *
 * \brief Private implementation for CreateAppResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateAppResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAppResponse instance.
 */
CreateAppResponsePrivate::CreateAppResponsePrivate(
    CreateAppResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint CreateAppResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAppResponsePrivate::parseCreateAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAppResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
