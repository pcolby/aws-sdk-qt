// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importcertificateresponse.h"
#include "importcertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::ImportCertificateResponse
 * \brief The ImportCertificateResponse class provides an interace for Acm ImportCertificate responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::importCertificate
 */

/*!
 * Constructs a ImportCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
ImportCertificateResponse::ImportCertificateResponse(
        const ImportCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new ImportCertificateResponsePrivate(this), parent)
{
    setRequest(new ImportCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportCertificateRequest * ImportCertificateResponse::request() const
{
    Q_D(const ImportCertificateResponse);
    return static_cast<const ImportCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm ImportCertificate \a response.
 */
void ImportCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::ImportCertificateResponsePrivate
 * \brief The ImportCertificateResponsePrivate class provides private implementation for ImportCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a ImportCertificateResponsePrivate object with public implementation \a q.
 */
ImportCertificateResponsePrivate::ImportCertificateResponsePrivate(
    ImportCertificateResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm ImportCertificate response element from \a xml.
 */
void ImportCertificateResponsePrivate::parseImportCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
