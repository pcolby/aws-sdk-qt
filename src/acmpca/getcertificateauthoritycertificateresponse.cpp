// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcertificateauthoritycertificateresponse.h"
#include "getcertificateauthoritycertificateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AcmPca {

/*!
 * \class QtAws::AcmPca::GetCertificateAuthorityCertificateResponse
 * \brief The GetCertificateAuthorityCertificateResponse class provides an interace for AcmPca GetCertificateAuthorityCertificate responses.
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
 * \sa AcmPcaClient::getCertificateAuthorityCertificate
 */

/*!
 * Constructs a GetCertificateAuthorityCertificateResponse object for \a reply to \a request, with parent \a parent.
 */
GetCertificateAuthorityCertificateResponse::GetCertificateAuthorityCertificateResponse(
        const GetCertificateAuthorityCertificateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmPcaResponse(new GetCertificateAuthorityCertificateResponsePrivate(this), parent)
{
    setRequest(new GetCertificateAuthorityCertificateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCertificateAuthorityCertificateRequest * GetCertificateAuthorityCertificateResponse::request() const
{
    Q_D(const GetCertificateAuthorityCertificateResponse);
    return static_cast<const GetCertificateAuthorityCertificateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AcmPca GetCertificateAuthorityCertificate \a response.
 */
void GetCertificateAuthorityCertificateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCertificateAuthorityCertificateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AcmPca::GetCertificateAuthorityCertificateResponsePrivate
 * \brief The GetCertificateAuthorityCertificateResponsePrivate class provides private implementation for GetCertificateAuthorityCertificateResponse.
 * \internal
 *
 * \inmodule QtAwsAcmPca
 */

/*!
 * Constructs a GetCertificateAuthorityCertificateResponsePrivate object with public implementation \a q.
 */
GetCertificateAuthorityCertificateResponsePrivate::GetCertificateAuthorityCertificateResponsePrivate(
    GetCertificateAuthorityCertificateResponse * const q) : AcmPcaResponsePrivate(q)
{

}

/*!
 * Parses a AcmPca GetCertificateAuthorityCertificate response element from \a xml.
 */
void GetCertificateAuthorityCertificateResponsePrivate::parseGetCertificateAuthorityCertificateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCertificateAuthorityCertificateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AcmPca
} // namespace QtAws
