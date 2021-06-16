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

#include "startsigningjobresponse.h"
#include "startsigningjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace signer {

/*!
 * \class QtAws::signer::StartSigningJobResponse
 * \brief The StartSigningJobResponse class provides an interace for signer StartSigningJob responses.
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
 * \sa signerClient::startSigningJob
 */

/*!
 * Constructs a StartSigningJobResponse object for \a reply to \a request, with parent \a parent.
 */
StartSigningJobResponse::StartSigningJobResponse(
        const StartSigningJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : signerResponse(new StartSigningJobResponsePrivate(this), parent)
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
 * Parses a successful signer StartSigningJob \a response.
 */
void StartSigningJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSigningJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::signer::StartSigningJobResponsePrivate
 * \brief The StartSigningJobResponsePrivate class provides private implementation for StartSigningJobResponse.
 * \internal
 *
 * \inmodule QtAwssigner
 */

/*!
 * Constructs a StartSigningJobResponsePrivate object with public implementation \a q.
 */
StartSigningJobResponsePrivate::StartSigningJobResponsePrivate(
    StartSigningJobResponse * const q) : signerResponsePrivate(q)
{

}

/*!
 * Parses a signer StartSigningJob response element from \a xml.
 */
void StartSigningJobResponsePrivate::parseStartSigningJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSigningJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace signer
} // namespace QtAws
