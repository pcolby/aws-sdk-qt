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

#include "describeactivityresponse.h"
#include "describeactivityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SFN {

/**
 * @class  DescribeActivityResponse
 *
 * @brief  Handles SFN DescribeActivity responses.
 *
 * @see    SFNClient::describeActivity
 */

/**
 * @brief  Constructs a new DescribeActivityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeActivityResponse::DescribeActivityResponse(
        const DescribeActivityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new DescribeActivityResponsePrivate(this), parent)
{
    setRequest(new DescribeActivityRequest(request));
    setReply(reply);
}

const DescribeActivityRequest * DescribeActivityResponse::request() const
{
    Q_D(const DescribeActivityResponse);
    return static_cast<const DescribeActivityRequest *>(d->request);
}

/**
 * @brief  Parse a SFN DescribeActivity response.
 *
 * @param  response  Response to parse.
 */
void DescribeActivityResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeActivityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeActivityResponsePrivate
 *
 * @brief  Private implementation for DescribeActivityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActivityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeActivityResponse instance.
 */
DescribeActivityResponsePrivate::DescribeActivityResponsePrivate(
    DescribeActivityResponse * const q) : SFNResponsePrivate(q)
{

}

/**
 * @brief  Parse an SFN DescribeActivityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeActivityResponsePrivate::parseDescribeActivityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeActivityResponse"));
    /// @todo
}

} // namespace SFN
} // namespace QtAws
