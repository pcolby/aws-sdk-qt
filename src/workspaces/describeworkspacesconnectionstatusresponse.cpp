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

#include "describeworkspacesconnectionstatusresponse.h"
#include "describeworkspacesconnectionstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/**
 * @class  DescribeWorkspacesConnectionStatusResponse
 *
 * @brief  Handles WorkSpaces DescribeWorkspacesConnectionStatus responses.
 *
 * @see    WorkSpacesClient::describeWorkspacesConnectionStatus
 */

/**
 * @brief  Constructs a new DescribeWorkspacesConnectionStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeWorkspacesConnectionStatusResponse::DescribeWorkspacesConnectionStatusResponse(
        const DescribeWorkspacesConnectionStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeWorkspacesConnectionStatusResponse(new DescribeWorkspacesConnectionStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspacesConnectionStatusRequest(request));
    setReply(reply);
}

const DescribeWorkspacesConnectionStatusRequest * DescribeWorkspacesConnectionStatusResponse::request() const
{
    Q_D(const DescribeWorkspacesConnectionStatusResponse);
    return static_cast<const DescribeWorkspacesConnectionStatusRequest *>(d->request);
}

/**
 * @brief  Parse a WorkSpaces DescribeWorkspacesConnectionStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeWorkspacesConnectionStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeWorkspacesConnectionStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeWorkspacesConnectionStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeWorkspacesConnectionStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspacesConnectionStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeWorkspacesConnectionStatusResponse instance.
 */
DescribeWorkspacesConnectionStatusResponsePrivate::DescribeWorkspacesConnectionStatusResponsePrivate(
    DescribeWorkspacesConnectionStatusResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkSpaces DescribeWorkspacesConnectionStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeWorkspacesConnectionStatusResponsePrivate::parseDescribeWorkspacesConnectionStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspacesConnectionStatusResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace QtAws
