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

#include "describelaunchtemplatesresponse.h"
#include "describelaunchtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeLaunchTemplatesResponse
 *
 * @brief  Handles EC2 DescribeLaunchTemplates responses.
 *
 * @see    EC2Client::describeLaunchTemplates
 */

/**
 * @brief  Constructs a new DescribeLaunchTemplatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLaunchTemplatesResponse::DescribeLaunchTemplatesResponse(
        const DescribeLaunchTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeLaunchTemplatesResponsePrivate(this), parent)
{
    setRequest(new DescribeLaunchTemplatesRequest(request));
    setReply(reply);
}

const DescribeLaunchTemplatesRequest * DescribeLaunchTemplatesResponse::request() const
{
    Q_D(const DescribeLaunchTemplatesResponse);
    return static_cast<const DescribeLaunchTemplatesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeLaunchTemplates response.
 *
 * @param  response  Response to parse.
 */
void DescribeLaunchTemplatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLaunchTemplatesResponsePrivate
 *
 * @brief  Private implementation for DescribeLaunchTemplatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLaunchTemplatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLaunchTemplatesResponse instance.
 */
DescribeLaunchTemplatesResponsePrivate::DescribeLaunchTemplatesResponsePrivate(
    DescribeLaunchTemplatesResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeLaunchTemplatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLaunchTemplatesResponsePrivate::DescribeLaunchTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLaunchTemplatesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
