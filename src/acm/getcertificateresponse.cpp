// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcertificateresponse.h"
#include "getcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::GetCertificateResponse
 * \brief The GetCertificateResponse class provides an interace for Acm GetCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::getCertificate
 */

/*!
 * Constructs a GetCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
GetCertificateResponse::GetCertificateResponse(
        const GetCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new GetCertificateResponsePrivate(this), parent)
{
    setRequest(new GetCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCertificateRequest * GetCertificateResponse::request() const
{
    Q_D(const GetCertificateResponse);
    return static_cast<const GetCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm GetCertificate \a response.
 */
void GetCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::GetCertificateResponsePrivate
 * \brief The GetCertificateResponsePrivate class provides private implementation for GetCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a GetCertificateResponsePrivate object with public implementation \a q.
 */
GetCertificateResponsePrivate::GetCertificateResponsePrivate(
    GetCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm GetCertificate response element from \a xml.
 */
void GetCertificateResponsePrivate::parseGetCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
