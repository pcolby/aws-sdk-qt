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

#include "listclosedworkflowexecutionsresponse.h"
#include "listclosedworkflowexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::ListClosedWorkflowExecutionsResponse
 * \brief The ListClosedWorkflowExecutionsResponse class provides an interace for SWF ListClosedWorkflowExecutions responses.
 *
 * \inmodule QtAwsSWF
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::listClosedWorkflowExecutions
 */

/*!
 * Constructs a ListClosedWorkflowExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListClosedWorkflowExecutionsResponse::ListClosedWorkflowExecutionsResponse(
        const ListClosedWorkflowExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new ListClosedWorkflowExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListClosedWorkflowExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListClosedWorkflowExecutionsRequest * ListClosedWorkflowExecutionsResponse::request() const
{
    Q_D(const ListClosedWorkflowExecutionsResponse);
    return static_cast<const ListClosedWorkflowExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SWF ListClosedWorkflowExecutions \a response.
 */
void ListClosedWorkflowExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListClosedWorkflowExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SWF::ListClosedWorkflowExecutionsResponsePrivate
 * \brief The ListClosedWorkflowExecutionsResponsePrivate class provides private implementation for ListClosedWorkflowExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a ListClosedWorkflowExecutionsResponsePrivate object with public implementation \a q.
 */
ListClosedWorkflowExecutionsResponsePrivate::ListClosedWorkflowExecutionsResponsePrivate(
    ListClosedWorkflowExecutionsResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a SWF ListClosedWorkflowExecutions response element from \a xml.
 */
void ListClosedWorkflowExecutionsResponsePrivate::parseListClosedWorkflowExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClosedWorkflowExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SWF
} // namespace QtAws
