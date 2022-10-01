// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putimagescanningconfigurationresponse.h"
#include "putimagescanningconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutImageScanningConfigurationResponse
 * \brief The PutImageScanningConfigurationResponse class provides an interace for Ecr PutImageScanningConfiguration responses.
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
 * \sa EcrClient::putImageScanningConfiguration
 */

/*!
 * Constructs a PutImageScanningConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutImageScanningConfigurationResponse::PutImageScanningConfigurationResponse(
        const PutImageScanningConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new PutImageScanningConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutImageScanningConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutImageScanningConfigurationRequest * PutImageScanningConfigurationResponse::request() const
{
    Q_D(const PutImageScanningConfigurationResponse);
    return static_cast<const PutImageScanningConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr PutImageScanningConfiguration \a response.
 */
void PutImageScanningConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutImageScanningConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::PutImageScanningConfigurationResponsePrivate
 * \brief The PutImageScanningConfigurationResponsePrivate class provides private implementation for PutImageScanningConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutImageScanningConfigurationResponsePrivate object with public implementation \a q.
 */
PutImageScanningConfigurationResponsePrivate::PutImageScanningConfigurationResponsePrivate(
    PutImageScanningConfigurationResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr PutImageScanningConfiguration response element from \a xml.
 */
void PutImageScanningConfigurationResponsePrivate::parsePutImageScanningConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutImageScanningConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
