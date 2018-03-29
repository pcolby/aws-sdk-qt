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

#include "describefindingsresponse.h"
#include "describefindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  DescribeFindingsResponse
 *
 * @brief  Handles Inspector DescribeFindings responses.
 *
 * @see    InspectorClient::describeFindings
 */

/**
 * @brief  Constructs a new DescribeFindingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFindingsResponse::DescribeFindingsResponse(
        const DescribeFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeFindingsResponsePrivate(this), parent)
{
    setRequest(new DescribeFindingsRequest(request));
    setReply(reply);
}

const DescribeFindingsRequest * DescribeFindingsResponse::request() const
{
    Q_D(const DescribeFindingsResponse);
    return static_cast<const DescribeFindingsRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector DescribeFindings response.
 *
 * @param  response  Response to parse.
 */
void DescribeFindingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFindingsResponsePrivate
 *
 * @brief  Private implementation for DescribeFindingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFindingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFindingsResponse instance.
 */
DescribeFindingsResponsePrivate::DescribeFindingsResponsePrivate(
    DescribeFindingsResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector DescribeFindingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFindingsResponsePrivate::DescribeFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFindingsResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
