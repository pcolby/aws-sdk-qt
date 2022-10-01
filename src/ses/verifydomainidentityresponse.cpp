// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifydomainidentityresponse.h"
#include "verifydomainidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::VerifyDomainIdentityResponse
 * \brief The VerifyDomainIdentityResponse class provides an interace for Ses VerifyDomainIdentity responses.
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
 * \sa SesClient::verifyDomainIdentity
 */

/*!
 * Constructs a VerifyDomainIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
VerifyDomainIdentityResponse::VerifyDomainIdentityResponse(
        const VerifyDomainIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new VerifyDomainIdentityResponsePrivate(this), parent)
{
    setRequest(new VerifyDomainIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const VerifyDomainIdentityRequest * VerifyDomainIdentityResponse::request() const
{
    Q_D(const VerifyDomainIdentityResponse);
    return static_cast<const VerifyDomainIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses VerifyDomainIdentity \a response.
 */
void VerifyDomainIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(VerifyDomainIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::VerifyDomainIdentityResponsePrivate
 * \brief The VerifyDomainIdentityResponsePrivate class provides private implementation for VerifyDomainIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a VerifyDomainIdentityResponsePrivate object with public implementation \a q.
 */
VerifyDomainIdentityResponsePrivate::VerifyDomainIdentityResponsePrivate(
    VerifyDomainIdentityResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses VerifyDomainIdentity response element from \a xml.
 */
void VerifyDomainIdentityResponsePrivate::parseVerifyDomainIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyDomainIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
