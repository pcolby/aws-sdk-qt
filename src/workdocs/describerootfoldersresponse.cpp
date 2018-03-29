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

#include "describerootfoldersresponse.h"
#include "describerootfoldersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DescribeRootFoldersResponse
 *
 * @brief  Handles WorkDocs DescribeRootFolders responses.
 *
 * @see    WorkDocsClient::describeRootFolders
 */

/**
 * @brief  Constructs a new DescribeRootFoldersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRootFoldersResponse::DescribeRootFoldersResponse(
        const DescribeRootFoldersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DescribeRootFoldersResponsePrivate(this), parent)
{
    setRequest(new DescribeRootFoldersRequest(request));
    setReply(reply);
}

const DescribeRootFoldersRequest * DescribeRootFoldersResponse::request() const
{
    Q_D(const DescribeRootFoldersResponse);
    return static_cast<const DescribeRootFoldersRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DescribeRootFolders response.
 *
 * @param  response  Response to parse.
 */
void DescribeRootFoldersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRootFoldersResponsePrivate
 *
 * @brief  Private implementation for DescribeRootFoldersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRootFoldersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRootFoldersResponse instance.
 */
DescribeRootFoldersResponsePrivate::DescribeRootFoldersResponsePrivate(
    DescribeRootFoldersQueueResponse * const q) : DescribeRootFoldersPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DescribeRootFoldersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRootFoldersResponsePrivate::DescribeRootFoldersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRootFoldersResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
