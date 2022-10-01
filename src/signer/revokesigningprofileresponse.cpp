// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "revokesigningprofileresponse.h"
#include "revokesigningprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::RevokeSigningProfileResponse
 * \brief The RevokeSigningProfileResponse class provides an interace for Signer RevokeSigningProfile responses.
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
 * \sa SignerClient::revokeSigningProfile
 */

/*!
 * Constructs a RevokeSigningProfileResponse object for \a reply to \a request, with parent \a parent.
 */
RevokeSigningProfileResponse::RevokeSigningProfileResponse(
        const RevokeSigningProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SignerResponse(new RevokeSigningProfileResponsePrivate(this), parent)
{
    setRequest(new RevokeSigningProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokeSigningProfileRequest * RevokeSigningProfileResponse::request() const
{
    Q_D(const RevokeSigningProfileResponse);
    return static_cast<const RevokeSigningProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Signer RevokeSigningProfile \a response.
 */
void RevokeSigningProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RevokeSigningProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Signer::RevokeSigningProfileResponsePrivate
 * \brief The RevokeSigningProfileResponsePrivate class provides private implementation for RevokeSigningProfileResponse.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a RevokeSigningProfileResponsePrivate object with public implementation \a q.
 */
RevokeSigningProfileResponsePrivate::RevokeSigningProfileResponsePrivate(
    RevokeSigningProfileResponse * const q) : SignerResponsePrivate(q)
{

}

/*!
 * Parses a Signer RevokeSigningProfile response element from \a xml.
 */
void RevokeSigningProfileResponsePrivate::parseRevokeSigningProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeSigningProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Signer
} // namespace QtAws
