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

#include "terminateinstancesresponse.h"
#include "terminateinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  TerminateInstancesResponse
 *
 * @brief  Handles EC2 TerminateInstances responses.
 *
 * @see    EC2Client::terminateInstances
 */

/**
 * @brief  Constructs a new TerminateInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TerminateInstancesResponse::TerminateInstancesResponse(
        const TerminateInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new TerminateInstancesResponsePrivate(this), parent)
{
    setRequest(new TerminateInstancesRequest(request));
    setReply(reply);
}

const TerminateInstancesRequest * TerminateInstancesResponse::request() const
{
    Q_D(const TerminateInstancesResponse);
    return static_cast<const TerminateInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 TerminateInstances response.
 *
 * @param  response  Response to parse.
 */
void TerminateInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TerminateInstancesResponsePrivate
 *
 * @brief  Private implementation for TerminateInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TerminateInstancesResponse instance.
 */
TerminateInstancesResponsePrivate::TerminateInstancesResponsePrivate(
    TerminateInstancesResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 TerminateInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TerminateInstancesResponsePrivate::TerminateInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
