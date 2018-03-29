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

#include "mergepullrequestbyfastforwardresponse.h"
#include "mergepullrequestbyfastforwardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  MergePullRequestByFastForwardResponse
 *
 * @brief  Handles CodeCommit MergePullRequestByFastForward responses.
 *
 * @see    CodeCommitClient::mergePullRequestByFastForward
 */

/**
 * @brief  Constructs a new MergePullRequestByFastForwardResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
MergePullRequestByFastForwardResponse::MergePullRequestByFastForwardResponse(
        const MergePullRequestByFastForwardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new MergePullRequestByFastForwardResponsePrivate(this), parent)
{
    setRequest(new MergePullRequestByFastForwardRequest(request));
    setReply(reply);
}

const MergePullRequestByFastForwardRequest * MergePullRequestByFastForwardResponse::request() const
{
    Q_D(const MergePullRequestByFastForwardResponse);
    return static_cast<const MergePullRequestByFastForwardRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit MergePullRequestByFastForward response.
 *
 * @param  response  Response to parse.
 */
void MergePullRequestByFastForwardResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  MergePullRequestByFastForwardResponsePrivate
 *
 * @brief  Private implementation for MergePullRequestByFastForwardResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MergePullRequestByFastForwardResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MergePullRequestByFastForwardResponse instance.
 */
MergePullRequestByFastForwardResponsePrivate::MergePullRequestByFastForwardResponsePrivate(
    MergePullRequestByFastForwardQueueResponse * const q) : MergePullRequestByFastForwardPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit MergePullRequestByFastForwardResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void MergePullRequestByFastForwardResponsePrivate::MergePullRequestByFastForwardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MergePullRequestByFastForwardResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
