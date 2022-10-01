// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesegmentresponse.h"
#include "deletesegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSegmentResponse
 * \brief The DeleteSegmentResponse class provides an interace for Pinpoint DeleteSegment responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteSegment
 */

/*!
 * Constructs a DeleteSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSegmentResponse::DeleteSegmentResponse(
        const DeleteSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteSegmentResponsePrivate(this), parent)
{
    setRequest(new DeleteSegmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSegmentRequest * DeleteSegmentResponse::request() const
{
    Q_D(const DeleteSegmentResponse);
    return static_cast<const DeleteSegmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteSegment \a response.
 */
void DeleteSegmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteSegmentResponsePrivate
 * \brief The DeleteSegmentResponsePrivate class provides private implementation for DeleteSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteSegmentResponsePrivate object with public implementation \a q.
 */
DeleteSegmentResponsePrivate::DeleteSegmentResponsePrivate(
    DeleteSegmentResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteSegment response element from \a xml.
 */
void DeleteSegmentResponsePrivate::parseDeleteSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSegmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
