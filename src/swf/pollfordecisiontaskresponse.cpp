// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pollfordecisiontaskresponse.h"
#include "pollfordecisiontaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::PollForDecisionTaskResponse
 * \brief The PollForDecisionTaskResponse class provides an interace for Swf PollForDecisionTask responses.
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
 * \sa SwfClient::pollForDecisionTask
 */

/*!
 * Constructs a PollForDecisionTaskResponse object for \a reply to \a request, with parent \a parent.
 */
PollForDecisionTaskResponse::PollForDecisionTaskResponse(
        const PollForDecisionTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new PollForDecisionTaskResponsePrivate(this), parent)
{
    setRequest(new PollForDecisionTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PollForDecisionTaskRequest * PollForDecisionTaskResponse::request() const
{
    Q_D(const PollForDecisionTaskResponse);
    return static_cast<const PollForDecisionTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf PollForDecisionTask \a response.
 */
void PollForDecisionTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PollForDecisionTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::PollForDecisionTaskResponsePrivate
 * \brief The PollForDecisionTaskResponsePrivate class provides private implementation for PollForDecisionTaskResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a PollForDecisionTaskResponsePrivate object with public implementation \a q.
 */
PollForDecisionTaskResponsePrivate::PollForDecisionTaskResponsePrivate(
    PollForDecisionTaskResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf PollForDecisionTask response element from \a xml.
 */
void PollForDecisionTaskResponsePrivate::parsePollForDecisionTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForDecisionTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
