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

#include "describeparametersresponse.h"
#include "describeparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/**
 * @class  DescribeParametersResponse
 *
 * @brief  Handles DAX DescribeParameters responses.
 *
 * @see    DAXClient::describeParameters
 */

/**
 * @brief  Constructs a new DescribeParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeParametersResponse::DescribeParametersResponse(
        const DescribeParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeParametersResponse(new DescribeParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeParametersRequest(request));
    setReply(reply);
}

const DescribeParametersRequest * DescribeParametersResponse::request() const
{
    Q_D(const DescribeParametersResponse);
    return static_cast<const DescribeParametersRequest *>(d->request);
}

/**
 * @brief  Parse a DAX DescribeParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeParametersResponse instance.
 */
DescribeParametersResponsePrivate::DescribeParametersResponsePrivate(
    DescribeParametersResponse * const q) : DAXResponsePrivate(q)
{

}

/**
 * @brief  Parse an DAX DescribeParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeParametersResponsePrivate::parseDescribeParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeParametersResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
