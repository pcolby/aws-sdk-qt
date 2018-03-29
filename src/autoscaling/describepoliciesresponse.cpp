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

#include "describepoliciesresponse.h"
#include "describepoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribePoliciesResponse
 *
 * @brief  Handles AutoScaling DescribePolicies responses.
 *
 * @see    AutoScalingClient::describePolicies
 */

/**
 * @brief  Constructs a new DescribePoliciesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePoliciesResponse::DescribePoliciesResponse(
        const DescribePoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribePoliciesResponsePrivate(this), parent)
{
    setRequest(new DescribePoliciesRequest(request));
    setReply(reply);
}

const DescribePoliciesRequest * DescribePoliciesResponse::request() const
{
    Q_D(const DescribePoliciesResponse);
    return static_cast<const DescribePoliciesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribePolicies response.
 *
 * @param  response  Response to parse.
 */
void DescribePoliciesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePoliciesResponsePrivate
 *
 * @brief  Private implementation for DescribePoliciesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePoliciesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePoliciesResponse instance.
 */
DescribePoliciesResponsePrivate::DescribePoliciesResponsePrivate(
    DescribePoliciesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribePoliciesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePoliciesResponsePrivate::DescribePoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePoliciesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
