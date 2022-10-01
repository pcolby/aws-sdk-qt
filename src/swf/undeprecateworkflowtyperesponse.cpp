// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "undeprecateworkflowtyperesponse.h"
#include "undeprecateworkflowtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::UndeprecateWorkflowTypeResponse
 * \brief The UndeprecateWorkflowTypeResponse class provides an interace for Swf UndeprecateWorkflowType responses.
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
 * \sa SwfClient::undeprecateWorkflowType
 */

/*!
 * Constructs a UndeprecateWorkflowTypeResponse object for \a reply to \a request, with parent \a parent.
 */
UndeprecateWorkflowTypeResponse::UndeprecateWorkflowTypeResponse(
        const UndeprecateWorkflowTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new UndeprecateWorkflowTypeResponsePrivate(this), parent)
{
    setRequest(new UndeprecateWorkflowTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UndeprecateWorkflowTypeRequest * UndeprecateWorkflowTypeResponse::request() const
{
    Q_D(const UndeprecateWorkflowTypeResponse);
    return static_cast<const UndeprecateWorkflowTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf UndeprecateWorkflowType \a response.
 */
void UndeprecateWorkflowTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UndeprecateWorkflowTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::UndeprecateWorkflowTypeResponsePrivate
 * \brief The UndeprecateWorkflowTypeResponsePrivate class provides private implementation for UndeprecateWorkflowTypeResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a UndeprecateWorkflowTypeResponsePrivate object with public implementation \a q.
 */
UndeprecateWorkflowTypeResponsePrivate::UndeprecateWorkflowTypeResponsePrivate(
    UndeprecateWorkflowTypeResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf UndeprecateWorkflowType response element from \a xml.
 */
void UndeprecateWorkflowTypeResponsePrivate::parseUndeprecateWorkflowTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UndeprecateWorkflowTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
