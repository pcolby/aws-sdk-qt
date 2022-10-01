// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setidentitynotificationtopicresponse.h"
#include "setidentitynotificationtopicresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetIdentityNotificationTopicResponse
 * \brief The SetIdentityNotificationTopicResponse class provides an interace for Ses SetIdentityNotificationTopic responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::setIdentityNotificationTopic
 */

/*!
 * Constructs a SetIdentityNotificationTopicResponse object for \a reply to \a request, with parent \a parent.
 */
SetIdentityNotificationTopicResponse::SetIdentityNotificationTopicResponse(
        const SetIdentityNotificationTopicRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new SetIdentityNotificationTopicResponsePrivate(this), parent)
{
    setRequest(new SetIdentityNotificationTopicRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetIdentityNotificationTopicRequest * SetIdentityNotificationTopicResponse::request() const
{
    Q_D(const SetIdentityNotificationTopicResponse);
    return static_cast<const SetIdentityNotificationTopicRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses SetIdentityNotificationTopic \a response.
 */
void SetIdentityNotificationTopicResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SetIdentityNotificationTopicResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::SetIdentityNotificationTopicResponsePrivate
 * \brief The SetIdentityNotificationTopicResponsePrivate class provides private implementation for SetIdentityNotificationTopicResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetIdentityNotificationTopicResponsePrivate object with public implementation \a q.
 */
SetIdentityNotificationTopicResponsePrivate::SetIdentityNotificationTopicResponsePrivate(
    SetIdentityNotificationTopicResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses SetIdentityNotificationTopic response element from \a xml.
 */
void SetIdentityNotificationTopicResponsePrivate::parseSetIdentityNotificationTopicResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetIdentityNotificationTopicResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
