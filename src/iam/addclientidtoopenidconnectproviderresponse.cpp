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

#include "addclientidtoopenidconnectproviderresponse.h"
#include "addclientidtoopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  AddClientIDToOpenIDConnectProviderResponse
 *
 * @brief  Handles IAM AddClientIDToOpenIDConnectProvider responses.
 *
 * @see    IAMClient::addClientIDToOpenIDConnectProvider
 */

/**
 * @brief  Constructs a new AddClientIDToOpenIDConnectProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddClientIDToOpenIDConnectProviderResponse::AddClientIDToOpenIDConnectProviderResponse(
        const AddClientIDToOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new AddClientIDToOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new AddClientIDToOpenIDConnectProviderRequest(request));
    setReply(reply);
}

const AddClientIDToOpenIDConnectProviderRequest * AddClientIDToOpenIDConnectProviderResponse::request() const
{
    Q_D(const AddClientIDToOpenIDConnectProviderResponse);
    return static_cast<const AddClientIDToOpenIDConnectProviderRequest *>(d->request);
}

/**
 * @brief  Parse a IAM AddClientIDToOpenIDConnectProvider response.
 *
 * @param  response  Response to parse.
 */
void AddClientIDToOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddClientIDToOpenIDConnectProviderResponsePrivate
 *
 * @brief  Private implementation for AddClientIDToOpenIDConnectProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddClientIDToOpenIDConnectProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddClientIDToOpenIDConnectProviderResponse instance.
 */
AddClientIDToOpenIDConnectProviderResponsePrivate::AddClientIDToOpenIDConnectProviderResponsePrivate(
    AddClientIDToOpenIDConnectProviderQueueResponse * const q) : AddClientIDToOpenIDConnectProviderPrivate(q)
{

}

/**
 * @brief  Parse an IAM AddClientIDToOpenIDConnectProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddClientIDToOpenIDConnectProviderResponsePrivate::AddClientIDToOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddClientIDToOpenIDConnectProviderResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
