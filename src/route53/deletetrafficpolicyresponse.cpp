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

#include "deletetrafficpolicyresponse.h"
#include "deletetrafficpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  DeleteTrafficPolicyResponse
 *
 * @brief  Handles Route53 DeleteTrafficPolicy responses.
 *
 * @see    Route53Client::deleteTrafficPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTrafficPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteTrafficPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteTrafficPolicyRequest(request));
    setReply(reply);
}

const DeleteTrafficPolicyRequest * DeleteTrafficPolicyResponse::request() const
{
    Q_D(const DeleteTrafficPolicyResponse);
    return static_cast<const DeleteTrafficPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 DeleteTrafficPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteTrafficPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTrafficPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteTrafficPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTrafficPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTrafficPolicyResponse instance.
 */
DeleteTrafficPolicyResponsePrivate::DeleteTrafficPolicyResponsePrivate(
    DeleteTrafficPolicyQueueResponse * const q) : DeleteTrafficPolicyPrivate(q)
{

}

/**
 * @brief  Parse an Route53 DeleteTrafficPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTrafficPolicyResponsePrivate::DeleteTrafficPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTrafficPolicyResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
