// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobsresponse.h"
#include "getjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobsResponse
 * \brief The GetJobsResponse class provides an interace for Glue GetJobs responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getJobs
 */

/*!
 * Constructs a GetJobsResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobsResponse::GetJobsResponse(
        const GetJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobsResponsePrivate(this), parent)
{
    setRequest(new GetJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobsRequest * GetJobsResponse::request() const
{
    Q_D(const GetJobsResponse);
    return static_cast<const GetJobsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetJobs \a response.
 */
void GetJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetJobsResponsePrivate
 * \brief The GetJobsResponsePrivate class provides private implementation for GetJobsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobsResponsePrivate object with public implementation \a q.
 */
GetJobsResponsePrivate::GetJobsResponsePrivate(
    GetJobsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetJobs response element from \a xml.
 */
void GetJobsResponsePrivate::parseGetJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
