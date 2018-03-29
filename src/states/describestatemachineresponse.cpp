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

#include "describestatemachineresponse.h"
#include "describestatemachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/**
 * @class  DescribeStateMachineResponse
 *
 * @brief  Handles SFN DescribeStateMachine responses.
 *
 * @see    SFNClient::describeStateMachine
 */

/**
 * @brief  Constructs a new DescribeStateMachineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeStateMachineResponse::DescribeStateMachineResponse(
        const DescribeStateMachineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new DescribeStateMachineResponsePrivate(this), parent)
{
    setRequest(new DescribeStateMachineRequest(request));
    setReply(reply);
}

const DescribeStateMachineRequest * DescribeStateMachineResponse::request() const
{
    Q_D(const DescribeStateMachineResponse);
    return static_cast<const DescribeStateMachineRequest *>(d->request);
}

/**
 * @brief  Parse a SFN DescribeStateMachine response.
 *
 * @param  response  Response to parse.
 */
void DescribeStateMachineResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeStateMachineResponsePrivate
 *
 * @brief  Private implementation for DescribeStateMachineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeStateMachineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeStateMachineResponse instance.
 */
DescribeStateMachineResponsePrivate::DescribeStateMachineResponsePrivate(
    DescribeStateMachineQueueResponse * const q) : DescribeStateMachinePrivate(q)
{

}

/**
 * @brief  Parse an SFN DescribeStateMachineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeStateMachineResponsePrivate::DescribeStateMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStateMachineResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
