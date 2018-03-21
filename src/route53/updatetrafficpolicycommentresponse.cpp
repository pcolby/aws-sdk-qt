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

#include "updatetrafficpolicycommentresponse.h"
#include "updatetrafficpolicycommentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  UpdateTrafficPolicyCommentResponse
 *
 * @brief  Handles Route53 UpdateTrafficPolicyComment responses.
 *
 * @see    Route53Client::updateTrafficPolicyComment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTrafficPolicyCommentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new UpdateTrafficPolicyCommentResponsePrivate(this), parent)
{
    setRequest(new UpdateTrafficPolicyCommentRequest(request));
    setReply(reply);
}

const UpdateTrafficPolicyCommentRequest * UpdateTrafficPolicyCommentResponse::request() const
{
    Q_D(const UpdateTrafficPolicyCommentResponse);
    return static_cast<const UpdateTrafficPolicyCommentRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 UpdateTrafficPolicyComment response.
 *
 * @param  response  Response to parse.
 */
void UpdateTrafficPolicyCommentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTrafficPolicyCommentResponsePrivate
 *
 * @brief  Private implementation for UpdateTrafficPolicyCommentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTrafficPolicyCommentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTrafficPolicyCommentResponse instance.
 */
UpdateTrafficPolicyCommentResponsePrivate::UpdateTrafficPolicyCommentResponsePrivate(
    UpdateTrafficPolicyCommentQueueResponse * const q) : UpdateTrafficPolicyCommentPrivate(q)
{

}

/**
 * @brief  Parse an Route53 UpdateTrafficPolicyCommentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTrafficPolicyCommentResponsePrivate::UpdateTrafficPolicyCommentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrafficPolicyCommentResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
