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

#include "createsecurityconfigurationresponse.h"
#include "createsecurityconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::CreateSecurityConfigurationResponse
 *
 * \brief The CreateSecurityConfigurationResponse class provides an interace for EMR CreateSecurityConfiguration responses.
 *
 * \ingroup EMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EMRClient::createSecurityConfiguration
 */

/*!
 * @brief  Constructs a new CreateSecurityConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSecurityConfigurationResponse::CreateSecurityConfigurationResponse(
        const CreateSecurityConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new CreateSecurityConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateSecurityConfigurationRequest(request));
    setReply(reply);
}

const CreateSecurityConfigurationRequest * CreateSecurityConfigurationResponse::request() const
{
    Q_D(const CreateSecurityConfigurationResponse);
    return static_cast<const CreateSecurityConfigurationRequest *>(d->request);
}

/*!
 * @brief  Parse a EMR CreateSecurityConfiguration response.
 *
 * @param  response  Response to parse.
 */
void CreateSecurityConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSecurityConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateSecurityConfigurationResponsePrivate
 *
 * \brief Private implementation for CreateSecurityConfigurationResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateSecurityConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSecurityConfigurationResponse instance.
 */
CreateSecurityConfigurationResponsePrivate::CreateSecurityConfigurationResponsePrivate(
    CreateSecurityConfigurationResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EMR CreateSecurityConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSecurityConfigurationResponsePrivate::parseCreateSecurityConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSecurityConfigurationResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
