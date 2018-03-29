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

#include "rebootinstancesresponse.h"
#include "rebootinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  RebootInstancesResponse
 *
 * @brief  Handles EC2 RebootInstances responses.
 *
 * @see    EC2Client::rebootInstances
 */

/**
 * @brief  Constructs a new RebootInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootInstancesResponse::RebootInstancesResponse(
        const RebootInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new RebootInstancesResponsePrivate(this), parent)
{
    setRequest(new RebootInstancesRequest(request));
    setReply(reply);
}

const RebootInstancesRequest * RebootInstancesResponse::request() const
{
    Q_D(const RebootInstancesResponse);
    return static_cast<const RebootInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 RebootInstances response.
 *
 * @param  response  Response to parse.
 */
void RebootInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebootInstancesResponsePrivate
 *
 * @brief  Private implementation for RebootInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootInstancesResponse instance.
 */
RebootInstancesResponsePrivate::RebootInstancesResponsePrivate(
    RebootInstancesQueueResponse * const q) : RebootInstancesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 RebootInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootInstancesResponsePrivate::RebootInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
