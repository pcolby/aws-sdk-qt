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

#include "listentitiesforpolicyresponse.h"
#include "listentitiesforpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListEntitiesForPolicyResponse
 *
 * @brief  Handles IAM ListEntitiesForPolicy responses.
 *
 * @see    IAMClient::listEntitiesForPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListEntitiesForPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListEntitiesForPolicyResponsePrivate(this), parent)
{
    setRequest(new ListEntitiesForPolicyRequest(request));
    setReply(reply);
}

const ListEntitiesForPolicyRequest * ListEntitiesForPolicyResponse::request() const
{
    Q_D(const ListEntitiesForPolicyResponse);
    return static_cast<const ListEntitiesForPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListEntitiesForPolicy response.
 *
 * @param  response  Response to parse.
 */
void ListEntitiesForPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListEntitiesForPolicyResponsePrivate
 *
 * @brief  Private implementation for ListEntitiesForPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListEntitiesForPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListEntitiesForPolicyResponse instance.
 */
ListEntitiesForPolicyResponsePrivate::ListEntitiesForPolicyResponsePrivate(
    ListEntitiesForPolicyQueueResponse * const q) : ListEntitiesForPolicyPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListEntitiesForPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListEntitiesForPolicyResponsePrivate::ListEntitiesForPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEntitiesForPolicyResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
