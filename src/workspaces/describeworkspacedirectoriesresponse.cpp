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

#include "describeworkspacedirectoriesresponse.h"
#include "describeworkspacedirectoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkSpaces {

/**
 * @class  DescribeWorkspaceDirectoriesResponse
 *
 * @brief  Handles WorkSpaces DescribeWorkspaceDirectories responses.
 *
 * @see    WorkSpacesClient::describeWorkspaceDirectories
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeWorkspaceDirectoriesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new DescribeWorkspaceDirectoriesResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceDirectoriesRequest(request));
    setReply(reply);
}

const DescribeWorkspaceDirectoriesRequest * DescribeWorkspaceDirectoriesResponse::request() const
{
    Q_D(const DescribeWorkspaceDirectoriesResponse);
    return static_cast<const DescribeWorkspaceDirectoriesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkSpaces DescribeWorkspaceDirectories response.
 *
 * @param  response  Response to parse.
 */
void DescribeWorkspaceDirectoriesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeWorkspaceDirectoriesResponsePrivate
 *
 * @brief  Private implementation for DescribeWorkspaceDirectoriesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeWorkspaceDirectoriesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeWorkspaceDirectoriesResponse instance.
 */
DescribeWorkspaceDirectoriesResponsePrivate::DescribeWorkspaceDirectoriesResponsePrivate(
    DescribeWorkspaceDirectoriesQueueResponse * const q) : DescribeWorkspaceDirectoriesPrivate(q)
{

}

/**
 * @brief  Parse an WorkSpaces DescribeWorkspaceDirectoriesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeWorkspaceDirectoriesResponsePrivate::DescribeWorkspaceDirectoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceDirectoriesResponse"));
    /// @todo
}
