/*
    Copyright 2013-2018 Paul Colby

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

#include "pollfordecisiontaskresponse.h"
#include "pollfordecisiontaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::PollForDecisionTaskResponse
 * \brief The PollForDecisionTaskResponse class provides an interace for SWF PollForDecisionTask responses.
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
 * Parses a successful SWF PollForDecisionTask \a response.
 */
void PollForDecisionTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(PollForDecisionTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SWF::PollForDecisionTaskResponsePrivate
 * \brief The PollForDecisionTaskResponsePrivate class provides private implementation for PollForDecisionTaskResponse.
 * \internal
 *
 * \inmodule QtAwsSWF
 */

/*!
 * Constructs a PollForDecisionTaskResponsePrivate object with public implementation \a q.
 */
PollForDecisionTaskResponsePrivate::PollForDecisionTaskResponsePrivate(
    PollForDecisionTaskResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a SWF PollForDecisionTask response element from \a xml.
 */
void PollForDecisionTaskResponsePrivate::parsePollForDecisionTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PollForDecisionTaskResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
