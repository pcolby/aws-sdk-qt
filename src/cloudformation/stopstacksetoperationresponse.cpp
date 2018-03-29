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

#include "stopstacksetoperationresponse.h"
#include "stopstacksetoperationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFormation {

/**
 * @class  StopStackSetOperationResponse
 *
 * @brief  Handles CloudFormation StopStackSetOperation responses.
 *
 * @see    CloudFormationClient::stopStackSetOperation
 */

/**
 * @brief  Constructs a new StopStackSetOperationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopStackSetOperationResponse::StopStackSetOperationResponse(
        const StopStackSetOperationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new StopStackSetOperationResponsePrivate(this), parent)
{
    setRequest(new StopStackSetOperationRequest(request));
    setReply(reply);
}

const StopStackSetOperationRequest * StopStackSetOperationResponse::request() const
{
    Q_D(const StopStackSetOperationResponse);
    return static_cast<const StopStackSetOperationRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation StopStackSetOperation response.
 *
 * @param  response  Response to parse.
 */
void StopStackSetOperationResponse::parseSuccess(QIODevice &response)
{
    Q_D(StopStackSetOperationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopStackSetOperationResponsePrivate
 *
 * @brief  Private implementation for StopStackSetOperationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopStackSetOperationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopStackSetOperationResponse instance.
 */
StopStackSetOperationResponsePrivate::StopStackSetOperationResponsePrivate(
    StopStackSetOperationResponse * const q) : CloudFormationResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation StopStackSetOperationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopStackSetOperationResponsePrivate::parseStopStackSetOperationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopStackSetOperationResponse"));
    /// @todo
}

} // namespace CloudFormation
} // namespace QtAws
