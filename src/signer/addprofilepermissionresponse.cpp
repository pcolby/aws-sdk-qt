// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addprofilepermissionresponse.h"
#include "addprofilepermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::AddProfilePermissionResponse
 * \brief The AddProfilePermissionResponse class provides an interace for Signer AddProfilePermission responses.
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
 * \sa SignerClient::addProfilePermission
 */

/*!
 * Constructs a AddProfilePermissionResponse object for \a reply to \a request, with parent \a parent.
 */
AddProfilePermissionResponse::AddProfilePermissionResponse(
        const AddProfilePermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SignerResponse(new AddProfilePermissionResponsePrivate(this), parent)
{
    setRequest(new AddProfilePermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddProfilePermissionRequest * AddProfilePermissionResponse::request() const
{
    Q_D(const AddProfilePermissionResponse);
    return static_cast<const AddProfilePermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Signer AddProfilePermission \a response.
 */
void AddProfilePermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddProfilePermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Signer::AddProfilePermissionResponsePrivate
 * \brief The AddProfilePermissionResponsePrivate class provides private implementation for AddProfilePermissionResponse.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a AddProfilePermissionResponsePrivate object with public implementation \a q.
 */
AddProfilePermissionResponsePrivate::AddProfilePermissionResponsePrivate(
    AddProfilePermissionResponse * const q) : SignerResponsePrivate(q)
{

}

/*!
 * Parses a Signer AddProfilePermission response element from \a xml.
 */
void AddProfilePermissionResponsePrivate::parseAddProfilePermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddProfilePermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Signer
} // namespace QtAws
