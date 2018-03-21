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

#include "describeconfigurationrecordersresponse.h"
#include "describeconfigurationrecordersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ConfigService {

/**
 * @class  DescribeConfigurationRecordersResponse
 *
 * @brief  Handles ConfigService DescribeConfigurationRecorders responses.
 *
 * @see    ConfigServiceClient::describeConfigurationRecorders
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationRecordersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribeConfigurationRecordersResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationRecordersRequest(request));
    setReply(reply);
}

const DescribeConfigurationRecordersRequest * DescribeConfigurationRecordersResponse::request() const
{
    Q_D(const DescribeConfigurationRecordersResponse);
    return static_cast<const DescribeConfigurationRecordersRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeConfigurationRecorders response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigurationRecordersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConfigurationRecordersResponsePrivate
 *
 * @brief  Private implementation for DescribeConfigurationRecordersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRecordersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigurationRecordersResponse instance.
 */
DescribeConfigurationRecordersResponsePrivate::DescribeConfigurationRecordersResponsePrivate(
    DescribeConfigurationRecordersQueueResponse * const q) : DescribeConfigurationRecordersPrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeConfigurationRecordersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigurationRecordersResponsePrivate::DescribeConfigurationRecordersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationRecordersResponse"));
    /// @todo
}
