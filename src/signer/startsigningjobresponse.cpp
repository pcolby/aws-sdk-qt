// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startsigningjobresponse.h"
#include "startsigningjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Signer {

/*!
 * \class QtAws::Signer::StartSigningJobResponse
 * \brief The StartSigningJobResponse class provides an interace for Signer StartSigningJob responses.
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
 * \sa SignerClient::startSigningJob
 */

/*!
 * Constructs a StartSigningJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartSigningJobResponse::StartSigningJobResponse(
        const StartSigningJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SignerResponse(new StartSigningJobResponsePrivate(this), parent)
{
    setRequest(new StartSigningJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSigningJobRequest * StartSigningJobResponse::request() const
{
    Q_D(const StartSigningJobResponse);
    return static_cast<const StartSigningJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Signer StartSigningJob \a response.
 */
void StartSigningJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSigningJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Signer::StartSigningJobResponsePrivate
 * \brief The StartSigningJobResponsePrivate class provides private implementation for StartSigningJobResponse.
 * \internal
 *
 * \inmodule QtAwsSigner
 */

/*!
 * Constructs a StartSigningJobResponsePrivate object with public implementation \a q.
 */
StartSigningJobResponsePrivate::StartSigningJobResponsePrivate(
    StartSigningJobResponse * const q) : SignerResponsePrivate(q)
{

}

/*!
 * Parses a Signer StartSigningJob response element from \a xml.
 */
void StartSigningJobResponsePrivate::parseStartSigningJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSigningJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Signer
} // namespace QtAws
