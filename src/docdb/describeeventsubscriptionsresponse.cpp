// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventsubscriptionsresponse.h"
#include "describeeventsubscriptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeEventSubscriptionsResponse
 * \brief The DescribeEventSubscriptionsResponse class provides an interace for DocDb DescribeEventSubscriptions responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeEventSubscriptions
 */

/*!
 * Constructs a DescribeEventSubscriptionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEventSubscriptionsResponse::DescribeEventSubscriptionsResponse(
        const DescribeEventSubscriptionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeEventSubscriptionsResponsePrivate(this), parent)
{
    setRequest(new DescribeEventSubscriptionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEventSubscriptionsRequest * DescribeEventSubscriptionsResponse::request() const
{
    Q_D(const DescribeEventSubscriptionsResponse);
    return static_cast<const DescribeEventSubscriptionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeEventSubscriptions \a response.
 */
void DescribeEventSubscriptionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEventSubscriptionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeEventSubscriptionsResponsePrivate
 * \brief The DescribeEventSubscriptionsResponsePrivate class provides private implementation for DescribeEventSubscriptionsResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeEventSubscriptionsResponsePrivate object with public implementation \a q.
 */
DescribeEventSubscriptionsResponsePrivate::DescribeEventSubscriptionsResponsePrivate(
    DescribeEventSubscriptionsResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeEventSubscriptions response element from \a xml.
 */
void DescribeEventSubscriptionsResponsePrivate::parseDescribeEventSubscriptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventSubscriptionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
