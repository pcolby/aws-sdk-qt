// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
