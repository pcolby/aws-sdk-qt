// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deprecateactivitytyperesponse.h"
#include "deprecateactivitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::DeprecateActivityTypeResponse
 * \brief The DeprecateActivityTypeResponse class provides an interace for Swf DeprecateActivityType responses.
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
 * \sa SwfClient::deprecateActivityType
 */

/*!
 * Constructs a DeprecateActivityTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeprecateActivityTypeResponse::DeprecateActivityTypeResponse(
        const DeprecateActivityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new DeprecateActivityTypeResponsePrivate(this), parent)
{
    setRequest(new DeprecateActivityTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeprecateActivityTypeRequest * DeprecateActivityTypeResponse::request() const
{
    Q_D(const DeprecateActivityTypeResponse);
    return static_cast<const DeprecateActivityTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf DeprecateActivityType \a response.
 */
void DeprecateActivityTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeprecateActivityTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::DeprecateActivityTypeResponsePrivate
 * \brief The DeprecateActivityTypeResponsePrivate class provides private implementation for DeprecateActivityTypeResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a DeprecateActivityTypeResponsePrivate object with public implementation \a q.
 */
DeprecateActivityTypeResponsePrivate::DeprecateActivityTypeResponsePrivate(
    DeprecateActivityTypeResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf DeprecateActivityType response element from \a xml.
 */
void DeprecateActivityTypeResponsePrivate::parseDeprecateActivityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeprecateActivityTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
