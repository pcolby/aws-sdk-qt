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

#include "revokesigningprofileresponse.h"
#include "revokesigningprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::RevokeSigningProfileResponse
 * \brief The RevokeSigningProfileResponse class provides an interace for signer RevokeSigningProfile responses.
 *
 * \inmodule QtAwssigner
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
 * \sa signerClient::revokeSigningProfile
 */

/*!
 * Constructs a RevokeSigningProfileResponse object for \a reply to \a request, with parent \a parent.
 */
RevokeSigningProfileResponse::RevokeSigningProfileResponse(
        const RevokeSigningProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : signerResponse(new RevokeSigningProfileResponsePrivate(this), parent)
{
    setRequest(new RevokeSigningProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RevokeSigningProfileRequest * RevokeSigningProfileResponse::request() const
{
    return static_cast<const RevokeSigningProfileRequest *>(signerResponse::request());
}

/*!
 * \reimp
 * Parses a successful signer RevokeSigningProfile \a response.
 */
void RevokeSigningProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RevokeSigningProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::signer::RevokeSigningProfileResponsePrivate
 * \brief The RevokeSigningProfileResponsePrivate class provides private implementation for RevokeSigningProfileResponse.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a RevokeSigningProfileResponsePrivate object with public implementation \a q.
 */
RevokeSigningProfileResponsePrivate::RevokeSigningProfileResponsePrivate(
    RevokeSigningProfileResponse * const q) : signerResponsePrivate(q)
{

}

/*!
 * Parses a signer RevokeSigningProfile response element from \a xml.
 */
void RevokeSigningProfileResponsePrivate::parseRevokeSigningProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeSigningProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace signer
} // namespace QtAws
