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

#include "describefpgaimageattributeresponse.h"
#include "describefpgaimageattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeFpgaImageAttributeResponse
 *
 * @brief  Handles EC2 DescribeFpgaImageAttribute responses.
 *
 * @see    EC2Client::describeFpgaImageAttribute
 */

/**
 * @brief  Constructs a new DescribeFpgaImageAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFpgaImageAttributeResponse::DescribeFpgaImageAttributeResponse(
        const DescribeFpgaImageAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeFpgaImageAttributeResponsePrivate(this), parent)
{
    setRequest(new DescribeFpgaImageAttributeRequest(request));
    setReply(reply);
}

const DescribeFpgaImageAttributeRequest * DescribeFpgaImageAttributeResponse::request() const
{
    Q_D(const DescribeFpgaImageAttributeResponse);
    return static_cast<const DescribeFpgaImageAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeFpgaImageAttribute response.
 *
 * @param  response  Response to parse.
 */
void DescribeFpgaImageAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeFpgaImageAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFpgaImageAttributeResponsePrivate
 *
 * @brief  Private implementation for DescribeFpgaImageAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFpgaImageAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFpgaImageAttributeResponse instance.
 */
DescribeFpgaImageAttributeResponsePrivate::DescribeFpgaImageAttributeResponsePrivate(
    DescribeFpgaImageAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeFpgaImageAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFpgaImageAttributeResponsePrivate::parseDescribeFpgaImageAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFpgaImageAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
