// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportcertificateresponse.h"
#include "exportcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::ExportCertificateResponse
 * \brief The ExportCertificateResponse class provides an interace for Acm ExportCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::exportCertificate
 */

/*!
 * Constructs a ExportCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
ExportCertificateResponse::ExportCertificateResponse(
        const ExportCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new ExportCertificateResponsePrivate(this), parent)
{
    setRequest(new ExportCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportCertificateRequest * ExportCertificateResponse::request() const
{
    Q_D(const ExportCertificateResponse);
    return static_cast<const ExportCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm ExportCertificate \a response.
 */
void ExportCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::ExportCertificateResponsePrivate
 * \brief The ExportCertificateResponsePrivate class provides private implementation for ExportCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a ExportCertificateResponsePrivate object with public implementation \a q.
 */
ExportCertificateResponsePrivate::ExportCertificateResponsePrivate(
    ExportCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm ExportCertificate response element from \a xml.
 */
void ExportCertificateResponsePrivate::parseExportCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
