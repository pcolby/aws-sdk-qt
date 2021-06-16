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

#include "getplanresponse.h"
#include "getplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetPlanResponse
 * \brief The GetPlanResponse class provides an interace for Glue GetPlan responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getPlan
 */

/*!
 * Constructs a GetPlanResponse object for \a reply to \a request, with parent \a parent.
 */
GetPlanResponse::GetPlanResponse(
        const GetPlanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetPlanResponsePrivate(this), parent)
{
    setRequest(new GetPlanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPlanRequest * GetPlanResponse::request() const
{
    Q_D(const GetPlanResponse);
    return static_cast<const GetPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetPlan \a response.
 */
void GetPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetPlanResponsePrivate
 * \brief The GetPlanResponsePrivate class provides private implementation for GetPlanResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetPlanResponsePrivate object with public implementation \a q.
 */
GetPlanResponsePrivate::GetPlanResponsePrivate(
    GetPlanResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetPlan response element from \a xml.
 */
void GetPlanResponsePrivate::parseGetPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
