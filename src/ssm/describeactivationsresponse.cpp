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

#include "describeactivationsresponse.h"
#include "describeactivationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeActivationsResponse
 *
 * @brief  Handles SSM DescribeActivations responses.
 *
 * @see    SSMClient::describeActivations
 */

/**
 * @brief  Constructs a new DescribeActivationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeActivationsResponse::DescribeActivationsResponse(
        const DescribeActivationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeActivationsResponsePrivate(this), parent)
{
    setRequest(new DescribeActivationsRequest(request));
    setReply(reply);
}

const DescribeActivationsRequest * DescribeActivationsResponse::request() const
{
    Q_D(const DescribeActivationsResponse);
    return static_cast<const DescribeActivationsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeActivations response.
 *
 * @param  response  Response to parse.
 */
void DescribeActivationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeActivationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeActivationsResponsePrivate
 *
 * @brief  Private implementation for DescribeActivationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeActivationsResponse instance.
 */
DescribeActivationsResponsePrivate::DescribeActivationsResponsePrivate(
    DescribeActivationsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeActivationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeActivationsResponsePrivate::DescribeActivationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeActivationsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
