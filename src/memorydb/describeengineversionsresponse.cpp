// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeengineversionsresponse.h"
#include "describeengineversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeEngineVersionsResponse
 * \brief The DescribeEngineVersionsResponse class provides an interace for MemoryDb DescribeEngineVersions responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeEngineVersions
 */

/*!
 * Constructs a DescribeEngineVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEngineVersionsResponse::DescribeEngineVersionsResponse(
        const DescribeEngineVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DescribeEngineVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeEngineVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEngineVersionsRequest * DescribeEngineVersionsResponse::request() const
{
    Q_D(const DescribeEngineVersionsResponse);
    return static_cast<const DescribeEngineVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DescribeEngineVersions \a response.
 */
void DescribeEngineVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEngineVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DescribeEngineVersionsResponsePrivate
 * \brief The DescribeEngineVersionsResponsePrivate class provides private implementation for DescribeEngineVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeEngineVersionsResponsePrivate object with public implementation \a q.
 */
DescribeEngineVersionsResponsePrivate::DescribeEngineVersionsResponsePrivate(
    DescribeEngineVersionsResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DescribeEngineVersions response element from \a xml.
 */
void DescribeEngineVersionsResponsePrivate::parseDescribeEngineVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEngineVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
