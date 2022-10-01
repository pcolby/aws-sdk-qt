// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventstreamresponse.h"
#include "deleteeventstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEventStreamResponse
 * \brief The DeleteEventStreamResponse class provides an interace for Pinpoint DeleteEventStream responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEventStream
 */

/*!
 * Constructs a DeleteEventStreamResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEventStreamResponse::DeleteEventStreamResponse(
        const DeleteEventStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteEventStreamResponsePrivate(this), parent)
{
    setRequest(new DeleteEventStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEventStreamRequest * DeleteEventStreamResponse::request() const
{
    Q_D(const DeleteEventStreamResponse);
    return static_cast<const DeleteEventStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteEventStream \a response.
 */
void DeleteEventStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEventStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteEventStreamResponsePrivate
 * \brief The DeleteEventStreamResponsePrivate class provides private implementation for DeleteEventStreamResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEventStreamResponsePrivate object with public implementation \a q.
 */
DeleteEventStreamResponsePrivate::DeleteEventStreamResponsePrivate(
    DeleteEventStreamResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteEventStream response element from \a xml.
 */
void DeleteEventStreamResponsePrivate::parseDeleteEventStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
