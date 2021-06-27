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

#include "getmltaskrunresponse.h"
#include "getmltaskrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTaskRunResponse
 * \brief The GetMLTaskRunResponse class provides an interace for Glue GetMLTaskRun responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getMLTaskRun
 */

/*!
 * Constructs a GetMLTaskRunResponse object for \a reply to \a request, with parent \a parent.
 */
GetMLTaskRunResponse::GetMLTaskRunResponse(
        const GetMLTaskRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetMLTaskRunResponsePrivate(this), parent)
{
    setRequest(new GetMLTaskRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMLTaskRunRequest * GetMLTaskRunResponse::request() const
{
    return static_cast<const GetMLTaskRunRequest *>(GlueResponse::request());
}

/*!
 * \reimp
 * Parses a successful Glue GetMLTaskRun \a response.
 */
void GetMLTaskRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMLTaskRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetMLTaskRunResponsePrivate
 * \brief The GetMLTaskRunResponsePrivate class provides private implementation for GetMLTaskRunResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTaskRunResponsePrivate object with public implementation \a q.
 */
GetMLTaskRunResponsePrivate::GetMLTaskRunResponsePrivate(
    GetMLTaskRunResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetMLTaskRun response element from \a xml.
 */
void GetMLTaskRunResponsePrivate::parseGetMLTaskRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMLTaskRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
