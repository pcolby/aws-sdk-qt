// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pollforactivitytaskresponse.h"
#include "pollforactivitytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::PollForActivityTaskResponse
 * \brief The PollForActivityTaskResponse class provides an interace for Swf PollForActivityTask responses.
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
 * \sa SwfClient::pollForActivityTask
 */

/*!
 * Constructs a PollForActivityTaskResponse object for \a reply to \a request, with parent \a parent.
 */
PollForActivityTaskResponse::PollForActivityTaskResponse(
        const PollForActivityTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new PollForActivityTaskResponsePrivate(this), parent)
{
    setRequest(new PollForActivityTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PollForActivityTaskRequest * PollForActivityTaskResponse::request() const
{
    Q_D(const PollForActivityTaskResponse);
    return static_cast<const PollForActivityTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf PollForActivityTask \a response.
 */
void PollForActivityTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PollForActivityTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::PollForActivityTaskResponsePrivate
 * \brief The PollForActivityTaskResponsePrivate class provides private implementation for PollForActivityTaskResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a PollForActivityTaskResponsePrivate object with public implementation \a q.
 */
PollForActivityTaskResponsePrivate::PollForActivityTaskResponsePrivate(
    PollForActivityTaskResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf PollForActivityTask response element from \a xml.
 */
void PollForActivityTaskResponsePrivate::parsePollForActivityTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForActivityTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
