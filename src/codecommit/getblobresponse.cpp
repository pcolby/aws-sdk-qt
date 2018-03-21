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

#include "getblobresponse.h"
#include "getblobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  GetBlobResponse
 *
 * @brief  Handles CodeCommit GetBlob responses.
 *
 * @see    CodeCommitClient::getBlob
 */

/**
 * @brief  Constructs a new GetBlobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBlobResponse::GetBlobResponse(
        const GetBlobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new GetBlobResponsePrivate(this), parent)
{
    setRequest(new GetBlobRequest(request));
    setReply(reply);
}

const GetBlobRequest * GetBlobResponse::request() const
{
    Q_D(const GetBlobResponse);
    return static_cast<const GetBlobRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetBlob response.
 *
 * @param  response  Response to parse.
 */
void GetBlobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBlobResponsePrivate
 *
 * @brief  Private implementation for GetBlobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBlobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBlobResponse instance.
 */
GetBlobResponsePrivate::GetBlobResponsePrivate(
    GetBlobQueueResponse * const q) : GetBlobPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetBlobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBlobResponsePrivate::GetBlobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBlobResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace AWS
