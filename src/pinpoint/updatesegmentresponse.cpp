// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesegmentresponse.h"
#include "updatesegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSegmentResponse
 * \brief The UpdateSegmentResponse class provides an interace for Pinpoint UpdateSegment responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateSegment
 */

/*!
 * Constructs a UpdateSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSegmentResponse::UpdateSegmentResponse(
        const UpdateSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateSegmentResponsePrivate(this), parent)
{
    setRequest(new UpdateSegmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSegmentRequest * UpdateSegmentResponse::request() const
{
    Q_D(const UpdateSegmentResponse);
    return static_cast<const UpdateSegmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateSegment \a response.
 */
void UpdateSegmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateSegmentResponsePrivate
 * \brief The UpdateSegmentResponsePrivate class provides private implementation for UpdateSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSegmentResponsePrivate object with public implementation \a q.
 */
UpdateSegmentResponsePrivate::UpdateSegmentResponsePrivate(
    UpdateSegmentResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateSegment response element from \a xml.
 */
void UpdateSegmentResponsePrivate::parseUpdateSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSegmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
