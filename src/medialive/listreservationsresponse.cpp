// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listreservationsresponse.h"
#include "listreservationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListReservationsResponse
 * \brief The ListReservationsResponse class provides an interace for MediaLive ListReservations responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listReservations
 */

/*!
 * Constructs a ListReservationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReservationsResponse::ListReservationsResponse(
        const ListReservationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListReservationsResponsePrivate(this), parent)
{
    setRequest(new ListReservationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReservationsRequest * ListReservationsResponse::request() const
{
    Q_D(const ListReservationsResponse);
    return static_cast<const ListReservationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListReservations \a response.
 */
void ListReservationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReservationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListReservationsResponsePrivate
 * \brief The ListReservationsResponsePrivate class provides private implementation for ListReservationsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListReservationsResponsePrivate object with public implementation \a q.
 */
ListReservationsResponsePrivate::ListReservationsResponsePrivate(
    ListReservationsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListReservations response element from \a xml.
 */
void ListReservationsResponsePrivate::parseListReservationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReservationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
