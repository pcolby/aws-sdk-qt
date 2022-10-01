// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerworkflowtyperesponse.h"
#include "registerworkflowtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RegisterWorkflowTypeResponse
 * \brief The RegisterWorkflowTypeResponse class provides an interace for Swf RegisterWorkflowType responses.
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
 * \sa SwfClient::registerWorkflowType
 */

/*!
 * Constructs a RegisterWorkflowTypeResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterWorkflowTypeResponse::RegisterWorkflowTypeResponse(
        const RegisterWorkflowTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new RegisterWorkflowTypeResponsePrivate(this), parent)
{
    setRequest(new RegisterWorkflowTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterWorkflowTypeRequest * RegisterWorkflowTypeResponse::request() const
{
    Q_D(const RegisterWorkflowTypeResponse);
    return static_cast<const RegisterWorkflowTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf RegisterWorkflowType \a response.
 */
void RegisterWorkflowTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterWorkflowTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::RegisterWorkflowTypeResponsePrivate
 * \brief The RegisterWorkflowTypeResponsePrivate class provides private implementation for RegisterWorkflowTypeResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RegisterWorkflowTypeResponsePrivate object with public implementation \a q.
 */
RegisterWorkflowTypeResponsePrivate::RegisterWorkflowTypeResponsePrivate(
    RegisterWorkflowTypeResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf RegisterWorkflowType response element from \a xml.
 */
void RegisterWorkflowTypeResponsePrivate::parseRegisterWorkflowTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterWorkflowTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
