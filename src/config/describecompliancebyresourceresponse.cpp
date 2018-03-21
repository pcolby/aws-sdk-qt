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

#include "describecompliancebyresourceresponse.h"
#include "describecompliancebyresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ConfigService {

/**
 * @class  DescribeComplianceByResourceResponse
 *
 * @brief  Handles ConfigService DescribeComplianceByResource responses.
 *
 * @see    ConfigServiceClient::describeComplianceByResource
 */

/**
 * @brief  Constructs a new DescribeComplianceByResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeComplianceByResourceResponse::DescribeComplianceByResourceResponse(
        const DescribeComplianceByResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribeComplianceByResourceResponsePrivate(this), parent)
{
    setRequest(new DescribeComplianceByResourceRequest(request));
    setReply(reply);
}

const DescribeComplianceByResourceRequest * DescribeComplianceByResourceResponse::request() const
{
    Q_D(const DescribeComplianceByResourceResponse);
    return static_cast<const DescribeComplianceByResourceRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeComplianceByResource response.
 *
 * @param  response  Response to parse.
 */
void DescribeComplianceByResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeComplianceByResourceResponsePrivate
 *
 * @brief  Private implementation for DescribeComplianceByResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeComplianceByResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeComplianceByResourceResponse instance.
 */
DescribeComplianceByResourceResponsePrivate::DescribeComplianceByResourceResponsePrivate(
    DescribeComplianceByResourceQueueResponse * const q) : DescribeComplianceByResourcePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeComplianceByResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeComplianceByResourceResponsePrivate::DescribeComplianceByResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeComplianceByResourceResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace AWS
