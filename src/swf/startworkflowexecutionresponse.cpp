// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startworkflowexecutionresponse.h"
#include "startworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::StartWorkflowExecutionResponse
 * \brief The StartWorkflowExecutionResponse class provides an interace for Swf StartWorkflowExecution responses.
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
 * \sa SwfClient::startWorkflowExecution
 */

/*!
 * Constructs a StartWorkflowExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
StartWorkflowExecutionResponse::StartWorkflowExecutionResponse(
        const StartWorkflowExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new StartWorkflowExecutionResponsePrivate(this), parent)
{
    setRequest(new StartWorkflowExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartWorkflowExecutionRequest * StartWorkflowExecutionResponse::request() const
{
    Q_D(const StartWorkflowExecutionResponse);
    return static_cast<const StartWorkflowExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf StartWorkflowExecution \a response.
 */
void StartWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartWorkflowExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::StartWorkflowExecutionResponsePrivate
 * \brief The StartWorkflowExecutionResponsePrivate class provides private implementation for StartWorkflowExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a StartWorkflowExecutionResponsePrivate object with public implementation \a q.
 */
StartWorkflowExecutionResponsePrivate::StartWorkflowExecutionResponsePrivate(
    StartWorkflowExecutionResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf StartWorkflowExecution response element from \a xml.
 */
void StartWorkflowExecutionResponsePrivate::parseStartWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartWorkflowExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
