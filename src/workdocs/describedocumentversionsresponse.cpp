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

#include "describedocumentversionsresponse.h"
#include "describedocumentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DescribeDocumentVersionsResponse
 *
 * @brief  Handles WorkDocs DescribeDocumentVersions responses.
 *
 * @see    WorkDocsClient::describeDocumentVersions
 */

/**
 * @brief  Constructs a new DescribeDocumentVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDocumentVersionsResponse::DescribeDocumentVersionsResponse(
        const DescribeDocumentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeDocumentVersionsResponse(new DescribeDocumentVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeDocumentVersionsRequest(request));
    setReply(reply);
}

const DescribeDocumentVersionsRequest * DescribeDocumentVersionsResponse::request() const
{
    Q_D(const DescribeDocumentVersionsResponse);
    return static_cast<const DescribeDocumentVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DescribeDocumentVersions response.
 *
 * @param  response  Response to parse.
 */
void DescribeDocumentVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDocumentVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDocumentVersionsResponsePrivate
 *
 * @brief  Private implementation for DescribeDocumentVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDocumentVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDocumentVersionsResponse instance.
 */
DescribeDocumentVersionsResponsePrivate::DescribeDocumentVersionsResponsePrivate(
    DescribeDocumentVersionsResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DescribeDocumentVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDocumentVersionsResponsePrivate::parseDescribeDocumentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDocumentVersionsResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
