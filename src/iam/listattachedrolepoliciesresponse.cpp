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

#include "listattachedrolepoliciesresponse.h"
#include "listattachedrolepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListAttachedRolePoliciesResponse
 *
 * @brief  Handles IAM ListAttachedRolePolicies responses.
 *
 * @see    IAMClient::listAttachedRolePolicies
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttachedRolePoliciesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListAttachedRolePoliciesResponsePrivate(this), parent)
{
    setRequest(new ListAttachedRolePoliciesRequest(request));
    setReply(reply);
}

const ListAttachedRolePoliciesRequest * ListAttachedRolePoliciesResponse::request() const
{
    Q_D(const ListAttachedRolePoliciesResponse);
    return static_cast<const ListAttachedRolePoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListAttachedRolePolicies response.
 *
 * @param  response  Response to parse.
 */
void ListAttachedRolePoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAttachedRolePoliciesResponsePrivate
 *
 * @brief  Private implementation for ListAttachedRolePoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedRolePoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAttachedRolePoliciesResponse instance.
 */
ListAttachedRolePoliciesResponsePrivate::ListAttachedRolePoliciesResponsePrivate(
    ListAttachedRolePoliciesQueueResponse * const q) : ListAttachedRolePoliciesPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListAttachedRolePoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAttachedRolePoliciesResponsePrivate::ListAttachedRolePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttachedRolePoliciesResponse"));
    /// @todo
}
