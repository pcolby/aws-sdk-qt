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

#include "getworkflowrunpropertiesresponse.h"
#include "getworkflowrunpropertiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetWorkflowRunPropertiesResponse
 * \brief The GetWorkflowRunPropertiesResponse class provides an interace for Glue GetWorkflowRunProperties responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getWorkflowRunProperties
 */

/*!
 * Constructs a GetWorkflowRunPropertiesResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkflowRunPropertiesResponse::GetWorkflowRunPropertiesResponse(
        const GetWorkflowRunPropertiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetWorkflowRunPropertiesResponsePrivate(this), parent)
{
    setRequest(new GetWorkflowRunPropertiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkflowRunPropertiesRequest * GetWorkflowRunPropertiesResponse::request() const
{
    Q_D(const GetWorkflowRunPropertiesResponse);
    return static_cast<const GetWorkflowRunPropertiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetWorkflowRunProperties \a response.
 */
void GetWorkflowRunPropertiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkflowRunPropertiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetWorkflowRunPropertiesResponsePrivate
 * \brief The GetWorkflowRunPropertiesResponsePrivate class provides private implementation for GetWorkflowRunPropertiesResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetWorkflowRunPropertiesResponsePrivate object with public implementation \a q.
 */
GetWorkflowRunPropertiesResponsePrivate::GetWorkflowRunPropertiesResponsePrivate(
    GetWorkflowRunPropertiesResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetWorkflowRunProperties response element from \a xml.
 */
void GetWorkflowRunPropertiesResponsePrivate::parseGetWorkflowRunPropertiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkflowRunPropertiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
