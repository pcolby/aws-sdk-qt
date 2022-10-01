// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "undeprecateactivitytyperesponse.h"
#include "undeprecateactivitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::UndeprecateActivityTypeResponse
 * \brief The UndeprecateActivityTypeResponse class provides an interace for Swf UndeprecateActivityType responses.
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
 * \sa SwfClient::undeprecateActivityType
 */

/*!
 * Constructs a UndeprecateActivityTypeResponse object for \a reply to \a request, with parent \a parent.
 */
UndeprecateActivityTypeResponse::UndeprecateActivityTypeResponse(
        const UndeprecateActivityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SwfResponse(new UndeprecateActivityTypeResponsePrivate(this), parent)
{
    setRequest(new UndeprecateActivityTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UndeprecateActivityTypeRequest * UndeprecateActivityTypeResponse::request() const
{
    Q_D(const UndeprecateActivityTypeResponse);
    return static_cast<const UndeprecateActivityTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Swf UndeprecateActivityType \a response.
 */
void UndeprecateActivityTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UndeprecateActivityTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Swf::UndeprecateActivityTypeResponsePrivate
 * \brief The UndeprecateActivityTypeResponsePrivate class provides private implementation for UndeprecateActivityTypeResponse.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a UndeprecateActivityTypeResponsePrivate object with public implementation \a q.
 */
UndeprecateActivityTypeResponsePrivate::UndeprecateActivityTypeResponsePrivate(
    UndeprecateActivityTypeResponse * const q) : SwfResponsePrivate(q)
{

}

/*!
 * Parses a Swf UndeprecateActivityType response element from \a xml.
 */
void UndeprecateActivityTypeResponsePrivate::parseUndeprecateActivityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UndeprecateActivityTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Swf
} // namespace QtAws
