// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "countpendingactivitytasksresponse.h"
#include "countpendingactivitytasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::CountPendingActivityTasksResponse
 * \brief The CountPendingActivityTasksResponse class provides an interace for Swf CountPendingActivityTasks responses.
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
 * \sa SwfClient::countPendingActivityTasks
 */

/*!
 * Constructs a CountPendingActivityTasksResponse object for \a reply to \a request, with parent \a parent.
 */
CountPendingActivityTasksResponse::CountPendingActivityTasksResponse(
        const CountPendingActivityTasksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new CountPendingActivityTasksResponsePrivate(this), parent)
{
    setRequest(new CountPendingActivityTasksRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CountPendingActivityTasksRequest * CountPendingActivityTasksResponse::request() const
{
    Q_D(const CountPendingActivityTasksResponse);
    return static_cast<const CountPendingActivityTasksRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf CountPendingActivityTasks \a response.
 */
void CountPendingActivityTasksResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CountPendingActivityTasksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::CountPendingActivityTasksResponsePrivate
 * \brief The CountPendingActivityTasksResponsePrivate class provides private implementation for CountPendingActivityTasksResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a CountPendingActivityTasksResponsePrivate object with public implementation \a q.
 */
CountPendingActivityTasksResponsePrivate::CountPendingActivityTasksResponsePrivate(
    CountPendingActivityTasksResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf CountPendingActivityTasks response element from \a xml.
 */
void CountPendingActivityTasksResponsePrivate::parseCountPendingActivityTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CountPendingActivityTasksResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
