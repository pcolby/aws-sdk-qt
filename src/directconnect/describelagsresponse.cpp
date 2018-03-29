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

#include "describelagsresponse.h"
#include "describelagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/**
 * @class  DescribeLagsResponse
 *
 * @brief  Handles DirectConnect DescribeLags responses.
 *
 * @see    DirectConnectClient::describeLags
 */

/**
 * @brief  Constructs a new DescribeLagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLagsResponse::DescribeLagsResponse(
        const DescribeLagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeLagsResponse(new DescribeLagsResponsePrivate(this), parent)
{
    setRequest(new DescribeLagsRequest(request));
    setReply(reply);
}

const DescribeLagsRequest * DescribeLagsResponse::request() const
{
    Q_D(const DescribeLagsResponse);
    return static_cast<const DescribeLagsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeLags response.
 *
 * @param  response  Response to parse.
 */
void DescribeLagsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeLagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLagsResponsePrivate
 *
 * @brief  Private implementation for DescribeLagsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLagsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLagsResponse instance.
 */
DescribeLagsResponsePrivate::DescribeLagsResponsePrivate(
    DescribeLagsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeLagsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLagsResponsePrivate::parseDescribeLagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLagsResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace QtAws
