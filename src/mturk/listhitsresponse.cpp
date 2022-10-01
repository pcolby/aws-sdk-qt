// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhitsresponse.h"
#include "listhitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListHITsResponse
 * \brief The ListHITsResponse class provides an interace for MTurk ListHITs responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listHITs
 */

/*!
 * Constructs a ListHITsResponse object for \a reply to \a request, with parent \a parent.
 */
ListHITsResponse::ListHITsResponse(
        const ListHITsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListHITsResponsePrivate(this), parent)
{
    setRequest(new ListHITsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListHITsRequest * ListHITsResponse::request() const
{
    Q_D(const ListHITsResponse);
    return static_cast<const ListHITsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListHITs \a response.
 */
void ListHITsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListHITsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListHITsResponsePrivate
 * \brief The ListHITsResponsePrivate class provides private implementation for ListHITsResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListHITsResponsePrivate object with public implementation \a q.
 */
ListHITsResponsePrivate::ListHITsResponsePrivate(
    ListHITsResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListHITs response element from \a xml.
 */
void ListHITsResponsePrivate::parseListHITsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListHITsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
