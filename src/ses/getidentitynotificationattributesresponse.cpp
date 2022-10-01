// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentitynotificationattributesresponse.h"
#include "getidentitynotificationattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetIdentityNotificationAttributesResponse
 * \brief The GetIdentityNotificationAttributesResponse class provides an interace for Ses GetIdentityNotificationAttributes responses.
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
 * \sa SesClient::getIdentityNotificationAttributes
 */

/*!
 * Constructs a GetIdentityNotificationAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityNotificationAttributesResponse::GetIdentityNotificationAttributesResponse(
        const GetIdentityNotificationAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetIdentityNotificationAttributesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityNotificationAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityNotificationAttributesRequest * GetIdentityNotificationAttributesResponse::request() const
{
    Q_D(const GetIdentityNotificationAttributesResponse);
    return static_cast<const GetIdentityNotificationAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses GetIdentityNotificationAttributes \a response.
 */
void GetIdentityNotificationAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIdentityNotificationAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::GetIdentityNotificationAttributesResponsePrivate
 * \brief The GetIdentityNotificationAttributesResponsePrivate class provides private implementation for GetIdentityNotificationAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetIdentityNotificationAttributesResponsePrivate object with public implementation \a q.
 */
GetIdentityNotificationAttributesResponsePrivate::GetIdentityNotificationAttributesResponsePrivate(
    GetIdentityNotificationAttributesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses GetIdentityNotificationAttributes response element from \a xml.
 */
void GetIdentityNotificationAttributesResponsePrivate::parseGetIdentityNotificationAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityNotificationAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
