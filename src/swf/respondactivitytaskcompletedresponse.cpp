// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "respondactivitytaskcompletedresponse.h"
#include "respondactivitytaskcompletedresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RespondActivityTaskCompletedResponse
 * \brief The RespondActivityTaskCompletedResponse class provides an interace for Swf RespondActivityTaskCompleted responses.
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
 * \sa SwfClient::respondActivityTaskCompleted
 */

/*!
 * Constructs a RespondActivityTaskCompletedResponse object for \a reply to \a request, with parent \a parent.
 */
RespondActivityTaskCompletedResponse::RespondActivityTaskCompletedResponse(
        const RespondActivityTaskCompletedRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new RespondActivityTaskCompletedResponsePrivate(this), parent)
{
    setRequest(new RespondActivityTaskCompletedRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RespondActivityTaskCompletedRequest * RespondActivityTaskCompletedResponse::request() const
{
    Q_D(const RespondActivityTaskCompletedResponse);
    return static_cast<const RespondActivityTaskCompletedRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf RespondActivityTaskCompleted \a response.
 */
void RespondActivityTaskCompletedResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RespondActivityTaskCompletedResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::RespondActivityTaskCompletedResponsePrivate
 * \brief The RespondActivityTaskCompletedResponsePrivate class provides private implementation for RespondActivityTaskCompletedResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RespondActivityTaskCompletedResponsePrivate object with public implementation \a q.
 */
RespondActivityTaskCompletedResponsePrivate::RespondActivityTaskCompletedResponsePrivate(
    RespondActivityTaskCompletedResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf RespondActivityTaskCompleted response element from \a xml.
 */
void RespondActivityTaskCompletedResponsePrivate::parseRespondActivityTaskCompletedResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RespondActivityTaskCompletedResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
