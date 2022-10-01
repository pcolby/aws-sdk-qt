// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexportjobsresponse.h"
#include "getexportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetExportJobsResponse
 * \brief The GetExportJobsResponse class provides an interace for Pinpoint GetExportJobs responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getExportJobs
 */

/*!
 * Constructs a GetExportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetExportJobsResponse::GetExportJobsResponse(
        const GetExportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetExportJobsResponsePrivate(this), parent)
{
    setRequest(new GetExportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetExportJobsRequest * GetExportJobsResponse::request() const
{
    Q_D(const GetExportJobsResponse);
    return static_cast<const GetExportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetExportJobs \a response.
 */
void GetExportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetExportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetExportJobsResponsePrivate
 * \brief The GetExportJobsResponsePrivate class provides private implementation for GetExportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetExportJobsResponsePrivate object with public implementation \a q.
 */
GetExportJobsResponsePrivate::GetExportJobsResponsePrivate(
    GetExportJobsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetExportJobs response element from \a xml.
 */
void GetExportJobsResponsePrivate::parseGetExportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
