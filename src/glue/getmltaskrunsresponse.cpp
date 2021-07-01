/*
    Copyright 2013-2021 Paul Colby

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

#include "getmltaskrunsresponse.h"
#include "getmltaskrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTaskRunsResponse
 * \brief The GetMLTaskRunsResponse class provides an interace for Glue GetMLTaskRuns responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getMLTaskRuns
 */

/*!
 * Constructs a GetMLTaskRunsResponse object for \a reply to \a request, with parent \a parent.
 */
GetMLTaskRunsResponse::GetMLTaskRunsResponse(
        const GetMLTaskRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetMLTaskRunsResponsePrivate(this), parent)
{
    setRequest(new GetMLTaskRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMLTaskRunsRequest * GetMLTaskRunsResponse::request() const
{
    Q_D(const GetMLTaskRunsResponse);
    return static_cast<const GetMLTaskRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetMLTaskRuns \a response.
 */
void GetMLTaskRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMLTaskRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetMLTaskRunsResponsePrivate
 * \brief The GetMLTaskRunsResponsePrivate class provides private implementation for GetMLTaskRunsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTaskRunsResponsePrivate object with public implementation \a q.
 */
GetMLTaskRunsResponsePrivate::GetMLTaskRunsResponsePrivate(
    GetMLTaskRunsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetMLTaskRuns response element from \a xml.
 */
void GetMLTaskRunsResponsePrivate::parseGetMLTaskRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMLTaskRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
