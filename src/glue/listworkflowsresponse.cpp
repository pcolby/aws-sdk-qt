/*
    Copyright 2013-2020 Paul Colby

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

#include "listworkflowsresponse.h"
#include "listworkflowsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListWorkflowsResponse
 * \brief The ListWorkflowsResponse class provides an interace for Glue ListWorkflows responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::listWorkflows
 */

/*!
 * Constructs a ListWorkflowsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkflowsResponse::ListWorkflowsResponse(
        const ListWorkflowsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListWorkflowsResponsePrivate(this), parent)
{
    setRequest(new ListWorkflowsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkflowsRequest * ListWorkflowsResponse::request() const
{
    Q_D(const ListWorkflowsResponse);
    return static_cast<const ListWorkflowsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListWorkflows \a response.
 */
void ListWorkflowsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkflowsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListWorkflowsResponsePrivate
 * \brief The ListWorkflowsResponsePrivate class provides private implementation for ListWorkflowsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListWorkflowsResponsePrivate object with public implementation \a q.
 */
ListWorkflowsResponsePrivate::ListWorkflowsResponsePrivate(
    ListWorkflowsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListWorkflows response element from \a xml.
 */
void ListWorkflowsResponsePrivate::parseListWorkflowsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkflowsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
