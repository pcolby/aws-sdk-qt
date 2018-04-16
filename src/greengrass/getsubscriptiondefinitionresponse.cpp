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

#include "getsubscriptiondefinitionresponse.h"
#include "getsubscriptiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionResponse
 *
 * \brief The GetSubscriptionDefinitionResponse class encapsulates Greengrass GetSubscriptionDefinition responses.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getSubscriptionDefinition
 */

/*!
 * @brief  Constructs a new GetSubscriptionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSubscriptionDefinitionResponse::GetSubscriptionDefinitionResponse(
        const GetSubscriptionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetSubscriptionDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetSubscriptionDefinitionRequest(request));
    setReply(reply);
}

const GetSubscriptionDefinitionRequest * GetSubscriptionDefinitionResponse::request() const
{
    Q_D(const GetSubscriptionDefinitionResponse);
    return static_cast<const GetSubscriptionDefinitionRequest *>(d->request);
}

/*!
 * @brief  Parse a Greengrass GetSubscriptionDefinition response.
 *
 * @param  response  Response to parse.
 */
void GetSubscriptionDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSubscriptionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetSubscriptionDefinitionResponsePrivate
 *
 * \brief Private implementation for GetSubscriptionDefinitionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSubscriptionDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSubscriptionDefinitionResponse instance.
 */
GetSubscriptionDefinitionResponsePrivate::GetSubscriptionDefinitionResponsePrivate(
    GetSubscriptionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Greengrass GetSubscriptionDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSubscriptionDefinitionResponsePrivate::parseGetSubscriptionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSubscriptionDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
