// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putpolicyresponse.h"
#include "putpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AcmPca {

/*!
 * \class QtAws::AcmPca::PutPolicyResponse
 * \brief The PutPolicyResponse class provides an interace for AcmPca PutPolicy responses.
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
 * \sa AcmPcaClient::putPolicy
 */

/*!
 * Constructs a PutPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutPolicyResponse::PutPolicyResponse(
        const PutPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmPcaResponse(new PutPolicyResponsePrivate(this), parent)
{
    setRequest(new PutPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPolicyRequest * PutPolicyResponse::request() const
{
    Q_D(const PutPolicyResponse);
    return static_cast<const PutPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AcmPca PutPolicy \a response.
 */
void PutPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AcmPca::PutPolicyResponsePrivate
 * \brief The PutPolicyResponsePrivate class provides private implementation for PutPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsAcmPca
 */

/*!
 * Constructs a PutPolicyResponsePrivate object with public implementation \a q.
 */
PutPolicyResponsePrivate::PutPolicyResponsePrivate(
    PutPolicyResponse * const q) : AcmPcaResponsePrivate(q)
{

}

/*!
 * Parses a AcmPca PutPolicy response element from \a xml.
 */
void PutPolicyResponsePrivate::parsePutPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AcmPca
} // namespace QtAws
