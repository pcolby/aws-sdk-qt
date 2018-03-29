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

#include "describedirectoriesresponse.h"
#include "describedirectoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DescribeDirectoriesResponse
 *
 * @brief  Handles DirectoryService DescribeDirectories responses.
 *
 * @see    DirectoryServiceClient::describeDirectories
 */

/**
 * @brief  Constructs a new DescribeDirectoriesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDirectoriesResponse::DescribeDirectoriesResponse(
        const DescribeDirectoriesRequest &request,
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
    DescribeDirectoriesResponse * const q) : DirectoryServiceResponsePrivate(q)
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

} // namespace DirectoryService
} // namespace QtAws
