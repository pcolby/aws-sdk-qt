// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "verifyemailaddressresponse.h"
#include "verifyemailaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::VerifyEmailAddressResponse
 * \brief The VerifyEmailAddressResponse class provides an interace for Ses VerifyEmailAddress responses.
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
 * \sa SesClient::verifyEmailAddress
 */

/*!
 * Constructs a VerifyEmailAddressResponse object for \a reply to \a request, with parent \a parent.
 */
VerifyEmailAddressResponse::VerifyEmailAddressResponse(
        const VerifyEmailAddressRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new VerifyEmailAddressResponsePrivate(this), parent)
{
    setRequest(new VerifyEmailAddressRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const VerifyEmailAddressRequest * VerifyEmailAddressResponse::request() const
{
    Q_D(const VerifyEmailAddressResponse);
    return static_cast<const VerifyEmailAddressRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses VerifyEmailAddress \a response.
 */
void VerifyEmailAddressResponse::parseSuccess(QIODevice &response)
{
    //Q_D(VerifyEmailAddressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::VerifyEmailAddressResponsePrivate
 * \brief The VerifyEmailAddressResponsePrivate class provides private implementation for VerifyEmailAddressResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a VerifyEmailAddressResponsePrivate object with public implementation \a q.
 */
VerifyEmailAddressResponsePrivate::VerifyEmailAddressResponsePrivate(
    VerifyEmailAddressResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses VerifyEmailAddress response element from \a xml.
 */
void VerifyEmailAddressResponsePrivate::parseVerifyEmailAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyEmailAddressResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
