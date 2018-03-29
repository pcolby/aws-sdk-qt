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

#include "removeclientidfromopenidconnectproviderresponse.h"
#include "removeclientidfromopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  RemoveClientIDFromOpenIDConnectProviderResponse
 *
 * @brief  Handles IAM RemoveClientIDFromOpenIDConnectProvider responses.
 *
 * @see    IAMClient::removeClientIDFromOpenIDConnectProvider
 */

/**
 * @brief  Constructs a new RemoveClientIDFromOpenIDConnectProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveClientIDFromOpenIDConnectProviderResponse::RemoveClientIDFromOpenIDConnectProviderResponse(
        const RemoveClientIDFromOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RemoveClientIDFromOpenIDConnectProviderResponse(new RemoveClientIDFromOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new RemoveClientIDFromOpenIDConnectProviderRequest(request));
    setReply(reply);
}

const RemoveClientIDFromOpenIDConnectProviderRequest * RemoveClientIDFromOpenIDConnectProviderResponse::request() const
{
    Q_D(const RemoveClientIDFromOpenIDConnectProviderResponse);
    return static_cast<const RemoveClientIDFromOpenIDConnectProviderRequest *>(d->request);
}

/**
 * @brief  Parse a IAM RemoveClientIDFromOpenIDConnectProvider response.
 *
 * @param  response  Response to parse.
 */
void RemoveClientIDFromOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(RemoveClientIDFromOpenIDConnectProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveClientIDFromOpenIDConnectProviderResponsePrivate
 *
 * @brief  Private implementation for RemoveClientIDFromOpenIDConnectProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveClientIDFromOpenIDConnectProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveClientIDFromOpenIDConnectProviderResponse instance.
 */
RemoveClientIDFromOpenIDConnectProviderResponsePrivate::RemoveClientIDFromOpenIDConnectProviderResponsePrivate(
    RemoveClientIDFromOpenIDConnectProviderResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM RemoveClientIDFromOpenIDConnectProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveClientIDFromOpenIDConnectProviderResponsePrivate::parseRemoveClientIDFromOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveClientIDFromOpenIDConnectProviderResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
