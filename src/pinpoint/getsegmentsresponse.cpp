// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentsresponse.h"
#include "getsegmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentsResponse
 * \brief The GetSegmentsResponse class provides an interace for Pinpoint GetSegments responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegments
 */

/*!
 * Constructs a GetSegmentsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentsResponse::GetSegmentsResponse(
        const GetSegmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentsRequest * GetSegmentsResponse::request() const
{
    Q_D(const GetSegmentsResponse);
    return static_cast<const GetSegmentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegments \a response.
 */
void GetSegmentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentsResponsePrivate
 * \brief The GetSegmentsResponsePrivate class provides private implementation for GetSegmentsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentsResponsePrivate object with public implementation \a q.
 */
GetSegmentsResponsePrivate::GetSegmentsResponsePrivate(
    GetSegmentsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegments response element from \a xml.
 */
void GetSegmentsResponsePrivate::parseGetSegmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
