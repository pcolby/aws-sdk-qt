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

#include "describefoldercontentsresponse.h"
#include "describefoldercontentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  DescribeFolderContentsResponse
 *
 * @brief  Handles WorkDocs DescribeFolderContents responses.
 *
 * @see    WorkDocsClient::describeFolderContents
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFolderContentsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DescribeFolderContentsResponsePrivate(this), parent)
{
    setRequest(new DescribeFolderContentsRequest(request));
    setReply(reply);
}

const DescribeFolderContentsRequest * DescribeFolderContentsResponse::request() const
{
    Q_D(const DescribeFolderContentsResponse);
    return static_cast<const DescribeFolderContentsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DescribeFolderContents response.
 *
 * @param  response  Response to parse.
 */
void DescribeFolderContentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFolderContentsResponsePrivate
 *
 * @brief  Private implementation for DescribeFolderContentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFolderContentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFolderContentsResponse instance.
 */
DescribeFolderContentsResponsePrivate::DescribeFolderContentsResponsePrivate(
    DescribeFolderContentsQueueResponse * const q) : DescribeFolderContentsPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DescribeFolderContentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFolderContentsResponsePrivate::DescribeFolderContentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFolderContentsResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
