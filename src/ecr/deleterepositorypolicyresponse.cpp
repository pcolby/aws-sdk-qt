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

#include "deleterepositorypolicyresponse.h"
#include "deleterepositorypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECR {

/**
 * @class  DeleteRepositoryPolicyResponse
 *
 * @brief  Handles ECR DeleteRepositoryPolicy responses.
 *
 * @see    ECRClient::deleteRepositoryPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteRepositoryPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new DeleteRepositoryPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteRepositoryPolicyRequest(request));
    setReply(reply);
}

const DeleteRepositoryPolicyRequest * DeleteRepositoryPolicyResponse::request() const
{
    Q_D(const DeleteRepositoryPolicyResponse);
    return static_cast<const DeleteRepositoryPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ECR DeleteRepositoryPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteRepositoryPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteRepositoryPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteRepositoryPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteRepositoryPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteRepositoryPolicyResponse instance.
 */
DeleteRepositoryPolicyResponsePrivate::DeleteRepositoryPolicyResponsePrivate(
    DeleteRepositoryPolicyQueueResponse * const q) : DeleteRepositoryPolicyPrivate(q)
{

}

/**
 * @brief  Parse an ECR DeleteRepositoryPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteRepositoryPolicyResponsePrivate::DeleteRepositoryPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRepositoryPolicyResponse"));
    /// @todo
}

} // namespace ECR
} // namespace AWS
