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

#include "describeprincipalidformatresponse.h"
#include "describeprincipalidformatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribePrincipalIdFormatResponse
 *
 * @brief  Handles EC2 DescribePrincipalIdFormat responses.
 *
 * @see    EC2Client::describePrincipalIdFormat
 */

/**
 * @brief  Constructs a new DescribePrincipalIdFormatResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePrincipalIdFormatResponse::DescribePrincipalIdFormatResponse(
        const DescribePrincipalIdFormatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribePrincipalIdFormatResponsePrivate(this), parent)
{
    setRequest(new DescribePrincipalIdFormatRequest(request));
    setReply(reply);
}

const DescribePrincipalIdFormatRequest * DescribePrincipalIdFormatResponse::request() const
{
    Q_D(const DescribePrincipalIdFormatResponse);
    return static_cast<const DescribePrincipalIdFormatRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribePrincipalIdFormat response.
 *
 * @param  response  Response to parse.
 */
void DescribePrincipalIdFormatResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePrincipalIdFormatResponsePrivate
 *
 * @brief  Private implementation for DescribePrincipalIdFormatResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePrincipalIdFormatResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePrincipalIdFormatResponse instance.
 */
DescribePrincipalIdFormatResponsePrivate::DescribePrincipalIdFormatResponsePrivate(
    DescribePrincipalIdFormatQueueResponse * const q) : DescribePrincipalIdFormatPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribePrincipalIdFormatResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePrincipalIdFormatResponsePrivate::DescribePrincipalIdFormatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePrincipalIdFormatResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
