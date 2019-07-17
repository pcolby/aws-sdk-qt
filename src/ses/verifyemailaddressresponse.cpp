/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "verifyemailaddressresponse.h"
#include "verifyemailaddressresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::VerifyEmailAddressResponse
 * \brief The VerifyEmailAddressResponse class provides an interace for SES VerifyEmailAddress responses.
 *
 * \inmodule QtAwsSES
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
 * Parses a successful SES VerifyEmailAddress \a response.
 */
void VerifyEmailAddressResponse::parseSuccess(QIODevice &response)
{
    //Q_D(VerifyEmailAddressResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::VerifyEmailAddressResponsePrivate
 * \brief The VerifyEmailAddressResponsePrivate class provides private implementation for VerifyEmailAddressResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a VerifyEmailAddressResponsePrivate object with public implementation \a q.
 */
VerifyEmailAddressResponsePrivate::VerifyEmailAddressResponsePrivate(
    VerifyEmailAddressResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES VerifyEmailAddress response element from \a xml.
 */
void VerifyEmailAddressResponsePrivate::parseVerifyEmailAddressResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("VerifyEmailAddressResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SES
} // namespace QtAws
