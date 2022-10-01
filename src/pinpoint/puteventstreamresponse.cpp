// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "puteventstreamresponse.h"
#include "puteventstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PutEventStreamResponse
 * \brief The PutEventStreamResponse class provides an interace for Pinpoint PutEventStream responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::putEventStream
 */

/*!
 * Constructs a PutEventStreamResponse object for \a reply to \a request, with parent \a parent.
 */
PutEventStreamResponse::PutEventStreamResponse(
        const PutEventStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new PutEventStreamResponsePrivate(this), parent)
{
    setRequest(new PutEventStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutEventStreamRequest * PutEventStreamResponse::request() const
{
    Q_D(const PutEventStreamResponse);
    return static_cast<const PutEventStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint PutEventStream \a response.
 */
void PutEventStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutEventStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::PutEventStreamResponsePrivate
 * \brief The PutEventStreamResponsePrivate class provides private implementation for PutEventStreamResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PutEventStreamResponsePrivate object with public implementation \a q.
 */
PutEventStreamResponsePrivate::PutEventStreamResponsePrivate(
    PutEventStreamResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint PutEventStream response element from \a xml.
 */
void PutEventStreamResponsePrivate::parsePutEventStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutEventStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
