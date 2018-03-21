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

#include "updatepullrequestdescriptionresponse.h"
#include "updatepullrequestdescriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  UpdatePullRequestDescriptionResponse
 *
 * @brief  Handles CodeCommit UpdatePullRequestDescription responses.
 *
 * @see    CodeCommitClient::updatePullRequestDescription
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePullRequestDescriptionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new UpdatePullRequestDescriptionResponsePrivate(this), parent)
{
    setRequest(new UpdatePullRequestDescriptionRequest(request));
    setReply(reply);
}

const UpdatePullRequestDescriptionRequest * UpdatePullRequestDescriptionResponse::request() const
{
    Q_D(const UpdatePullRequestDescriptionResponse);
    return static_cast<const UpdatePullRequestDescriptionRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit UpdatePullRequestDescription response.
 *
 * @param  response  Response to parse.
 */
void UpdatePullRequestDescriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePullRequestDescriptionResponsePrivate
 *
 * @brief  Private implementation for UpdatePullRequestDescriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePullRequestDescriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePullRequestDescriptionResponse instance.
 */
UpdatePullRequestDescriptionResponsePrivate::UpdatePullRequestDescriptionResponsePrivate(
    UpdatePullRequestDescriptionQueueResponse * const q) : UpdatePullRequestDescriptionPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit UpdatePullRequestDescriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePullRequestDescriptionResponsePrivate::UpdatePullRequestDescriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePullRequestDescriptionResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace AWS
