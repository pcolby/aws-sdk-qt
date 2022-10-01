// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentexportjobsresponse.h"
#include "getsegmentexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentExportJobsResponse
 * \brief The GetSegmentExportJobsResponse class provides an interace for Pinpoint GetSegmentExportJobs responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegmentExportJobs
 */

/*!
 * Constructs a GetSegmentExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentExportJobsResponse::GetSegmentExportJobsResponse(
        const GetSegmentExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentExportJobsResponsePrivate(this), parent)
{
    setRequest(new GetSegmentExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentExportJobsRequest * GetSegmentExportJobsResponse::request() const
{
    Q_D(const GetSegmentExportJobsResponse);
    return static_cast<const GetSegmentExportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegmentExportJobs \a response.
 */
void GetSegmentExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentExportJobsResponsePrivate
 * \brief The GetSegmentExportJobsResponsePrivate class provides private implementation for GetSegmentExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentExportJobsResponsePrivate object with public implementation \a q.
 */
GetSegmentExportJobsResponsePrivate::GetSegmentExportJobsResponsePrivate(
    GetSegmentExportJobsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegmentExportJobs response element from \a xml.
 */
void GetSegmentExportJobsResponsePrivate::parseGetSegmentExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentExportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
