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

#include "describedocumentpermissionresponse.h"
#include "describedocumentpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DescribeDocumentPermissionResponse
 *
 * @brief  Handles SSM DescribeDocumentPermission responses.
 *
 * @see    SSMClient::describeDocumentPermission
 */

/**
 * @brief  Constructs a new DescribeDocumentPermissionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDocumentPermissionResponse::DescribeDocumentPermissionResponse(
        const DescribeDocumentPermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeDocumentPermissionResponsePrivate(this), parent)
{
    setRequest(new DescribeDocumentPermissionRequest(request));
    setReply(reply);
}

const DescribeDocumentPermissionRequest * DescribeDocumentPermissionResponse::request() const
{
    Q_D(const DescribeDocumentPermissionResponse);
    return static_cast<const DescribeDocumentPermissionRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeDocumentPermission response.
 *
 * @param  response  Response to parse.
 */
void DescribeDocumentPermissionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDocumentPermissionResponsePrivate
 *
 * @brief  Private implementation for DescribeDocumentPermissionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDocumentPermissionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDocumentPermissionResponse instance.
 */
DescribeDocumentPermissionResponsePrivate::DescribeDocumentPermissionResponsePrivate(
    DescribeDocumentPermissionQueueResponse * const q) : DescribeDocumentPermissionPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeDocumentPermissionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDocumentPermissionResponsePrivate::DescribeDocumentPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDocumentPermissionResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
