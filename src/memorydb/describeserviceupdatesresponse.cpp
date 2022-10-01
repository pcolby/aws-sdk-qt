// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeserviceupdatesresponse.h"
#include "describeserviceupdatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeServiceUpdatesResponse
 * \brief The DescribeServiceUpdatesResponse class provides an interace for MemoryDb DescribeServiceUpdates responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeServiceUpdates
 */

/*!
 * Constructs a DescribeServiceUpdatesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeServiceUpdatesResponse::DescribeServiceUpdatesResponse(
        const DescribeServiceUpdatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DescribeServiceUpdatesResponsePrivate(this), parent)
{
    setRequest(new DescribeServiceUpdatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeServiceUpdatesRequest * DescribeServiceUpdatesResponse::request() const
{
    Q_D(const DescribeServiceUpdatesResponse);
    return static_cast<const DescribeServiceUpdatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DescribeServiceUpdates \a response.
 */
void DescribeServiceUpdatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeServiceUpdatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DescribeServiceUpdatesResponsePrivate
 * \brief The DescribeServiceUpdatesResponsePrivate class provides private implementation for DescribeServiceUpdatesResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeServiceUpdatesResponsePrivate object with public implementation \a q.
 */
DescribeServiceUpdatesResponsePrivate::DescribeServiceUpdatesResponsePrivate(
    DescribeServiceUpdatesResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DescribeServiceUpdates response element from \a xml.
 */
void DescribeServiceUpdatesResponsePrivate::parseDescribeServiceUpdatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServiceUpdatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
