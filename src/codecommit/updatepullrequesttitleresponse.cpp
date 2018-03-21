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

#include "updatepullrequesttitleresponse.h"
#include "updatepullrequesttitleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  UpdatePullRequestTitleResponse
 *
 * @brief  Handles CodeCommit UpdatePullRequestTitle responses.
 *
 * @see    CodeCommitClient::updatePullRequestTitle
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePullRequestTitleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new UpdatePullRequestTitleResponsePrivate(this), parent)
{
    setRequest(new UpdatePullRequestTitleRequest(request));
    setReply(reply);
}

const UpdatePullRequestTitleRequest * UpdatePullRequestTitleResponse::request() const
{
    Q_D(const UpdatePullRequestTitleResponse);
    return static_cast<const UpdatePullRequestTitleRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit UpdatePullRequestTitle response.
 *
 * @param  response  Response to parse.
 */
void UpdatePullRequestTitleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePullRequestTitleResponsePrivate
 *
 * @brief  Private implementation for UpdatePullRequestTitleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePullRequestTitleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePullRequestTitleResponse instance.
 */
UpdatePullRequestTitleResponsePrivate::UpdatePullRequestTitleResponsePrivate(
    UpdatePullRequestTitleQueueResponse * const q) : UpdatePullRequestTitlePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit UpdatePullRequestTitleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePullRequestTitleResponsePrivate::UpdatePullRequestTitleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePullRequestTitleResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace AWS
