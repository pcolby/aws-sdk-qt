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

#include "describeendpointsresponse.h"
#include "describeendpointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DescribeEndpointsResponse
 *
 * \brief The DescribeEndpointsResponse class provides an interace for MediaConvert DescribeEndpoints responses.
 *
 * \ingroup MediaConvert
 *
 *
 * \sa MediaConvertClient::describeEndpoints
 */

/*!
 * @brief  Constructs a new DescribeEndpointsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEndpointsResponse::DescribeEndpointsResponse(
        const DescribeEndpointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new DescribeEndpointsResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointsRequest(request));
    setReply(reply);
}

const DescribeEndpointsRequest * DescribeEndpointsResponse::request() const
{
    Q_D(const DescribeEndpointsResponse);
    return static_cast<const DescribeEndpointsRequest *>(d->request);
}

/*!
 * @brief  Parse a MediaConvert DescribeEndpoints response.
 *
 * @param  response  Response to parse.
 */
void DescribeEndpointsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEndpointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeEndpointsResponsePrivate
 *
 * \brief Private implementation for DescribeEndpointsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEndpointsResponse instance.
 */
DescribeEndpointsResponsePrivate::DescribeEndpointsResponsePrivate(
    DescribeEndpointsResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MediaConvert DescribeEndpointsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEndpointsResponsePrivate::parseDescribeEndpointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointsResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
