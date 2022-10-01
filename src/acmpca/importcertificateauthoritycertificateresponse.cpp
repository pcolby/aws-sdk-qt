// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importcertificateauthoritycertificateresponse.h"
#include "importcertificateauthoritycertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AcmPca {

/*!
 * \class QtAws::AcmPca::ImportCertificateAuthorityCertificateResponse
 * \brief The ImportCertificateAuthorityCertificateResponse class provides an interace for AcmPca ImportCertificateAuthorityCertificate responses.
 *
 * \inmodule QtAwsAcmPca
 *
 *  This is the <i>Certificate Manager Private Certificate Authority (PCA) API Reference</i>. It provides descriptions,
 *  syntax, and usage examples for each of the actions and data types involved in creating and managing a private
 *  certificate authority (CA) for your
 * 
 *  organization>
 * 
 *  The documentation for each action shows the API request parameters and the JSON response. Alternatively, you can use one
 *  of the Amazon Web Services SDKs to access an API that is tailored to the programming language or platform that you
 *  prefer. For more information, see <a href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services
 * 
 *  SDKs</a>>
 * 
 *  Each ACM Private CA API operation has a quota that determines the number of times the operation can be called per
 *  second. ACM Private CA throttles API requests at different rates depending on the operation. Throttling means that ACM
 *  Private CA rejects an otherwise valid request because the request exceeds the operation's quota for the number of
 *  requests per second. When a request is throttled, ACM Private CA returns a <a
 *  href="https://docs.aws.amazon.com/acm-pca/latest/APIReference/CommonErrors.html">ThrottlingException</a> error. ACM
 *  Private CA does not guarantee a minimum request rate for APIs.
 * 
 *  </p
 * 
 *  To see an up-to-date list of your ACM Private CA quotas, or to request a quota increase, log into your Amazon Web
 *  Services account and visit the <a href="https://console.aws.amazon.com/servicequotas/">Service Quotas</a>
 *
 * \sa AcmPcaClient::importCertificateAuthorityCertificate
 */

/*!
 * Constructs a ImportCertificateAuthorityCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
ImportCertificateAuthorityCertificateResponse::ImportCertificateAuthorityCertificateResponse(
        const ImportCertificateAuthorityCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmPcaResponse(new ImportCertificateAuthorityCertificateResponsePrivate(this), parent)
{
    setRequest(new ImportCertificateAuthorityCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportCertificateAuthorityCertificateRequest * ImportCertificateAuthorityCertificateResponse::request() const
{
    Q_D(const ImportCertificateAuthorityCertificateResponse);
    return static_cast<const ImportCertificateAuthorityCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AcmPca ImportCertificateAuthorityCertificate \a response.
 */
void ImportCertificateAuthorityCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportCertificateAuthorityCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AcmPca::ImportCertificateAuthorityCertificateResponsePrivate
 * \brief The ImportCertificateAuthorityCertificateResponsePrivate class provides private implementation for ImportCertificateAuthorityCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcmPca
 */

/*!
 * Constructs a ImportCertificateAuthorityCertificateResponsePrivate object with public implementation \a q.
 */
ImportCertificateAuthorityCertificateResponsePrivate::ImportCertificateAuthorityCertificateResponsePrivate(
    ImportCertificateAuthorityCertificateResponse * const q) : AcmPcaResponsePrivate(q)
{

}

/*!
 * Parses a AcmPca ImportCertificateAuthorityCertificate response element from \a xml.
 */
void ImportCertificateAuthorityCertificateResponsePrivate::parseImportCertificateAuthorityCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportCertificateAuthorityCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AcmPca
} // namespace QtAws
