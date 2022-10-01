// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deprecateworkflowtyperesponse.h"
#include "deprecateworkflowtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::DeprecateWorkflowTypeResponse
 * \brief The DeprecateWorkflowTypeResponse class provides an interace for Swf DeprecateWorkflowType responses.
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
 * \sa SwfClient::deprecateWorkflowType
 */

/*!
 * Constructs a DeprecateWorkflowTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeprecateWorkflowTypeResponse::DeprecateWorkflowTypeResponse(
        const DeprecateWorkflowTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new DeprecateWorkflowTypeResponsePrivate(this), parent)
{
    setRequest(new DeprecateWorkflowTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeprecateWorkflowTypeRequest * DeprecateWorkflowTypeResponse::request() const
{
    Q_D(const DeprecateWorkflowTypeResponse);
    return static_cast<const DeprecateWorkflowTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf DeprecateWorkflowType \a response.
 */
void DeprecateWorkflowTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeprecateWorkflowTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::DeprecateWorkflowTypeResponsePrivate
 * \brief The DeprecateWorkflowTypeResponsePrivate class provides private implementation for DeprecateWorkflowTypeResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a DeprecateWorkflowTypeResponsePrivate object with public implementation \a q.
 */
DeprecateWorkflowTypeResponsePrivate::DeprecateWorkflowTypeResponsePrivate(
    DeprecateWorkflowTypeResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf DeprecateWorkflowType response element from \a xml.
 */
void DeprecateWorkflowTypeResponsePrivate::parseDeprecateWorkflowTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeprecateWorkflowTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
