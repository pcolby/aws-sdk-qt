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

#include "checkdnsavailabilityresponse.h"
#include "checkdnsavailabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  CheckDNSAvailabilityResponse
 *
 * @brief  Handles ElasticBeanstalk CheckDNSAvailability responses.
 *
 * @see    ElasticBeanstalkClient::checkDNSAvailability
 */

/**
 * @brief  Constructs a new CheckDNSAvailabilityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CheckDNSAvailabilityResponse::CheckDNSAvailabilityResponse(
        const CheckDNSAvailabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new CheckDNSAvailabilityResponsePrivate(this), parent)
{
    setRequest(new CheckDNSAvailabilityRequest(request));
    setReply(reply);
}

const CheckDNSAvailabilityRequest * CheckDNSAvailabilityResponse::request() const
{
    Q_D(const CheckDNSAvailabilityResponse);
    return static_cast<const CheckDNSAvailabilityRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk CheckDNSAvailability response.
 *
 * @param  response  Response to parse.
 */
void CheckDNSAvailabilityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CheckDNSAvailabilityResponsePrivate
 *
 * @brief  Private implementation for CheckDNSAvailabilityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CheckDNSAvailabilityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CheckDNSAvailabilityResponse instance.
 */
CheckDNSAvailabilityResponsePrivate::CheckDNSAvailabilityResponsePrivate(
    CheckDNSAvailabilityQueueResponse * const q) : CheckDNSAvailabilityPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk CheckDNSAvailabilityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CheckDNSAvailabilityResponsePrivate::CheckDNSAvailabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CheckDNSAvailabilityResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
