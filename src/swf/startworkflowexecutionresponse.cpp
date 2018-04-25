/*
    Copyright 2013-2018 Paul Colby

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

#include "startworkflowexecutionresponse.h"
#include "startworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::StartWorkflowExecutionResponse
 * \brief The StartWorkflowExecutionResponse class provides an interace for SWF StartWorkflowExecution responses.
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
 * Parses a successful SWF StartWorkflowExecution \a response.
 */
void StartWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartWorkflowExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SWF::StartWorkflowExecutionResponsePrivate
 * \brief The StartWorkflowExecutionResponsePrivate class provides private implementation for StartWorkflowExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a StartWorkflowExecutionResponsePrivate object with public implementation \a q.
 */
StartWorkflowExecutionResponsePrivate::StartWorkflowExecutionResponsePrivate(
    StartWorkflowExecutionResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a SWF StartWorkflowExecution response element from \a xml.
 */
void StartWorkflowExecutionResponsePrivate::parseStartWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartWorkflowExecutionResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
