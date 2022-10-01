// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "responddecisiontaskcompletedresponse.h"
#include "responddecisiontaskcompletedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RespondDecisionTaskCompletedResponse
 * \brief The RespondDecisionTaskCompletedResponse class provides an interace for Swf RespondDecisionTaskCompleted responses.
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
 * \sa SwfClient::respondDecisionTaskCompleted
 */

/*!
 * Constructs a RespondDecisionTaskCompletedResponse object for \a reply to \a request, with parent \a parent.
 */
RespondDecisionTaskCompletedResponse::RespondDecisionTaskCompletedResponse(
        const RespondDecisionTaskCompletedRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new RespondDecisionTaskCompletedResponsePrivate(this), parent)
{
    setRequest(new RespondDecisionTaskCompletedRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RespondDecisionTaskCompletedRequest * RespondDecisionTaskCompletedResponse::request() const
{
    Q_D(const RespondDecisionTaskCompletedResponse);
    return static_cast<const RespondDecisionTaskCompletedRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf RespondDecisionTaskCompleted \a response.
 */
void RespondDecisionTaskCompletedResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RespondDecisionTaskCompletedResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::RespondDecisionTaskCompletedResponsePrivate
 * \brief The RespondDecisionTaskCompletedResponsePrivate class provides private implementation for RespondDecisionTaskCompletedResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RespondDecisionTaskCompletedResponsePrivate object with public implementation \a q.
 */
RespondDecisionTaskCompletedResponsePrivate::RespondDecisionTaskCompletedResponsePrivate(
    RespondDecisionTaskCompletedResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf RespondDecisionTaskCompleted response element from \a xml.
 */
void RespondDecisionTaskCompletedResponsePrivate::parseRespondDecisionTaskCompletedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RespondDecisionTaskCompletedResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
