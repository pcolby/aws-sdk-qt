// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifyemailidentityresponse.h"
#include "verifyemailidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::VerifyEmailIdentityResponse
 * \brief The VerifyEmailIdentityResponse class provides an interace for Ses VerifyEmailIdentity responses.
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
 * \sa SesClient::verifyEmailIdentity
 */

/*!
 * Constructs a VerifyEmailIdentityResponse object for \a reply to \a request, with parent \a parent.
 */
VerifyEmailIdentityResponse::VerifyEmailIdentityResponse(
        const VerifyEmailIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new VerifyEmailIdentityResponsePrivate(this), parent)
{
    setRequest(new VerifyEmailIdentityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const VerifyEmailIdentityRequest * VerifyEmailIdentityResponse::request() const
{
    Q_D(const VerifyEmailIdentityResponse);
    return static_cast<const VerifyEmailIdentityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses VerifyEmailIdentity \a response.
 */
void VerifyEmailIdentityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(VerifyEmailIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::VerifyEmailIdentityResponsePrivate
 * \brief The VerifyEmailIdentityResponsePrivate class provides private implementation for VerifyEmailIdentityResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a VerifyEmailIdentityResponsePrivate object with public implementation \a q.
 */
VerifyEmailIdentityResponsePrivate::VerifyEmailIdentityResponsePrivate(
    VerifyEmailIdentityResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses VerifyEmailIdentity response element from \a xml.
 */
void VerifyEmailIdentityResponsePrivate::parseVerifyEmailIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyEmailIdentityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
