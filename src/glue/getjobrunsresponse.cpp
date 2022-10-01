// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobrunsresponse.h"
#include "getjobrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobRunsResponse
 * \brief The GetJobRunsResponse class provides an interace for Glue GetJobRuns responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getJobRuns
 */

/*!
 * Constructs a GetJobRunsResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobRunsResponse::GetJobRunsResponse(
        const GetJobRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobRunsResponsePrivate(this), parent)
{
    setRequest(new GetJobRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobRunsRequest * GetJobRunsResponse::request() const
{
    Q_D(const GetJobRunsResponse);
    return static_cast<const GetJobRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetJobRuns \a response.
 */
void GetJobRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetJobRunsResponsePrivate
 * \brief The GetJobRunsResponsePrivate class provides private implementation for GetJobRunsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobRunsResponsePrivate object with public implementation \a q.
 */
GetJobRunsResponsePrivate::GetJobRunsResponsePrivate(
    GetJobRunsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetJobRuns response element from \a xml.
 */
void GetJobRunsResponsePrivate::parseGetJobRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
