// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlensreviewsresponse.h"
#include "listlensreviewsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListLensReviewsResponse
 * \brief The ListLensReviewsResponse class provides an interace for WellArchitected ListLensReviews responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::listLensReviews
 */

/*!
 * Constructs a ListLensReviewsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLensReviewsResponse::ListLensReviewsResponse(
        const ListLensReviewsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new ListLensReviewsResponsePrivate(this), parent)
{
    setRequest(new ListLensReviewsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLensReviewsRequest * ListLensReviewsResponse::request() const
{
    Q_D(const ListLensReviewsResponse);
    return static_cast<const ListLensReviewsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected ListLensReviews \a response.
 */
void ListLensReviewsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLensReviewsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::ListLensReviewsResponsePrivate
 * \brief The ListLensReviewsResponsePrivate class provides private implementation for ListLensReviewsResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListLensReviewsResponsePrivate object with public implementation \a q.
 */
ListLensReviewsResponsePrivate::ListLensReviewsResponsePrivate(
    ListLensReviewsResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected ListLensReviews response element from \a xml.
 */
void ListLensReviewsResponsePrivate::parseListLensReviewsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLensReviewsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
