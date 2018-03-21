/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeorganizationalunitresponse.h"
#include "describeorganizationalunitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Organizations {

/**
 * @class  DescribeOrganizationalUnitResponse
 *
 * @brief  Handles Organizations DescribeOrganizationalUnit responses.
 *
 * @see    OrganizationsClient::describeOrganizationalUnit
 */

/**
 * @brief  Constructs a new DescribeOrganizationalUnitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOrganizationalUnitResponse::DescribeOrganizationalUnitResponse(
        const DescribeOrganizationalUnitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OrganizationsResponse(new DescribeOrganizationalUnitResponsePrivate(this), parent)
{
    setRequest(new DescribeOrganizationalUnitRequest(request));
    setReply(reply);
}

const DescribeOrganizationalUnitRequest * DescribeOrganizationalUnitResponse::request() const
{
    Q_D(const DescribeOrganizationalUnitResponse);
    return static_cast<const DescribeOrganizationalUnitRequest *>(d->request);
}

/**
 * @brief  Parse a Organizations DescribeOrganizationalUnit response.
 *
 * @param  response  Response to parse.
 */
void DescribeOrganizationalUnitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeOrganizationalUnitResponsePrivate
 *
 * @brief  Private implementation for DescribeOrganizationalUnitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOrganizationalUnitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeOrganizationalUnitResponse instance.
 */
DescribeOrganizationalUnitResponsePrivate::DescribeOrganizationalUnitResponsePrivate(
    DescribeOrganizationalUnitQueueResponse * const q) : DescribeOrganizationalUnitPrivate(q)
{

}

/**
 * @brief  Parse an Organizations DescribeOrganizationalUnitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeOrganizationalUnitResponsePrivate::DescribeOrganizationalUnitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOrganizationalUnitResponse"));
    /// @todo
}

} // namespace Organizations
} // namespace AWS
