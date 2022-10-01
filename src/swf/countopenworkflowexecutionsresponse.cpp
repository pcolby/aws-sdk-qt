// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "countopenworkflowexecutionsresponse.h"
#include "countopenworkflowexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::CountOpenWorkflowExecutionsResponse
 * \brief The CountOpenWorkflowExecutionsResponse class provides an interace for Swf CountOpenWorkflowExecutions responses.
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
 * \sa SwfClient::countOpenWorkflowExecutions
 */

/*!
 * Constructs a CountOpenWorkflowExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
CountOpenWorkflowExecutionsResponse::CountOpenWorkflowExecutionsResponse(
        const CountOpenWorkflowExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new CountOpenWorkflowExecutionsResponsePrivate(this), parent)
{
    setRequest(new CountOpenWorkflowExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CountOpenWorkflowExecutionsRequest * CountOpenWorkflowExecutionsResponse::request() const
{
    Q_D(const CountOpenWorkflowExecutionsResponse);
    return static_cast<const CountOpenWorkflowExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf CountOpenWorkflowExecutions \a response.
 */
void CountOpenWorkflowExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CountOpenWorkflowExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::CountOpenWorkflowExecutionsResponsePrivate
 * \brief The CountOpenWorkflowExecutionsResponsePrivate class provides private implementation for CountOpenWorkflowExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a CountOpenWorkflowExecutionsResponsePrivate object with public implementation \a q.
 */
CountOpenWorkflowExecutionsResponsePrivate::CountOpenWorkflowExecutionsResponsePrivate(
    CountOpenWorkflowExecutionsResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf CountOpenWorkflowExecutions response element from \a xml.
 */
void CountOpenWorkflowExecutionsResponsePrivate::parseCountOpenWorkflowExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CountOpenWorkflowExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
