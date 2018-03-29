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

#include "describeinstancepatchesresponse.h"
#include "describeinstancepatchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeInstancePatchesResponse
 *
 * @brief  Handles SSM DescribeInstancePatches responses.
 *
 * @see    SSMClient::describeInstancePatches
 */

/**
 * @brief  Constructs a new DescribeInstancePatchesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstancePatchesResponse::DescribeInstancePatchesResponse(
        const DescribeInstancePatchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeInstancePatchesResponsePrivate(this), parent)
{
    setRequest(new DescribeInstancePatchesRequest(request));
    setReply(reply);
}

const DescribeInstancePatchesRequest * DescribeInstancePatchesResponse::request() const
{
    Q_D(const DescribeInstancePatchesResponse);
    return static_cast<const DescribeInstancePatchesRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeInstancePatches response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstancePatchesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeInstancePatchesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstancePatchesResponsePrivate
 *
 * @brief  Private implementation for DescribeInstancePatchesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancePatchesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstancePatchesResponse instance.
 */
DescribeInstancePatchesResponsePrivate::DescribeInstancePatchesResponsePrivate(
    DescribeInstancePatchesResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeInstancePatchesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstancePatchesResponsePrivate::DescribeInstancePatchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstancePatchesResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
