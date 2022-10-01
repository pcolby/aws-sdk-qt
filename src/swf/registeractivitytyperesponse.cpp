// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registeractivitytyperesponse.h"
#include "registeractivitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::RegisterActivityTypeResponse
 * \brief The RegisterActivityTypeResponse class provides an interace for Swf RegisterActivityType responses.
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
 * \sa SwfClient::registerActivityType
 */

/*!
 * Constructs a RegisterActivityTypeResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterActivityTypeResponse::RegisterActivityTypeResponse(
        const RegisterActivityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new RegisterActivityTypeResponsePrivate(this), parent)
{
    setRequest(new RegisterActivityTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterActivityTypeRequest * RegisterActivityTypeResponse::request() const
{
    Q_D(const RegisterActivityTypeResponse);
    return static_cast<const RegisterActivityTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf RegisterActivityType \a response.
 */
void RegisterActivityTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterActivityTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::RegisterActivityTypeResponsePrivate
 * \brief The RegisterActivityTypeResponsePrivate class provides private implementation for RegisterActivityTypeResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a RegisterActivityTypeResponsePrivate object with public implementation \a q.
 */
RegisterActivityTypeResponsePrivate::RegisterActivityTypeResponsePrivate(
    RegisterActivityTypeResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf RegisterActivityType response element from \a xml.
 */
void RegisterActivityTypeResponsePrivate::parseRegisterActivityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterActivityTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
