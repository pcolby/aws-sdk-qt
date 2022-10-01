// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "countpendingdecisiontasksresponse.h"
#include "countpendingdecisiontasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::CountPendingDecisionTasksResponse
 * \brief The CountPendingDecisionTasksResponse class provides an interace for Swf CountPendingDecisionTasks responses.
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
 * \sa SwfClient::countPendingDecisionTasks
 */

/*!
 * Constructs a CountPendingDecisionTasksResponse object for \a reply to \a request, with parent \a parent.
 */
CountPendingDecisionTasksResponse::CountPendingDecisionTasksResponse(
        const CountPendingDecisionTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new CountPendingDecisionTasksResponsePrivate(this), parent)
{
    setRequest(new CountPendingDecisionTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CountPendingDecisionTasksRequest * CountPendingDecisionTasksResponse::request() const
{
    Q_D(const CountPendingDecisionTasksResponse);
    return static_cast<const CountPendingDecisionTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf CountPendingDecisionTasks \a response.
 */
void CountPendingDecisionTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CountPendingDecisionTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::CountPendingDecisionTasksResponsePrivate
 * \brief The CountPendingDecisionTasksResponsePrivate class provides private implementation for CountPendingDecisionTasksResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a CountPendingDecisionTasksResponsePrivate object with public implementation \a q.
 */
CountPendingDecisionTasksResponsePrivate::CountPendingDecisionTasksResponsePrivate(
    CountPendingDecisionTasksResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf CountPendingDecisionTasks response element from \a xml.
 */
void CountPendingDecisionTasksResponsePrivate::parseCountPendingDecisionTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CountPendingDecisionTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
