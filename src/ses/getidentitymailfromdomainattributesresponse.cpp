// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getidentitymailfromdomainattributesresponse.h"
#include "getidentitymailfromdomainattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::GetIdentityMailFromDomainAttributesResponse
 * \brief The GetIdentityMailFromDomainAttributesResponse class provides an interace for Ses GetIdentityMailFromDomainAttributes responses.
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
 * \sa SesClient::getIdentityMailFromDomainAttributes
 */

/*!
 * Constructs a GetIdentityMailFromDomainAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
GetIdentityMailFromDomainAttributesResponse::GetIdentityMailFromDomainAttributesResponse(
        const GetIdentityMailFromDomainAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new GetIdentityMailFromDomainAttributesResponsePrivate(this), parent)
{
    setRequest(new GetIdentityMailFromDomainAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIdentityMailFromDomainAttributesRequest * GetIdentityMailFromDomainAttributesResponse::request() const
{
    Q_D(const GetIdentityMailFromDomainAttributesResponse);
    return static_cast<const GetIdentityMailFromDomainAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses GetIdentityMailFromDomainAttributes \a response.
 */
void GetIdentityMailFromDomainAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIdentityMailFromDomainAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::GetIdentityMailFromDomainAttributesResponsePrivate
 * \brief The GetIdentityMailFromDomainAttributesResponsePrivate class provides private implementation for GetIdentityMailFromDomainAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a GetIdentityMailFromDomainAttributesResponsePrivate object with public implementation \a q.
 */
GetIdentityMailFromDomainAttributesResponsePrivate::GetIdentityMailFromDomainAttributesResponsePrivate(
    GetIdentityMailFromDomainAttributesResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses GetIdentityMailFromDomainAttributes response element from \a xml.
 */
void GetIdentityMailFromDomainAttributesResponsePrivate::parseGetIdentityMailFromDomainAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityMailFromDomainAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
