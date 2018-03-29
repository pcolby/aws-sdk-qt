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

#include "describedomainresponse.h"
#include "describedomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  DescribeDomainResponse
 *
 * @brief  Handles SWF DescribeDomain responses.
 *
 * @see    SWFClient::describeDomain
 */

/**
 * @brief  Constructs a new DescribeDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDomainResponse::DescribeDomainResponse(
        const DescribeDomainRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new DescribeDomainResponsePrivate(this), parent)
{
    setRequest(new DescribeDomainRequest(request));
    setReply(reply);
}

const DescribeDomainRequest * DescribeDomainResponse::request() const
{
    Q_D(const DescribeDomainResponse);
    return static_cast<const DescribeDomainRequest *>(d->request);
}

/**
 * @brief  Parse a SWF DescribeDomain response.
 *
 * @param  response  Response to parse.
 */
void DescribeDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDomainResponsePrivate
 *
 * @brief  Private implementation for DescribeDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDomainResponse instance.
 */
DescribeDomainResponsePrivate::DescribeDomainResponsePrivate(
    DescribeDomainResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF DescribeDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDomainResponsePrivate::parseDescribeDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDomainResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
