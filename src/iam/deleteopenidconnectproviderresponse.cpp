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

#include "deleteopenidconnectproviderresponse.h"
#include "deleteopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteOpenIDConnectProviderResponse
 *
 * @brief  Handles IAM DeleteOpenIDConnectProvider responses.
 *
 * @see    IAMClient::deleteOpenIDConnectProvider
 */

/**
 * @brief  Constructs a new DeleteOpenIDConnectProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteOpenIDConnectProviderResponse::DeleteOpenIDConnectProviderResponse(
        const DeleteOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new DeleteOpenIDConnectProviderRequest(request));
    setReply(reply);
}

const DeleteOpenIDConnectProviderRequest * DeleteOpenIDConnectProviderResponse::request() const
{
    Q_D(const DeleteOpenIDConnectProviderResponse);
    return static_cast<const DeleteOpenIDConnectProviderRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteOpenIDConnectProvider response.
 *
 * @param  response  Response to parse.
 */
void DeleteOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteOpenIDConnectProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteOpenIDConnectProviderResponsePrivate
 *
 * @brief  Private implementation for DeleteOpenIDConnectProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteOpenIDConnectProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteOpenIDConnectProviderResponse instance.
 */
DeleteOpenIDConnectProviderResponsePrivate::DeleteOpenIDConnectProviderResponsePrivate(
    DeleteOpenIDConnectProviderResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteOpenIDConnectProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteOpenIDConnectProviderResponsePrivate::parseDeleteOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteOpenIDConnectProviderResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
