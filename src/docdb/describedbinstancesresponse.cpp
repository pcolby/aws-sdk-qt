// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbinstancesresponse.h"
#include "describedbinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBInstancesResponse
 * \brief The DescribeDBInstancesResponse class provides an interace for DocDb DescribeDBInstances responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBInstances
 */

/*!
 * Constructs a DescribeDBInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBInstancesResponse::DescribeDBInstancesResponse(
        const DescribeDBInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeDBInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeDBInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBInstancesRequest * DescribeDBInstancesResponse::request() const
{
    Q_D(const DescribeDBInstancesResponse);
    return static_cast<const DescribeDBInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeDBInstances \a response.
 */
void DescribeDBInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeDBInstancesResponsePrivate
 * \brief The DescribeDBInstancesResponsePrivate class provides private implementation for DescribeDBInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBInstancesResponsePrivate object with public implementation \a q.
 */
DescribeDBInstancesResponsePrivate::DescribeDBInstancesResponsePrivate(
    DescribeDBInstancesResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeDBInstances response element from \a xml.
 */
void DescribeDBInstancesResponsePrivate::parseDescribeDBInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
