// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkflowexecutionhistoryresponse.h"
#include "getworkflowexecutionhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::GetWorkflowExecutionHistoryResponse
 * \brief The GetWorkflowExecutionHistoryResponse class provides an interace for Swf GetWorkflowExecutionHistory responses.
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
 * \sa SwfClient::getWorkflowExecutionHistory
 */

/*!
 * Constructs a GetWorkflowExecutionHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
GetWorkflowExecutionHistoryResponse::GetWorkflowExecutionHistoryResponse(
        const GetWorkflowExecutionHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new GetWorkflowExecutionHistoryResponsePrivate(this), parent)
{
    setRequest(new GetWorkflowExecutionHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWorkflowExecutionHistoryRequest * GetWorkflowExecutionHistoryResponse::request() const
{
    Q_D(const GetWorkflowExecutionHistoryResponse);
    return static_cast<const GetWorkflowExecutionHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf GetWorkflowExecutionHistory \a response.
 */
void GetWorkflowExecutionHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWorkflowExecutionHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::GetWorkflowExecutionHistoryResponsePrivate
 * \brief The GetWorkflowExecutionHistoryResponsePrivate class provides private implementation for GetWorkflowExecutionHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a GetWorkflowExecutionHistoryResponsePrivate object with public implementation \a q.
 */
GetWorkflowExecutionHistoryResponsePrivate::GetWorkflowExecutionHistoryResponsePrivate(
    GetWorkflowExecutionHistoryResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf GetWorkflowExecutionHistory response element from \a xml.
 */
void GetWorkflowExecutionHistoryResponsePrivate::parseGetWorkflowExecutionHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWorkflowExecutionHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
