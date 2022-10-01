// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjourneysresponse.h"
#include "listjourneysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListJourneysResponse
 * \brief The ListJourneysResponse class provides an interace for Pinpoint ListJourneys responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listJourneys
 */

/*!
 * Constructs a ListJourneysResponse object for \a reply to \a request, with parent \a parent.
 */
ListJourneysResponse::ListJourneysResponse(
        const ListJourneysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new ListJourneysResponsePrivate(this), parent)
{
    setRequest(new ListJourneysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJourneysRequest * ListJourneysResponse::request() const
{
    Q_D(const ListJourneysResponse);
    return static_cast<const ListJourneysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint ListJourneys \a response.
 */
void ListJourneysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJourneysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::ListJourneysResponsePrivate
 * \brief The ListJourneysResponsePrivate class provides private implementation for ListJourneysResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListJourneysResponsePrivate object with public implementation \a q.
 */
ListJourneysResponsePrivate::ListJourneysResponsePrivate(
    ListJourneysResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint ListJourneys response element from \a xml.
 */
void ListJourneysResponsePrivate::parseListJourneysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJourneysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
