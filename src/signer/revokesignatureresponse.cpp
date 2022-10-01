// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "revokesignatureresponse.h"
#include "revokesignatureresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::RevokeSignatureResponse
 * \brief The RevokeSignatureResponse class provides an interace for Signer RevokeSignature responses.
 *
 * \inmodule QtAwsSigner
 *
 *  AWS Signer is a fully managed code signing service to help you ensure the trust and integrity of your code.
 * 
 *  </p
 * 
 *  AWS Signer supports the following
 * 
 *  applications>
 * 
 *  With <i>code signing for AWS Lambda</i>, you can sign AWS Lambda deployment packages. Integrated support is provided for
 *  Amazon S3, Amazon CloudWatch, and AWS CloudTrail. In order to sign code, you create a signing profile and then use
 *  Signer to sign Lambda zip files in S3.
 * 
 *  </p
 * 
 *  With <i>code signing for IoT</i>, you can sign code for any IoT device that is supported by AWS. IoT code signing is
 *  available for <a href="http://docs.aws.amazon.com/freertos/latest/userguide/">Amazon FreeRTOS</a> and <a
 *  href="http://docs.aws.amazon.com/iot/latest/developerguide/">AWS IoT Device Management</a>, and is integrated with <a
 *  href="http://docs.aws.amazon.com/acm/latest/userguide/">AWS Certificate Manager (ACM)</a>. In order to sign code, you
 *  import a third-party code signing certificate using ACM, and use that to sign updates in Amazon FreeRTOS and AWS IoT
 *  Device Management.
 * 
 *  </p
 * 
 *  For more information about AWS Signer, see the <a
 *  href="http://docs.aws.amazon.com/signer/latest/developerguide/Welcome.html">AWS Signer Developer
 * 
 *  Guide</a>>
 *
 * \sa SignerClient::revokeSignature
 */

/*!
 * Constructs a RevokeSignatureResponse object for \a reply to \a request, with parent \a parent.
 */
RevokeSignatureResponse::RevokeSignatureResponse(
        const RevokeSignatureRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SignerResponse(new RevokeSignatureResponsePrivate(this), parent)
{
    setRequest(new RevokeSignatureRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokeSignatureRequest * RevokeSignatureResponse::request() const
{
    Q_D(const RevokeSignatureResponse);
    return static_cast<const RevokeSignatureRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Signer RevokeSignature \a response.
 */
void RevokeSignatureResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RevokeSignatureResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Signer::RevokeSignatureResponsePrivate
 * \brief The RevokeSignatureResponsePrivate class provides private implementation for RevokeSignatureResponse.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a RevokeSignatureResponsePrivate object with public implementation \a q.
 */
RevokeSignatureResponsePrivate::RevokeSignatureResponsePrivate(
    RevokeSignatureResponse * const q) : SignerResponsePrivate(q)
{

}

/*!
 * Parses a Signer RevokeSignature response element from \a xml.
 */
void RevokeSignatureResponsePrivate::parseRevokeSignatureResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeSignatureResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Signer
} // namespace QtAws
