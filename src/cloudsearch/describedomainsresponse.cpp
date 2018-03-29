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

#include "describedomainsresponse.h"
#include "describedomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudSearch {

/**
 * @class  DescribeDomainsResponse
 *
 * @brief  Handles CloudSearch DescribeDomains responses.
 *
 * @see    CloudSearchClient::describeDomains
 */

/**
 * @brief  Constructs a new DescribeDomainsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDomainsResponse::DescribeDomainsResponse(
        const DescribeDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudSearchResponse(new DescribeDomainsResponsePrivate(this), parent)
{
    setRequest(new DescribeDomainsRequest(request));
    setReply(reply);
}

const DescribeDomainsRequest * DescribeDomainsResponse::request() const
{
    Q_D(const DescribeDomainsResponse);
    return static_cast<const DescribeDomainsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudSearch DescribeDomains response.
 *
 * @param  response  Response to parse.
 */
void DescribeDomainsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDomainsResponsePrivate
 *
 * @brief  Private implementation for DescribeDomainsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDomainsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDomainsResponse instance.
 */
DescribeDomainsResponsePrivate::DescribeDomainsResponsePrivate(
    DescribeDomainsResponse * const q) : CloudSearchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudSearch DescribeDomainsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDomainsResponsePrivate::DescribeDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainsResponse"));
    /// @todo
}

} // namespace CloudSearch
} // namespace QtAws
