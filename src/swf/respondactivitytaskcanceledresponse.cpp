// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "respondactivitytaskcanceledresponse.h"
#include "respondactivitytaskcanceledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RespondActivityTaskCanceledResponse
 * \brief The RespondActivityTaskCanceledResponse class provides an interace for Swf RespondActivityTaskCanceled responses.
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
 * \sa SwfClient::respondActivityTaskCanceled
 */

/*!
 * Constructs a RespondActivityTaskCanceledResponse object for \a reply to \a request, with parent \a parent.
 */
RespondActivityTaskCanceledResponse::RespondActivityTaskCanceledResponse(
        const RespondActivityTaskCanceledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new RespondActivityTaskCanceledResponsePrivate(this), parent)
{
    setRequest(new RespondActivityTaskCanceledRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RespondActivityTaskCanceledRequest * RespondActivityTaskCanceledResponse::request() const
{
    Q_D(const RespondActivityTaskCanceledResponse);
    return static_cast<const RespondActivityTaskCanceledRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf RespondActivityTaskCanceled \a response.
 */
void RespondActivityTaskCanceledResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RespondActivityTaskCanceledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::RespondActivityTaskCanceledResponsePrivate
 * \brief The RespondActivityTaskCanceledResponsePrivate class provides private implementation for RespondActivityTaskCanceledResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RespondActivityTaskCanceledResponsePrivate object with public implementation \a q.
 */
RespondActivityTaskCanceledResponsePrivate::RespondActivityTaskCanceledResponsePrivate(
    RespondActivityTaskCanceledResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf RespondActivityTaskCanceled response element from \a xml.
 */
void RespondActivityTaskCanceledResponsePrivate::parseRespondActivityTaskCanceledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RespondActivityTaskCanceledResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
