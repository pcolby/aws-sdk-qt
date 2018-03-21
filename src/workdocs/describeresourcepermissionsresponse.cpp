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

#include "describeresourcepermissionsresponse.h"
#include "describeresourcepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  DescribeResourcePermissionsResponse
 *
 * @brief  Handles WorkDocs DescribeResourcePermissions responses.
 *
 * @see    WorkDocsClient::describeResourcePermissions
 */

/**
 * @brief  Constructs a new DescribeResourcePermissionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeResourcePermissionsResponse::DescribeResourcePermissionsResponse(
        const DescribeResourcePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DescribeResourcePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeResourcePermissionsRequest(request));
    setReply(reply);
}

const DescribeResourcePermissionsRequest * DescribeResourcePermissionsResponse::request() const
{
    Q_D(const DescribeResourcePermissionsResponse);
    return static_cast<const DescribeResourcePermissionsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DescribeResourcePermissions response.
 *
 * @param  response  Response to parse.
 */
void DescribeResourcePermissionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeResourcePermissionsResponsePrivate
 *
 * @brief  Private implementation for DescribeResourcePermissionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeResourcePermissionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeResourcePermissionsResponse instance.
 */
DescribeResourcePermissionsResponsePrivate::DescribeResourcePermissionsResponsePrivate(
    DescribeResourcePermissionsQueueResponse * const q) : DescribeResourcePermissionsPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DescribeResourcePermissionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeResourcePermissionsResponsePrivate::DescribeResourcePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeResourcePermissionsResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace AWS
