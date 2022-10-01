// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkflowexecutionresponse.h"
#include "describeworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::DescribeWorkflowExecutionResponse
 * \brief The DescribeWorkflowExecutionResponse class provides an interace for Swf DescribeWorkflowExecution responses.
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
 * Parses a successful Swf DescribeWorkflowExecution \a response.
 */
void DescribeWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkflowExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::DescribeWorkflowExecutionResponsePrivate
 * \brief The DescribeWorkflowExecutionResponsePrivate class provides private implementation for DescribeWorkflowExecutionResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a DescribeWorkflowExecutionResponsePrivate object with public implementation \a q.
 */
DescribeWorkflowExecutionResponsePrivate::DescribeWorkflowExecutionResponsePrivate(
    DescribeWorkflowExecutionResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf DescribeWorkflowExecution response element from \a xml.
 */
void DescribeWorkflowExecutionResponsePrivate::parseDescribeWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkflowExecutionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
