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

#include "updatedefaultbranchresponse.h"
#include "updatedefaultbranchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  UpdateDefaultBranchResponse
 *
 * @brief  Handles CodeCommit UpdateDefaultBranch responses.
 *
 * @see    CodeCommitClient::updateDefaultBranch
 */

/**
 * @brief  Constructs a new UpdateDefaultBranchResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDefaultBranchResponse::UpdateDefaultBranchResponse(
        const UpdateDefaultBranchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new UpdateDefaultBranchResponsePrivate(this), parent)
{
    setRequest(new UpdateDefaultBranchRequest(request));
    setReply(reply);
}

const UpdateDefaultBranchRequest * UpdateDefaultBranchResponse::request() const
{
    Q_D(const UpdateDefaultBranchResponse);
    return static_cast<const UpdateDefaultBranchRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit UpdateDefaultBranch response.
 *
 * @param  response  Response to parse.
 */
void UpdateDefaultBranchResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDefaultBranchResponsePrivate
 *
 * @brief  Private implementation for UpdateDefaultBranchResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDefaultBranchResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDefaultBranchResponse instance.
 */
UpdateDefaultBranchResponsePrivate::UpdateDefaultBranchResponsePrivate(
    UpdateDefaultBranchQueueResponse * const q) : UpdateDefaultBranchPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit UpdateDefaultBranchResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDefaultBranchResponsePrivate::UpdateDefaultBranchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDefaultBranchResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace AWS
