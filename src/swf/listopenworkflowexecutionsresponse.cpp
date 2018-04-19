/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listopenworkflowexecutionsresponse.h"
#include "listopenworkflowexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::ListOpenWorkflowExecutionsResponse
 * \brief The ListOpenWorkflowExecutionsResponse class provides an interace for SWF ListOpenWorkflowExecutions responses.
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
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SWFClient::listOpenWorkflowExecutions
 */

/*!
 * Constructs a ListOpenWorkflowExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOpenWorkflowExecutionsResponse::ListOpenWorkflowExecutionsResponse(
        const ListOpenWorkflowExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new ListOpenWorkflowExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListOpenWorkflowExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOpenWorkflowExecutionsRequest * ListOpenWorkflowExecutionsResponse::request() const
{
    Q_D(const ListOpenWorkflowExecutionsResponse);
    return static_cast<const ListOpenWorkflowExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SWF ListOpenWorkflowExecutions \a response.
 */
void ListOpenWorkflowExecutionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListOpenWorkflowExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SWF::ListOpenWorkflowExecutionsResponsePrivate
 * \brief The ListOpenWorkflowExecutionsResponsePrivate class provides private implementation for ListOpenWorkflowExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a ListOpenWorkflowExecutionsResponsePrivate object with public implementation \a q.
 */
ListOpenWorkflowExecutionsResponsePrivate::ListOpenWorkflowExecutionsResponsePrivate(
    ListOpenWorkflowExecutionsResponse * const q) : SWFResponsePrivate(q)
{

}

/*!
 * Parses a SWF ListOpenWorkflowExecutions response element from \a xml.
 */
void ListOpenWorkflowExecutionsResponsePrivate::parseListOpenWorkflowExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOpenWorkflowExecutionsResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
