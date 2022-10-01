// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geteventstreamresponse.h"
#include "geteventstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetEventStreamResponse
 * \brief The GetEventStreamResponse class provides an interace for Pinpoint GetEventStream responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getEventStream
 */

/*!
 * Constructs a GetEventStreamResponse object for \a reply to \a request, with parent \a parent.
 */
GetEventStreamResponse::GetEventStreamResponse(
        const GetEventStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetEventStreamResponsePrivate(this), parent)
{
    setRequest(new GetEventStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEventStreamRequest * GetEventStreamResponse::request() const
{
    Q_D(const GetEventStreamResponse);
    return static_cast<const GetEventStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetEventStream \a response.
 */
void GetEventStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEventStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetEventStreamResponsePrivate
 * \brief The GetEventStreamResponsePrivate class provides private implementation for GetEventStreamResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetEventStreamResponsePrivate object with public implementation \a q.
 */
GetEventStreamResponsePrivate::GetEventStreamResponsePrivate(
    GetEventStreamResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetEventStream response element from \a xml.
 */
void GetEventStreamResponsePrivate::parseGetEventStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEventStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
