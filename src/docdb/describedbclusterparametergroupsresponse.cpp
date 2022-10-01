// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbclusterparametergroupsresponse.h"
#include "describedbclusterparametergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterParameterGroupsResponse
 * \brief The DescribeDBClusterParameterGroupsResponse class provides an interace for DocDb DescribeDBClusterParameterGroups responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterParameterGroups
 */

/*!
 * Constructs a DescribeDBClusterParameterGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBClusterParameterGroupsResponse::DescribeDBClusterParameterGroupsResponse(
        const DescribeDBClusterParameterGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeDBClusterParameterGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterParameterGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBClusterParameterGroupsRequest * DescribeDBClusterParameterGroupsResponse::request() const
{
    Q_D(const DescribeDBClusterParameterGroupsResponse);
    return static_cast<const DescribeDBClusterParameterGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeDBClusterParameterGroups \a response.
 */
void DescribeDBClusterParameterGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBClusterParameterGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeDBClusterParameterGroupsResponsePrivate
 * \brief The DescribeDBClusterParameterGroupsResponsePrivate class provides private implementation for DescribeDBClusterParameterGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterParameterGroupsResponsePrivate object with public implementation \a q.
 */
DescribeDBClusterParameterGroupsResponsePrivate::DescribeDBClusterParameterGroupsResponsePrivate(
    DescribeDBClusterParameterGroupsResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeDBClusterParameterGroups response element from \a xml.
 */
void DescribeDBClusterParameterGroupsResponsePrivate::parseDescribeDBClusterParameterGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterParameterGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
