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

#include "describeeffectivepatchesforpatchbaselineresponse.h"
#include "describeeffectivepatchesforpatchbaselineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribeEffectivePatchesForPatchBaselineResponse
 *
 * @brief  Handles SSM DescribeEffectivePatchesForPatchBaseline responses.
 *
 * @see    SSMClient::describeEffectivePatchesForPatchBaseline
 */

/**
 * @brief  Constructs a new DescribeEffectivePatchesForPatchBaselineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEffectivePatchesForPatchBaselineResponse::DescribeEffectivePatchesForPatchBaselineResponse(
        const DescribeEffectivePatchesForPatchBaselineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribeEffectivePatchesForPatchBaselineResponsePrivate(this), parent)
{
    setRequest(new DescribeEffectivePatchesForPatchBaselineRequest(request));
    setReply(reply);
}

const DescribeEffectivePatchesForPatchBaselineRequest * DescribeEffectivePatchesForPatchBaselineResponse::request() const
{
    Q_D(const DescribeEffectivePatchesForPatchBaselineResponse);
    return static_cast<const DescribeEffectivePatchesForPatchBaselineRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribeEffectivePatchesForPatchBaseline response.
 *
 * @param  response  Response to parse.
 */
void DescribeEffectivePatchesForPatchBaselineResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEffectivePatchesForPatchBaselineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEffectivePatchesForPatchBaselineResponsePrivate
 *
 * @brief  Private implementation for DescribeEffectivePatchesForPatchBaselineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEffectivePatchesForPatchBaselineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEffectivePatchesForPatchBaselineResponse instance.
 */
DescribeEffectivePatchesForPatchBaselineResponsePrivate::DescribeEffectivePatchesForPatchBaselineResponsePrivate(
    DescribeEffectivePatchesForPatchBaselineResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribeEffectivePatchesForPatchBaselineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEffectivePatchesForPatchBaselineResponsePrivate::parseDescribeEffectivePatchesForPatchBaselineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEffectivePatchesForPatchBaselineResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
