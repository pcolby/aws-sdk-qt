// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeclustersresponse.h"
#include "describeclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeClustersResponse
 * \brief The DescribeClustersResponse class provides an interace for MemoryDb DescribeClusters responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeClusters
 */

/*!
 * Constructs a DescribeClustersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeClustersResponse::DescribeClustersResponse(
        const DescribeClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DescribeClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeClustersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClustersRequest * DescribeClustersResponse::request() const
{
    Q_D(const DescribeClustersResponse);
    return static_cast<const DescribeClustersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DescribeClusters \a response.
 */
void DescribeClustersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DescribeClustersResponsePrivate
 * \brief The DescribeClustersResponsePrivate class provides private implementation for DescribeClustersResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeClustersResponsePrivate object with public implementation \a q.
 */
DescribeClustersResponsePrivate::DescribeClustersResponsePrivate(
    DescribeClustersResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DescribeClusters response element from \a xml.
 */
void DescribeClustersResponsePrivate::parseDescribeClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClustersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
