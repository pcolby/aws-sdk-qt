// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startimagescanresponse.h"
#include "startimagescanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::StartImageScanResponse
 * \brief The StartImageScanResponse class provides an interace for Ecr StartImageScan responses.
 *
 * \inmodule QtAwsEcr
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 * 
 *  images>
 * 
 *  Amazon ECR has service endpoints in each supported Region. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ecr.html">Amazon ECR endpoints</a> in the <i>Amazon Web Services
 *  General
 *
 * \sa EcrClient::startImageScan
 */

/*!
 * Constructs a StartImageScanResponse object for \a reply to \a request, with parent \a parent.
 */
StartImageScanResponse::StartImageScanResponse(
        const StartImageScanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new StartImageScanResponsePrivate(this), parent)
{
    setRequest(new StartImageScanRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartImageScanRequest * StartImageScanResponse::request() const
{
    Q_D(const StartImageScanResponse);
    return static_cast<const StartImageScanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr StartImageScan \a response.
 */
void StartImageScanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartImageScanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::StartImageScanResponsePrivate
 * \brief The StartImageScanResponsePrivate class provides private implementation for StartImageScanResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a StartImageScanResponsePrivate object with public implementation \a q.
 */
StartImageScanResponsePrivate::StartImageScanResponsePrivate(
    StartImageScanResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr StartImageScan response element from \a xml.
 */
void StartImageScanResponsePrivate::parseStartImageScanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImageScanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
