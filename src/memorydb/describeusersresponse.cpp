// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeusersresponse.h"
#include "describeusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeUsersResponse
 * \brief The DescribeUsersResponse class provides an interace for MemoryDb DescribeUsers responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeUsers
 */

/*!
 * Constructs a DescribeUsersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeUsersResponse::DescribeUsersResponse(
        const DescribeUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DescribeUsersResponsePrivate(this), parent)
{
    setRequest(new DescribeUsersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeUsersRequest * DescribeUsersResponse::request() const
{
    Q_D(const DescribeUsersResponse);
    return static_cast<const DescribeUsersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DescribeUsers \a response.
 */
void DescribeUsersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DescribeUsersResponsePrivate
 * \brief The DescribeUsersResponsePrivate class provides private implementation for DescribeUsersResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeUsersResponsePrivate object with public implementation \a q.
 */
DescribeUsersResponsePrivate::DescribeUsersResponsePrivate(
    DescribeUsersResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DescribeUsers response element from \a xml.
 */
void DescribeUsersResponsePrivate::parseDescribeUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUsersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
