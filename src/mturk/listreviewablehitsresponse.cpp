// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreviewablehitsresponse.h"
#include "listreviewablehitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListReviewableHITsResponse
 * \brief The ListReviewableHITsResponse class provides an interace for MTurk ListReviewableHITs responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listReviewableHITs
 */

/*!
 * Constructs a ListReviewableHITsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReviewableHITsResponse::ListReviewableHITsResponse(
        const ListReviewableHITsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListReviewableHITsResponsePrivate(this), parent)
{
    setRequest(new ListReviewableHITsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReviewableHITsRequest * ListReviewableHITsResponse::request() const
{
    Q_D(const ListReviewableHITsResponse);
    return static_cast<const ListReviewableHITsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListReviewableHITs \a response.
 */
void ListReviewableHITsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReviewableHITsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListReviewableHITsResponsePrivate
 * \brief The ListReviewableHITsResponsePrivate class provides private implementation for ListReviewableHITsResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListReviewableHITsResponsePrivate object with public implementation \a q.
 */
ListReviewableHITsResponsePrivate::ListReviewableHITsResponsePrivate(
    ListReviewableHITsResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListReviewableHITs response element from \a xml.
 */
void ListReviewableHITsResponsePrivate::parseListReviewableHITsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReviewableHITsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
