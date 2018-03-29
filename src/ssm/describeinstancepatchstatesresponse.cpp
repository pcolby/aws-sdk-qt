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

#include "describeinstancepatchstatesresponse.h"
#include "describeinstancepatchstatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeInstancePatchStatesResponse
 *
 * @brief  Handles SSM DescribeInstancePatchStates responses.
 *
 * @see    SSMClient::describeInstancePatchStates
 */

/**
 * @brief  Constructs a new DescribeInstancePatchStatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstancePatchStatesResponse::DescribeInstancePatchStatesResponse(
        const DescribeInstancePatchStatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeInstancePatchStatesResponsePrivate(this), parent)
{
    setRequest(new DescribeInstancePatchStatesRequest(request));
    setReply(reply);
}

const DescribeInstancePatchStatesRequest * DescribeInstancePatchStatesResponse::request() const
{
    Q_D(const DescribeInstancePatchStatesResponse);
    return static_cast<const DescribeInstancePatchStatesRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeInstancePatchStates response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstancePatchStatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstancePatchStatesResponsePrivate
 *
 * @brief  Private implementation for DescribeInstancePatchStatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancePatchStatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstancePatchStatesResponse instance.
 */
DescribeInstancePatchStatesResponsePrivate::DescribeInstancePatchStatesResponsePrivate(
    DescribeInstancePatchStatesResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeInstancePatchStatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstancePatchStatesResponsePrivate::DescribeInstancePatchStatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstancePatchStatesResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
