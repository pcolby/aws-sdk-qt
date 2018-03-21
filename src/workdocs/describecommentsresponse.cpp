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

#include "describecommentsresponse.h"
#include "describecommentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  DescribeCommentsResponse
 *
 * @brief  Handles WorkDocs DescribeComments responses.
 *
 * @see    WorkDocsClient::describeComments
 */

/**
 * @brief  Constructs a new DescribeCommentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCommentsResponse::DescribeCommentsResponse(
        const DescribeCommentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DescribeCommentsResponsePrivate(this), parent)
{
    setRequest(new DescribeCommentsRequest(request));
    setReply(reply);
}

const DescribeCommentsRequest * DescribeCommentsResponse::request() const
{
    Q_D(const DescribeCommentsResponse);
    return static_cast<const DescribeCommentsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DescribeComments response.
 *
 * @param  response  Response to parse.
 */
void DescribeCommentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCommentsResponsePrivate
 *
 * @brief  Private implementation for DescribeCommentsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCommentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCommentsResponse instance.
 */
DescribeCommentsResponsePrivate::DescribeCommentsResponsePrivate(
    DescribeCommentsQueueResponse * const q) : DescribeCommentsPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DescribeCommentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCommentsResponsePrivate::DescribeCommentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCommentsResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
