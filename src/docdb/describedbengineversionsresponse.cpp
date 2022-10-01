// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbengineversionsresponse.h"
#include "describedbengineversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBEngineVersionsResponse
 * \brief The DescribeDBEngineVersionsResponse class provides an interace for DocDb DescribeDBEngineVersions responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBEngineVersions
 */

/*!
 * Constructs a DescribeDBEngineVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBEngineVersionsResponse::DescribeDBEngineVersionsResponse(
        const DescribeDBEngineVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeDBEngineVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBEngineVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBEngineVersionsRequest * DescribeDBEngineVersionsResponse::request() const
{
    Q_D(const DescribeDBEngineVersionsResponse);
    return static_cast<const DescribeDBEngineVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeDBEngineVersions \a response.
 */
void DescribeDBEngineVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBEngineVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeDBEngineVersionsResponsePrivate
 * \brief The DescribeDBEngineVersionsResponsePrivate class provides private implementation for DescribeDBEngineVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBEngineVersionsResponsePrivate object with public implementation \a q.
 */
DescribeDBEngineVersionsResponsePrivate::DescribeDBEngineVersionsResponsePrivate(
    DescribeDBEngineVersionsResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeDBEngineVersions response element from \a xml.
 */
void DescribeDBEngineVersionsResponsePrivate::parseDescribeDBEngineVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBEngineVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
