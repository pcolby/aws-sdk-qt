// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "recordactivitytaskheartbeatresponse.h"
#include "recordactivitytaskheartbeatresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RecordActivityTaskHeartbeatResponse
 * \brief The RecordActivityTaskHeartbeatResponse class provides an interace for Swf RecordActivityTaskHeartbeat responses.
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
 * \sa SwfClient::recordActivityTaskHeartbeat
 */

/*!
 * Constructs a RecordActivityTaskHeartbeatResponse object for \a reply to \a request, with parent \a parent.
 */
RecordActivityTaskHeartbeatResponse::RecordActivityTaskHeartbeatResponse(
        const RecordActivityTaskHeartbeatRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new RecordActivityTaskHeartbeatResponsePrivate(this), parent)
{
    setRequest(new RecordActivityTaskHeartbeatRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RecordActivityTaskHeartbeatRequest * RecordActivityTaskHeartbeatResponse::request() const
{
    Q_D(const RecordActivityTaskHeartbeatResponse);
    return static_cast<const RecordActivityTaskHeartbeatRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf RecordActivityTaskHeartbeat \a response.
 */
void RecordActivityTaskHeartbeatResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RecordActivityTaskHeartbeatResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::RecordActivityTaskHeartbeatResponsePrivate
 * \brief The RecordActivityTaskHeartbeatResponsePrivate class provides private implementation for RecordActivityTaskHeartbeatResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RecordActivityTaskHeartbeatResponsePrivate object with public implementation \a q.
 */
RecordActivityTaskHeartbeatResponsePrivate::RecordActivityTaskHeartbeatResponsePrivate(
    RecordActivityTaskHeartbeatResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf RecordActivityTaskHeartbeat response element from \a xml.
 */
void RecordActivityTaskHeartbeatResponsePrivate::parseRecordActivityTaskHeartbeatResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RecordActivityTaskHeartbeatResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
