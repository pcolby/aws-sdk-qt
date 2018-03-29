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

#include "describeoperatingsystemsresponse.h"
#include "describeoperatingsystemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeOperatingSystemsResponse
 *
 * @brief  Handles OpsWorks DescribeOperatingSystems responses.
 *
 * @see    OpsWorksClient::describeOperatingSystems
 */

/**
 * @brief  Constructs a new DescribeOperatingSystemsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOperatingSystemsResponse::DescribeOperatingSystemsResponse(
        const DescribeOperatingSystemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeOperatingSystemsResponsePrivate(this), parent)
{
    setRequest(new DescribeOperatingSystemsRequest(request));
    setReply(reply);
}

const DescribeOperatingSystemsRequest * DescribeOperatingSystemsResponse::request() const
{
    Q_D(const DescribeOperatingSystemsResponse);
    return static_cast<const DescribeOperatingSystemsRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeOperatingSystems response.
 *
 * @param  response  Response to parse.
 */
void DescribeOperatingSystemsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeOperatingSystemsResponsePrivate
 *
 * @brief  Private implementation for DescribeOperatingSystemsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOperatingSystemsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeOperatingSystemsResponse instance.
 */
DescribeOperatingSystemsResponsePrivate::DescribeOperatingSystemsResponsePrivate(
    DescribeOperatingSystemsResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeOperatingSystemsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeOperatingSystemsResponsePrivate::DescribeOperatingSystemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOperatingSystemsResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
