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

#include "describeinstanceinformationresponse.h"
#include "describeinstanceinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeInstanceInformationResponse
 *
 * @brief  Handles SSM DescribeInstanceInformation responses.
 *
 * @see    SSMClient::describeInstanceInformation
 */

/**
 * @brief  Constructs a new DescribeInstanceInformationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstanceInformationResponse::DescribeInstanceInformationResponse(
        const DescribeInstanceInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeInstanceInformationResponsePrivate(this), parent)
{
    setRequest(new DescribeInstanceInformationRequest(request));
    setReply(reply);
}

const DescribeInstanceInformationRequest * DescribeInstanceInformationResponse::request() const
{
    Q_D(const DescribeInstanceInformationResponse);
    return static_cast<const DescribeInstanceInformationRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeInstanceInformation response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstanceInformationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstanceInformationResponsePrivate
 *
 * @brief  Private implementation for DescribeInstanceInformationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstanceInformationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstanceInformationResponse instance.
 */
DescribeInstanceInformationResponsePrivate::DescribeInstanceInformationResponsePrivate(
    DescribeInstanceInformationQueueResponse * const q) : DescribeInstanceInformationPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeInstanceInformationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstanceInformationResponsePrivate::DescribeInstanceInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstanceInformationResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
