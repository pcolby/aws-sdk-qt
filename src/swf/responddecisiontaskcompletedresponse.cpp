/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "responddecisiontaskcompletedresponse.h"
#include "responddecisiontaskcompletedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::RespondDecisionTaskCompletedResponse
 * \brief The RespondDecisionTaskCompletedResponse class provides an interace for SWF RespondDecisionTaskCompleted responses.
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
 * Parses a successful SWF RespondDecisionTaskCompleted \a response.
 */
void RespondDecisionTaskCompletedResponse::parseSuccess(QIODevice &response)
{
    Q_D(RespondDecisionTaskCompletedResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SWF::RespondDecisionTaskCompletedResponsePrivate
 * \brief The RespondDecisionTaskCompletedResponsePrivate class provides private implementation for RespondDecisionTaskCompletedResponse.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a RespondDecisionTaskCompletedResponsePrivate object with public implementation \a q.
 */
RespondDecisionTaskCompletedResponsePrivate::RespondDecisionTaskCompletedResponsePrivate(
    RespondDecisionTaskCompletedResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a SWF RespondDecisionTaskCompleted response element from \a xml.
 */
void RespondDecisionTaskCompletedResponsePrivate::parseRespondDecisionTaskCompletedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RespondDecisionTaskCompletedResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
