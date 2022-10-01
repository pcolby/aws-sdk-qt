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

#include "updatecertificateauthorityresponse.h"
#include "updatecertificateauthorityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AcmPca {

/*!
 * \class QtAws::AcmPca::UpdateCertificateAuthorityResponse
 * \brief The UpdateCertificateAuthorityResponse class provides an interace for AcmPca UpdateCertificateAuthority responses.
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
 * \sa AcmPcaClient::updateCertificateAuthority
 */

/*!
 * Constructs a UpdateCertificateAuthorityResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCertificateAuthorityResponse::UpdateCertificateAuthorityResponse(
        const UpdateCertificateAuthorityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmPcaResponse(new UpdateCertificateAuthorityResponsePrivate(this), parent)
{
    setRequest(new UpdateCertificateAuthorityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCertificateAuthorityRequest * UpdateCertificateAuthorityResponse::request() const
{
    Q_D(const UpdateCertificateAuthorityResponse);
    return static_cast<const UpdateCertificateAuthorityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AcmPca UpdateCertificateAuthority \a response.
 */
void UpdateCertificateAuthorityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCertificateAuthorityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AcmPca::UpdateCertificateAuthorityResponsePrivate
 * \brief The UpdateCertificateAuthorityResponsePrivate class provides private implementation for UpdateCertificateAuthorityResponse.
 * \internal
 *
 * \inmodule QtAwsAcmPca
 */

/*!
 * Constructs a UpdateCertificateAuthorityResponsePrivate object with public implementation \a q.
 */
UpdateCertificateAuthorityResponsePrivate::UpdateCertificateAuthorityResponsePrivate(
    UpdateCertificateAuthorityResponse * const q) : AcmPcaResponsePrivate(q)
{

}

/*!
 * Parses a AcmPca UpdateCertificateAuthority response element from \a xml.
 */
void UpdateCertificateAuthorityResponsePrivate::parseUpdateCertificateAuthorityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCertificateAuthorityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AcmPca
} // namespace QtAws
