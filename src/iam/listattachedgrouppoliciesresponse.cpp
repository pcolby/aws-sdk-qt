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

#include "listattachedgrouppoliciesresponse.h"
#include "listattachedgrouppoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListAttachedGroupPoliciesResponse
 *
 * @brief  Handles IAM ListAttachedGroupPolicies responses.
 *
 * @see    IAMClient::listAttachedGroupPolicies
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAttachedGroupPoliciesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListAttachedGroupPoliciesResponsePrivate(this), parent)
{
    setRequest(new ListAttachedGroupPoliciesRequest(request));
    setReply(reply);
}

const ListAttachedGroupPoliciesRequest * ListAttachedGroupPoliciesResponse::request() const
{
    Q_D(const ListAttachedGroupPoliciesResponse);
    return static_cast<const ListAttachedGroupPoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListAttachedGroupPolicies response.
 *
 * @param  response  Response to parse.
 */
void ListAttachedGroupPoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAttachedGroupPoliciesResponsePrivate
 *
 * @brief  Private implementation for ListAttachedGroupPoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttachedGroupPoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAttachedGroupPoliciesResponse instance.
 */
ListAttachedGroupPoliciesResponsePrivate::ListAttachedGroupPoliciesResponsePrivate(
    ListAttachedGroupPoliciesQueueResponse * const q) : ListAttachedGroupPoliciesPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListAttachedGroupPoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAttachedGroupPoliciesResponsePrivate::ListAttachedGroupPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAttachedGroupPoliciesResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
