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

#include "updatepullrequeststatusresponse.h"
#include "updatepullrequeststatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  UpdatePullRequestStatusResponse
 *
 * @brief  Handles CodeCommit UpdatePullRequestStatus responses.
 *
 * @see    CodeCommitClient::updatePullRequestStatus
 */

/**
 * @brief  Constructs a new UpdatePullRequestStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePullRequestStatusResponse::UpdatePullRequestStatusResponse(
        const UpdatePullRequestStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new UpdatePullRequestStatusResponsePrivate(this), parent)
{
    setRequest(new UpdatePullRequestStatusRequest(request));
    setReply(reply);
}

const UpdatePullRequestStatusRequest * UpdatePullRequestStatusResponse::request() const
{
    Q_D(const UpdatePullRequestStatusResponse);
    return static_cast<const UpdatePullRequestStatusRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit UpdatePullRequestStatus response.
 *
 * @param  response  Response to parse.
 */
void UpdatePullRequestStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdatePullRequestStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePullRequestStatusResponsePrivate
 *
 * @brief  Private implementation for UpdatePullRequestStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePullRequestStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePullRequestStatusResponse instance.
 */
UpdatePullRequestStatusResponsePrivate::UpdatePullRequestStatusResponsePrivate(
    UpdatePullRequestStatusResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit UpdatePullRequestStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePullRequestStatusResponsePrivate::parseUpdatePullRequestStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePullRequestStatusResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
