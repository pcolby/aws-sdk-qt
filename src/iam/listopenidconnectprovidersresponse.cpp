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

#include "listopenidconnectprovidersresponse.h"
#include "listopenidconnectprovidersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  ListOpenIDConnectProvidersResponse
 *
 * @brief  Handles IAM ListOpenIDConnectProviders responses.
 *
 * @see    IAMClient::listOpenIDConnectProviders
 */

/**
 * @brief  Constructs a new ListOpenIDConnectProvidersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOpenIDConnectProvidersResponse::ListOpenIDConnectProvidersResponse(
        const ListOpenIDConnectProvidersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListOpenIDConnectProvidersResponse(new ListOpenIDConnectProvidersResponsePrivate(this), parent)
{
    setRequest(new ListOpenIDConnectProvidersRequest(request));
    setReply(reply);
}

const ListOpenIDConnectProvidersRequest * ListOpenIDConnectProvidersResponse::request() const
{
    Q_D(const ListOpenIDConnectProvidersResponse);
    return static_cast<const ListOpenIDConnectProvidersRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListOpenIDConnectProviders response.
 *
 * @param  response  Response to parse.
 */
void ListOpenIDConnectProvidersResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListOpenIDConnectProvidersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListOpenIDConnectProvidersResponsePrivate
 *
 * @brief  Private implementation for ListOpenIDConnectProvidersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOpenIDConnectProvidersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListOpenIDConnectProvidersResponse instance.
 */
ListOpenIDConnectProvidersResponsePrivate::ListOpenIDConnectProvidersResponsePrivate(
    ListOpenIDConnectProvidersResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM ListOpenIDConnectProvidersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListOpenIDConnectProvidersResponsePrivate::parseListOpenIDConnectProvidersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOpenIDConnectProvidersResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
