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

#include "describeeffectiveinstanceassociationsresponse.h"
#include "describeeffectiveinstanceassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeEffectiveInstanceAssociationsResponse
 *
 * @brief  Handles SSM DescribeEffectiveInstanceAssociations responses.
 *
 * @see    SSMClient::describeEffectiveInstanceAssociations
 */

/**
 * @brief  Constructs a new DescribeEffectiveInstanceAssociationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEffectiveInstanceAssociationsResponse::DescribeEffectiveInstanceAssociationsResponse(
        const DescribeEffectiveInstanceAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeEffectiveInstanceAssociationsResponse(new DescribeEffectiveInstanceAssociationsResponsePrivate(this), parent)
{
    setRequest(new DescribeEffectiveInstanceAssociationsRequest(request));
    setReply(reply);
}

const DescribeEffectiveInstanceAssociationsRequest * DescribeEffectiveInstanceAssociationsResponse::request() const
{
    Q_D(const DescribeEffectiveInstanceAssociationsResponse);
    return static_cast<const DescribeEffectiveInstanceAssociationsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeEffectiveInstanceAssociations response.
 *
 * @param  response  Response to parse.
 */
void DescribeEffectiveInstanceAssociationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEffectiveInstanceAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEffectiveInstanceAssociationsResponsePrivate
 *
 * @brief  Private implementation for DescribeEffectiveInstanceAssociationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEffectiveInstanceAssociationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEffectiveInstanceAssociationsResponse instance.
 */
DescribeEffectiveInstanceAssociationsResponsePrivate::DescribeEffectiveInstanceAssociationsResponsePrivate(
    DescribeEffectiveInstanceAssociationsResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeEffectiveInstanceAssociationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEffectiveInstanceAssociationsResponsePrivate::parseDescribeEffectiveInstanceAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEffectiveInstanceAssociationsResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
