// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeparametergroupsresponse.h"
#include "describeparametergroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeParameterGroupsResponse
 * \brief The DescribeParameterGroupsResponse class provides an interace for MemoryDb DescribeParameterGroups responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeParameterGroups
 */

/*!
 * Constructs a DescribeParameterGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeParameterGroupsResponse::DescribeParameterGroupsResponse(
        const DescribeParameterGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DescribeParameterGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeParameterGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeParameterGroupsRequest * DescribeParameterGroupsResponse::request() const
{
    Q_D(const DescribeParameterGroupsResponse);
    return static_cast<const DescribeParameterGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DescribeParameterGroups \a response.
 */
void DescribeParameterGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeParameterGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DescribeParameterGroupsResponsePrivate
 * \brief The DescribeParameterGroupsResponsePrivate class provides private implementation for DescribeParameterGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeParameterGroupsResponsePrivate object with public implementation \a q.
 */
DescribeParameterGroupsResponsePrivate::DescribeParameterGroupsResponsePrivate(
    DescribeParameterGroupsResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DescribeParameterGroups response element from \a xml.
 */
void DescribeParameterGroupsResponsePrivate::parseDescribeParameterGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeParameterGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
