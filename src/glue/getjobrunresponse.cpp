/*
    Copyright 2013-2019 Paul Colby

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

#include "getjobrunresponse.h"
#include "getjobrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobRunResponse
 * \brief The GetJobRunResponse class provides an interace for Glue GetJobRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getJobRun
 */

/*!
 * Constructs a GetJobRunResponse object for \a reply to \a request, with parent \a parent.
 */
GetJobRunResponse::GetJobRunResponse(
        const GetJobRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetJobRunResponsePrivate(this), parent)
{
    setRequest(new GetJobRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetJobRunRequest * GetJobRunResponse::request() const
{
    Q_D(const GetJobRunResponse);
    return static_cast<const GetJobRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetJobRun \a response.
 */
void GetJobRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetJobRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetJobRunResponsePrivate
 * \brief The GetJobRunResponsePrivate class provides private implementation for GetJobRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobRunResponsePrivate object with public implementation \a q.
 */
GetJobRunResponsePrivate::GetJobRunResponsePrivate(
    GetJobRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetJobRun response element from \a xml.
 */
void GetJobRunResponsePrivate::parseGetJobRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetJobRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
