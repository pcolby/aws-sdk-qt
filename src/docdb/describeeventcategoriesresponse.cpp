// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventcategoriesresponse.h"
#include "describeeventcategoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeEventCategoriesResponse
 * \brief The DescribeEventCategoriesResponse class provides an interace for DocDb DescribeEventCategories responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeEventCategories
 */

/*!
 * Constructs a DescribeEventCategoriesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEventCategoriesResponse::DescribeEventCategoriesResponse(
        const DescribeEventCategoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeEventCategoriesResponsePrivate(this), parent)
{
    setRequest(new DescribeEventCategoriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEventCategoriesRequest * DescribeEventCategoriesResponse::request() const
{
    Q_D(const DescribeEventCategoriesResponse);
    return static_cast<const DescribeEventCategoriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeEventCategories \a response.
 */
void DescribeEventCategoriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEventCategoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeEventCategoriesResponsePrivate
 * \brief The DescribeEventCategoriesResponsePrivate class provides private implementation for DescribeEventCategoriesResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeEventCategoriesResponsePrivate object with public implementation \a q.
 */
DescribeEventCategoriesResponsePrivate::DescribeEventCategoriesResponsePrivate(
    DescribeEventCategoriesResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeEventCategories response element from \a xml.
 */
void DescribeEventCategoriesResponsePrivate::parseDescribeEventCategoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventCategoriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
