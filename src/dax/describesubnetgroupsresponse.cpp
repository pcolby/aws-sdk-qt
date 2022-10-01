// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesubnetgroupsresponse.h"
#include "describesubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Dax {

/*!
 * \class QtAws::Dax::DescribeSubnetGroupsResponse
 * \brief The DescribeSubnetGroupsResponse class provides an interace for Dax DescribeSubnetGroups responses.
 *
 * \inmodule QtAwsDax
 *
 *  DAX is a managed caching service engineered for Amazon DynamoDB. DAX dramatically speeds up database reads by caching
 *  frequently-accessed data from DynamoDB, so applications can access that data with sub-millisecond latency. You can
 *  create a DAX cluster easily, using the AWS Management Console. With a few simple modifications to your code, your
 *  application can begin taking advantage of the DAX cluster and realize significant improvements in read
 *
 * \sa DaxClient::describeSubnetGroups
 */

/*!
 * Constructs a DescribeSubnetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSubnetGroupsResponse::DescribeSubnetGroupsResponse(
        const DescribeSubnetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DaxResponse(new DescribeSubnetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeSubnetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSubnetGroupsRequest * DescribeSubnetGroupsResponse::request() const
{
    Q_D(const DescribeSubnetGroupsResponse);
    return static_cast<const DescribeSubnetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Dax DescribeSubnetGroups \a response.
 */
void DescribeSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSubnetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Dax::DescribeSubnetGroupsResponsePrivate
 * \brief The DescribeSubnetGroupsResponsePrivate class provides private implementation for DescribeSubnetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsDax
 */

/*!
 * Constructs a DescribeSubnetGroupsResponsePrivate object with public implementation \a q.
 */
DescribeSubnetGroupsResponsePrivate::DescribeSubnetGroupsResponsePrivate(
    DescribeSubnetGroupsResponse * const q) : DaxResponsePrivate(q)
{

}

/*!
 * Parses a Dax DescribeSubnetGroups response element from \a xml.
 */
void DescribeSubnetGroupsResponsePrivate::parseDescribeSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSubnetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Dax
} // namespace QtAws
