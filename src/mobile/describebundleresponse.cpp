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

#include "describebundleresponse.h"
#include "describebundleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/**
 * @class  DescribeBundleResponse
 *
 * @brief  Handles Mobile DescribeBundle responses.
 *
 * @see    MobileClient::describeBundle
 */

/**
 * @brief  Constructs a new DescribeBundleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBundleResponse::DescribeBundleResponse(
        const DescribeBundleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new DescribeBundleResponsePrivate(this), parent)
{
    setRequest(new DescribeBundleRequest(request));
    setReply(reply);
}

const DescribeBundleRequest * DescribeBundleResponse::request() const
{
    Q_D(const DescribeBundleResponse);
    return static_cast<const DescribeBundleRequest *>(d->request);
}

/**
 * @brief  Parse a Mobile DescribeBundle response.
 *
 * @param  response  Response to parse.
 */
void DescribeBundleResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeBundleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeBundleResponsePrivate
 *
 * @brief  Private implementation for DescribeBundleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBundleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBundleResponse instance.
 */
DescribeBundleResponsePrivate::DescribeBundleResponsePrivate(
    DescribeBundleResponse * const q) : MobileResponsePrivate(q)
{

}

/**
 * @brief  Parse an Mobile DescribeBundleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBundleResponsePrivate::parseDescribeBundleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBundleResponse"));
    /// @todo
}

} // namespace Mobile
} // namespace QtAws
