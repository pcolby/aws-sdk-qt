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

#include "getmergeconflictsresponse.h"
#include "getmergeconflictsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetMergeConflictsResponse
 *
 * @brief  Handles CodeCommit GetMergeConflicts responses.
 *
 * @see    CodeCommitClient::getMergeConflicts
 */

/**
 * @brief  Constructs a new GetMergeConflictsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetMergeConflictsResponse::GetMergeConflictsResponse(
        const GetMergeConflictsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new GetMergeConflictsResponsePrivate(this), parent)
{
    setRequest(new GetMergeConflictsRequest(request));
    setReply(reply);
}

const GetMergeConflictsRequest * GetMergeConflictsResponse::request() const
{
    Q_D(const GetMergeConflictsResponse);
    return static_cast<const GetMergeConflictsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetMergeConflicts response.
 *
 * @param  response  Response to parse.
 */
void GetMergeConflictsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetMergeConflictsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetMergeConflictsResponsePrivate
 *
 * @brief  Private implementation for GetMergeConflictsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetMergeConflictsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetMergeConflictsResponse instance.
 */
GetMergeConflictsResponsePrivate::GetMergeConflictsResponsePrivate(
    GetMergeConflictsResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetMergeConflictsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetMergeConflictsResponsePrivate::GetMergeConflictsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMergeConflictsResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
