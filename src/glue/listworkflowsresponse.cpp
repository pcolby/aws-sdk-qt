// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
