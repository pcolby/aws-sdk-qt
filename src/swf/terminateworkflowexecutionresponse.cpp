// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "terminateworkflowexecutionresponse.h"
#include "terminateworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::TerminateWorkflowExecutionResponse
 * \brief The TerminateWorkflowExecutionResponse class provides an interace for Swf TerminateWorkflowExecution responses.
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
 * \sa SwfClient::terminateWorkflowExecution
 */

/*!
 * Constructs a TerminateWorkflowExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
TerminateWorkflowExecutionResponse::TerminateWorkflowExecutionResponse(
        const TerminateWorkflowExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new TerminateWorkflowExecutionResponsePrivate(this), parent)
{
    setRequest(new TerminateWorkflowExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TerminateWorkflowExecutionRequest * TerminateWorkflowExecutionResponse::request() const
{
    Q_D(const TerminateWorkflowExecutionResponse);
    return static_cast<const TerminateWorkflowExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf TerminateWorkflowExecution \a response.
 */
void TerminateWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TerminateWorkflowExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::TerminateWorkflowExecutionResponsePrivate
 * \brief The TerminateWorkflowExecutionResponsePrivate class provides private implementation for TerminateWorkflowExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a TerminateWorkflowExecutionResponsePrivate object with public implementation \a q.
 */
TerminateWorkflowExecutionResponsePrivate::TerminateWorkflowExecutionResponsePrivate(
    TerminateWorkflowExecutionResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf TerminateWorkflowExecution response element from \a xml.
 */
void TerminateWorkflowExecutionResponsePrivate::parseTerminateWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateWorkflowExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
