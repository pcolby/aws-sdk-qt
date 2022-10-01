// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbsubnetgroupsresponse.h"
#include "describedbsubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBSubnetGroupsResponse
 * \brief The DescribeDBSubnetGroupsResponse class provides an interace for DocDb DescribeDBSubnetGroups responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBSubnetGroups
 */

/*!
 * Constructs a DescribeDBSubnetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBSubnetGroupsResponse::DescribeDBSubnetGroupsResponse(
        const DescribeDBSubnetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeDBSubnetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBSubnetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBSubnetGroupsRequest * DescribeDBSubnetGroupsResponse::request() const
{
    Q_D(const DescribeDBSubnetGroupsResponse);
    return static_cast<const DescribeDBSubnetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeDBSubnetGroups \a response.
 */
void DescribeDBSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBSubnetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeDBSubnetGroupsResponsePrivate
 * \brief The DescribeDBSubnetGroupsResponsePrivate class provides private implementation for DescribeDBSubnetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBSubnetGroupsResponsePrivate object with public implementation \a q.
 */
DescribeDBSubnetGroupsResponsePrivate::DescribeDBSubnetGroupsResponsePrivate(
    DescribeDBSubnetGroupsResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeDBSubnetGroups response element from \a xml.
 */
void DescribeDBSubnetGroupsResponsePrivate::parseDescribeDBSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBSubnetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
