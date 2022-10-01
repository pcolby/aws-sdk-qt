// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "puteventsresponse.h"
#include "puteventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PutEventsResponse
 * \brief The PutEventsResponse class provides an interace for Pinpoint PutEvents responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::putEvents
 */

/*!
 * Constructs a PutEventsResponse object for \a reply to \a request, with parent \a parent.
 */
PutEventsResponse::PutEventsResponse(
        const PutEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new PutEventsResponsePrivate(this), parent)
{
    setRequest(new PutEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEventsRequest * PutEventsResponse::request() const
{
    Q_D(const PutEventsResponse);
    return static_cast<const PutEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint PutEvents \a response.
 */
void PutEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::PutEventsResponsePrivate
 * \brief The PutEventsResponsePrivate class provides private implementation for PutEventsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PutEventsResponsePrivate object with public implementation \a q.
 */
PutEventsResponsePrivate::PutEventsResponsePrivate(
    PutEventsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint PutEvents response element from \a xml.
 */
void PutEventsResponsePrivate::parsePutEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
