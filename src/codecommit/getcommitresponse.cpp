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

#include "getcommitresponse.h"
#include "getcommitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  GetCommitResponse
 *
 * @brief  Handles CodeCommit GetCommit responses.
 *
 * @see    CodeCommitClient::getCommit
 */

/**
 * @brief  Constructs a new GetCommitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCommitResponse::GetCommitResponse(
        const GetCommitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new GetCommitResponsePrivate(this), parent)
{
    setRequest(new GetCommitRequest(request));
    setReply(reply);
}

const GetCommitRequest * GetCommitResponse::request() const
{
    Q_D(const GetCommitResponse);
    return static_cast<const GetCommitRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetCommit response.
 *
 * @param  response  Response to parse.
 */
void GetCommitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCommitResponsePrivate
 *
 * @brief  Private implementation for GetCommitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCommitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCommitResponse instance.
 */
GetCommitResponsePrivate::GetCommitResponsePrivate(
    GetCommitQueueResponse * const q) : GetCommitPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetCommitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCommitResponsePrivate::GetCommitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCommitResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
