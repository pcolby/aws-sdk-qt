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

#include "describedefaultparametersresponse.h"
#include "describedefaultparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/**
 * @class  DescribeDefaultParametersResponse
 *
 * @brief  Handles DAX DescribeDefaultParameters responses.
 *
 * @see    DAXClient::describeDefaultParameters
 */

/**
 * @brief  Constructs a new DescribeDefaultParametersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDefaultParametersResponse::DescribeDefaultParametersResponse(
        const DescribeDefaultParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new DescribeDefaultParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeDefaultParametersRequest(request));
    setReply(reply);
}

const DescribeDefaultParametersRequest * DescribeDefaultParametersResponse::request() const
{
    Q_D(const DescribeDefaultParametersResponse);
    return static_cast<const DescribeDefaultParametersRequest *>(d->request);
}

/**
 * @brief  Parse a DAX DescribeDefaultParameters response.
 *
 * @param  response  Response to parse.
 */
void DescribeDefaultParametersResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDefaultParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDefaultParametersResponsePrivate
 *
 * @brief  Private implementation for DescribeDefaultParametersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDefaultParametersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDefaultParametersResponse instance.
 */
DescribeDefaultParametersResponsePrivate::DescribeDefaultParametersResponsePrivate(
    DescribeDefaultParametersResponse * const q) : DAXResponsePrivate(q)
{

}

/**
 * @brief  Parse an DAX DescribeDefaultParametersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDefaultParametersResponsePrivate::DescribeDefaultParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDefaultParametersResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
