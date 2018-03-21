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

#include "describeworkspacesresponse.h"
#include "describeworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkSpaces {

/**
 * @class  DescribeWorkspacesResponse
 *
 * @brief  Handles WorkSpaces DescribeWorkspaces responses.
 *
 * @see    WorkSpacesClient::describeWorkspaces
 */

/**
 * @brief  Constructs a new DescribeWorkspacesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeWorkspacesResponse::DescribeWorkspacesResponse(
        const DescribeWorkspacesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeWorkspacesResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspacesRequest(request));
    setReply(reply);
}

const DescribeWorkspacesRequest * DescribeWorkspacesResponse::request() const
{
    Q_D(const DescribeWorkspacesResponse);
    return static_cast<const DescribeWorkspacesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkSpaces DescribeWorkspaces response.
 *
 * @param  response  Response to parse.
 */
void DescribeWorkspacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeWorkspacesResponsePrivate
 *
 * @brief  Private implementation for DescribeWorkspacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeWorkspacesResponse instance.
 */
DescribeWorkspacesResponsePrivate::DescribeWorkspacesResponsePrivate(
    DescribeWorkspacesQueueResponse * const q) : DescribeWorkspacesPrivate(q)
{

}

/**
 * @brief  Parse an WorkSpaces DescribeWorkspacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeWorkspacesResponsePrivate::DescribeWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspacesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace AWS
