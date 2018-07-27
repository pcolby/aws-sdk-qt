/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
