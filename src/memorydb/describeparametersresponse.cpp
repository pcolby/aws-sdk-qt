// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeparametersresponse.h"
#include "describeparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DescribeParametersResponse
 * \brief The DescribeParametersResponse class provides an interace for MemoryDb DescribeParameters responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::describeParameters
 */

/*!
 * Constructs a DescribeParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeParametersResponse::DescribeParametersResponse(
        const DescribeParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DescribeParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeParametersRequest * DescribeParametersResponse::request() const
{
    Q_D(const DescribeParametersResponse);
    return static_cast<const DescribeParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DescribeParameters \a response.
 */
void DescribeParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DescribeParametersResponsePrivate
 * \brief The DescribeParametersResponsePrivate class provides private implementation for DescribeParametersResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DescribeParametersResponsePrivate object with public implementation \a q.
 */
DescribeParametersResponsePrivate::DescribeParametersResponsePrivate(
    DescribeParametersResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DescribeParameters response element from \a xml.
 */
void DescribeParametersResponsePrivate::parseDescribeParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
