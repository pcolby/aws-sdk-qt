/*
    Copyright 2013-2021 Paul Colby

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

#include "renewcertificateresponse.h"
#include "renewcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::RenewCertificateResponse
 * \brief The RenewCertificateResponse class provides an interace for Acm RenewCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::renewCertificate
 */

/*!
 * Constructs a RenewCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
RenewCertificateResponse::RenewCertificateResponse(
        const RenewCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new RenewCertificateResponsePrivate(this), parent)
{
    setRequest(new RenewCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RenewCertificateRequest * RenewCertificateResponse::request() const
{
    Q_D(const RenewCertificateResponse);
    return static_cast<const RenewCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm RenewCertificate \a response.
 */
void RenewCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RenewCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::RenewCertificateResponsePrivate
 * \brief The RenewCertificateResponsePrivate class provides private implementation for RenewCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a RenewCertificateResponsePrivate object with public implementation \a q.
 */
RenewCertificateResponsePrivate::RenewCertificateResponsePrivate(
    RenewCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm RenewCertificate response element from \a xml.
 */
void RenewCertificateResponsePrivate::parseRenewCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RenewCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
