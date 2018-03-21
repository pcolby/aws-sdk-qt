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

#include "describedirectoriesresponse.h"
#include "describedirectoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  DescribeDirectoriesResponse
 *
 * @brief  Handles DirectoryService DescribeDirectories responses.
 *
 * @see    DirectoryServiceClient::describeDirectories
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDirectoriesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DescribeDirectoriesResponsePrivate(this), parent)
{
    setRequest(new DescribeDirectoriesRequest(request));
    setReply(reply);
}

const DescribeDirectoriesRequest * DescribeDirectoriesResponse::request() const
{
    Q_D(const DescribeDirectoriesResponse);
    return static_cast<const DescribeDirectoriesRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DescribeDirectories response.
 *
 * @param  response  Response to parse.
 */
void DescribeDirectoriesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDirectoriesResponsePrivate
 *
 * @brief  Private implementation for DescribeDirectoriesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDirectoriesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDirectoriesResponse instance.
 */
DescribeDirectoriesResponsePrivate::DescribeDirectoriesResponsePrivate(
    DescribeDirectoriesQueueResponse * const q) : DescribeDirectoriesPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DescribeDirectoriesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDirectoriesResponsePrivate::DescribeDirectoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDirectoriesResponse"));
    /// @todo
}
