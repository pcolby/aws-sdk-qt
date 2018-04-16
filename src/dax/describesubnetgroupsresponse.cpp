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

#include "describesubnetgroupsresponse.h"
#include "describesubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/*!
 * \class QtAws::DAX::DescribeSubnetGroupsResponse
 *
 * \brief The DescribeSubnetGroupsResponse class provides an interace for DAX DescribeSubnetGroups responses.
 *
 * \ingroup DAX
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DAXClient::describeSubnetGroups
 */

/*!
 * @brief  Constructs a new DescribeSubnetGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSubnetGroupsResponse::DescribeSubnetGroupsResponse(
        const DescribeSubnetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new DescribeSubnetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeSubnetGroupsRequest(request));
    setReply(reply);
}

const DescribeSubnetGroupsRequest * DescribeSubnetGroupsResponse::request() const
{
    Q_D(const DescribeSubnetGroupsResponse);
    return static_cast<const DescribeSubnetGroupsRequest *>(d->request);
}

/*!
 * @brief  Parse a DAX DescribeSubnetGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeSubnetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeSubnetGroupsResponsePrivate
 *
 * \brief Private implementation for DescribeSubnetGroupsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeSubnetGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSubnetGroupsResponse instance.
 */
DescribeSubnetGroupsResponsePrivate::DescribeSubnetGroupsResponsePrivate(
    DescribeSubnetGroupsResponse * const q) : DAXResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DAX DescribeSubnetGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSubnetGroupsResponsePrivate::parseDescribeSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSubnetGroupsResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
