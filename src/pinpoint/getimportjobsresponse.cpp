// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimportjobsresponse.h"
#include "getimportjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetImportJobsResponse
 * \brief The GetImportJobsResponse class provides an interace for Pinpoint GetImportJobs responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getImportJobs
 */

/*!
 * Constructs a GetImportJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetImportJobsResponse::GetImportJobsResponse(
        const GetImportJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetImportJobsResponsePrivate(this), parent)
{
    setRequest(new GetImportJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetImportJobsRequest * GetImportJobsResponse::request() const
{
    Q_D(const GetImportJobsResponse);
    return static_cast<const GetImportJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetImportJobs \a response.
 */
void GetImportJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetImportJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetImportJobsResponsePrivate
 * \brief The GetImportJobsResponsePrivate class provides private implementation for GetImportJobsResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetImportJobsResponsePrivate object with public implementation \a q.
 */
GetImportJobsResponsePrivate::GetImportJobsResponsePrivate(
    GetImportJobsResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetImportJobs response element from \a xml.
 */
void GetImportJobsResponsePrivate::parseGetImportJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
