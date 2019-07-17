/*
    Copyright 2013-2019 Paul Colby

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

#include "describeworkflowexecutionresponse.h"
#include "describeworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::DescribeWorkflowExecutionResponse
 * \brief The DescribeWorkflowExecutionResponse class provides an interace for SWF DescribeWorkflowExecution responses.
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
 * \sa SwfClient::describeWorkflowExecution
 */

/*!
 * Constructs a DescribeWorkflowExecutionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkflowExecutionResponse::DescribeWorkflowExecutionResponse(
        const DescribeWorkflowExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new DescribeWorkflowExecutionResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkflowExecutionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkflowExecutionRequest * DescribeWorkflowExecutionResponse::request() const
{
    Q_D(const DescribeWorkflowExecutionResponse);
    return static_cast<const DescribeWorkflowExecutionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SWF DescribeWorkflowExecution \a response.
 */
void DescribeWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkflowExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SWF::DescribeWorkflowExecutionResponsePrivate
 * \brief The DescribeWorkflowExecutionResponsePrivate class provides private implementation for DescribeWorkflowExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a DescribeWorkflowExecutionResponsePrivate object with public implementation \a q.
 */
DescribeWorkflowExecutionResponsePrivate::DescribeWorkflowExecutionResponsePrivate(
    DescribeWorkflowExecutionResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a SWF DescribeWorkflowExecution response element from \a xml.
 */
void DescribeWorkflowExecutionResponsePrivate::parseDescribeWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkflowExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SWF
} // namespace QtAws
