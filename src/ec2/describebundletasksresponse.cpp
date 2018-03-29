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

#include "describebundletasksresponse.h"
#include "describebundletasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeBundleTasksResponse
 *
 * @brief  Handles EC2 DescribeBundleTasks responses.
 *
 * @see    EC2Client::describeBundleTasks
 */

/**
 * @brief  Constructs a new DescribeBundleTasksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBundleTasksResponse::DescribeBundleTasksResponse(
        const DescribeBundleTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeBundleTasksResponsePrivate(this), parent)
{
    setRequest(new DescribeBundleTasksRequest(request));
    setReply(reply);
}

const DescribeBundleTasksRequest * DescribeBundleTasksResponse::request() const
{
    Q_D(const DescribeBundleTasksResponse);
    return static_cast<const DescribeBundleTasksRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeBundleTasks response.
 *
 * @param  response  Response to parse.
 */
void DescribeBundleTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeBundleTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeBundleTasksResponsePrivate
 *
 * @brief  Private implementation for DescribeBundleTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBundleTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBundleTasksResponse instance.
 */
DescribeBundleTasksResponsePrivate::DescribeBundleTasksResponsePrivate(
    DescribeBundleTasksResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeBundleTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBundleTasksResponsePrivate::parseDescribeBundleTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBundleTasksResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
