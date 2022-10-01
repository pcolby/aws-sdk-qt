// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentresponse.h"
#include "getsegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentResponse
 * \brief The GetSegmentResponse class provides an interace for Pinpoint GetSegment responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegment
 */

/*!
 * Constructs a GetSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentResponse::GetSegmentResponse(
        const GetSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentResponsePrivate(this), parent)
{
    setRequest(new GetSegmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentRequest * GetSegmentResponse::request() const
{
    Q_D(const GetSegmentResponse);
    return static_cast<const GetSegmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegment \a response.
 */
void GetSegmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentResponsePrivate
 * \brief The GetSegmentResponsePrivate class provides private implementation for GetSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentResponsePrivate object with public implementation \a q.
 */
GetSegmentResponsePrivate::GetSegmentResponsePrivate(
    GetSegmentResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegment response element from \a xml.
 */
void GetSegmentResponsePrivate::parseGetSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
