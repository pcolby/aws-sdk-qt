// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listclosedworkflowexecutionsresponse.h"
#include "listclosedworkflowexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::ListClosedWorkflowExecutionsResponse
 * \brief The ListClosedWorkflowExecutionsResponse class provides an interace for Swf ListClosedWorkflowExecutions responses.
 *
 * \inmodule QtAwsSwf
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
 * Parses a successful Swf ListClosedWorkflowExecutions \a response.
 */
void ListClosedWorkflowExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListClosedWorkflowExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::ListClosedWorkflowExecutionsResponsePrivate
 * \brief The ListClosedWorkflowExecutionsResponsePrivate class provides private implementation for ListClosedWorkflowExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a ListClosedWorkflowExecutionsResponsePrivate object with public implementation \a q.
 */
ListClosedWorkflowExecutionsResponsePrivate::ListClosedWorkflowExecutionsResponsePrivate(
    ListClosedWorkflowExecutionsResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf ListClosedWorkflowExecutions response element from \a xml.
 */
void ListClosedWorkflowExecutionsResponsePrivate::parseListClosedWorkflowExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListClosedWorkflowExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
