// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "signalworkflowexecutionresponse.h"
#include "signalworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::SignalWorkflowExecutionResponse
 * \brief The SignalWorkflowExecutionResponse class provides an interace for Swf SignalWorkflowExecution responses.
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
 * \sa SwfClient::signalWorkflowExecution
 */

/*!
 * Constructs a SignalWorkflowExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
SignalWorkflowExecutionResponse::SignalWorkflowExecutionResponse(
        const SignalWorkflowExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new SignalWorkflowExecutionResponsePrivate(this), parent)
{
    setRequest(new SignalWorkflowExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SignalWorkflowExecutionRequest * SignalWorkflowExecutionResponse::request() const
{
    Q_D(const SignalWorkflowExecutionResponse);
    return static_cast<const SignalWorkflowExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf SignalWorkflowExecution \a response.
 */
void SignalWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SignalWorkflowExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::SignalWorkflowExecutionResponsePrivate
 * \brief The SignalWorkflowExecutionResponsePrivate class provides private implementation for SignalWorkflowExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a SignalWorkflowExecutionResponsePrivate object with public implementation \a q.
 */
SignalWorkflowExecutionResponsePrivate::SignalWorkflowExecutionResponsePrivate(
    SignalWorkflowExecutionResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf SignalWorkflowExecution response element from \a xml.
 */
void SignalWorkflowExecutionResponsePrivate::parseSignalWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SignalWorkflowExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
