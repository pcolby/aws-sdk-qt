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

#include "deletelifecyclepolicyresponse.h"
#include "deletelifecyclepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  DeleteLifecyclePolicyResponse
 *
 * @brief  Handles ECR DeleteLifecyclePolicy responses.
 *
 * @see    ECRClient::deleteLifecyclePolicy
 */

/**
 * @brief  Constructs a new DeleteLifecyclePolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLifecyclePolicyResponse::DeleteLifecyclePolicyResponse(
        const DeleteLifecyclePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new DeleteLifecyclePolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteLifecyclePolicyRequest(request));
    setReply(reply);
}

const DeleteLifecyclePolicyRequest * DeleteLifecyclePolicyResponse::request() const
{
    Q_D(const DeleteLifecyclePolicyResponse);
    return static_cast<const DeleteLifecyclePolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ECR DeleteLifecyclePolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteLifecyclePolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLifecyclePolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteLifecyclePolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLifecyclePolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLifecyclePolicyResponse instance.
 */
DeleteLifecyclePolicyResponsePrivate::DeleteLifecyclePolicyResponsePrivate(
    DeleteLifecyclePolicyQueueResponse * const q) : DeleteLifecyclePolicyPrivate(q)
{

}

/**
 * @brief  Parse an ECR DeleteLifecyclePolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLifecyclePolicyResponsePrivate::DeleteLifecyclePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLifecyclePolicyResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
