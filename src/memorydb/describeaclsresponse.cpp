// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeaclsresponse.h"
#include "describeaclsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeACLsResponse
 * \brief The DescribeACLsResponse class provides an interace for MemoryDb DescribeACLs responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeACLs
 */

/*!
 * Constructs a DescribeACLsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeACLsResponse::DescribeACLsResponse(
        const DescribeACLsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DescribeACLsResponsePrivate(this), parent)
{
    setRequest(new DescribeACLsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeACLsRequest * DescribeACLsResponse::request() const
{
    Q_D(const DescribeACLsResponse);
    return static_cast<const DescribeACLsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DescribeACLs \a response.
 */
void DescribeACLsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeACLsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DescribeACLsResponsePrivate
 * \brief The DescribeACLsResponsePrivate class provides private implementation for DescribeACLsResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeACLsResponsePrivate object with public implementation \a q.
 */
DescribeACLsResponsePrivate::DescribeACLsResponsePrivate(
    DescribeACLsResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DescribeACLs response element from \a xml.
 */
void DescribeACLsResponsePrivate::parseDescribeACLsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeACLsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
