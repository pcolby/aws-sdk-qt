// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentversionsresponse.h"
#include "getsegmentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionsResponse
 * \brief The GetSegmentVersionsResponse class provides an interace for Pinpoint GetSegmentVersions responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegmentVersions
 */

/*!
 * Constructs a GetSegmentVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentVersionsResponse::GetSegmentVersionsResponse(
        const GetSegmentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentVersionsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentVersionsRequest * GetSegmentVersionsResponse::request() const
{
    Q_D(const GetSegmentVersionsResponse);
    return static_cast<const GetSegmentVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegmentVersions \a response.
 */
void GetSegmentVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionsResponsePrivate
 * \brief The GetSegmentVersionsResponsePrivate class provides private implementation for GetSegmentVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentVersionsResponsePrivate object with public implementation \a q.
 */
GetSegmentVersionsResponsePrivate::GetSegmentVersionsResponsePrivate(
    GetSegmentVersionsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegmentVersions response element from \a xml.
 */
void GetSegmentVersionsResponsePrivate::parseGetSegmentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
