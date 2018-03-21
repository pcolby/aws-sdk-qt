/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listsamlprovidersresponse.h"
#include "listsamlprovidersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListSAMLProvidersResponse
 *
 * @brief  Handles IAM ListSAMLProviders responses.
 *
 * @see    IAMClient::listSAMLProviders
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSAMLProvidersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListSAMLProvidersResponsePrivate(this), parent)
{
    setRequest(new ListSAMLProvidersRequest(request));
    setReply(reply);
}

const ListSAMLProvidersRequest * ListSAMLProvidersResponse::request() const
{
    Q_D(const ListSAMLProvidersResponse);
    return static_cast<const ListSAMLProvidersRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListSAMLProviders response.
 *
 * @param  response  Response to parse.
 */
void ListSAMLProvidersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSAMLProvidersResponsePrivate
 *
 * @brief  Private implementation for ListSAMLProvidersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSAMLProvidersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSAMLProvidersResponse instance.
 */
ListSAMLProvidersResponsePrivate::ListSAMLProvidersResponsePrivate(
    ListSAMLProvidersQueueResponse * const q) : ListSAMLProvidersPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListSAMLProvidersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSAMLProvidersResponsePrivate::ListSAMLProvidersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSAMLProvidersResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
