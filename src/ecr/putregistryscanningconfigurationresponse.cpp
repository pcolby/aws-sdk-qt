// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putregistryscanningconfigurationresponse.h"
#include "putregistryscanningconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutRegistryScanningConfigurationResponse
 * \brief The PutRegistryScanningConfigurationResponse class provides an interace for Ecr PutRegistryScanningConfiguration responses.
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
 * \sa EcrClient::putRegistryScanningConfiguration
 */

/*!
 * Constructs a PutRegistryScanningConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutRegistryScanningConfigurationResponse::PutRegistryScanningConfigurationResponse(
        const PutRegistryScanningConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new PutRegistryScanningConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutRegistryScanningConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRegistryScanningConfigurationRequest * PutRegistryScanningConfigurationResponse::request() const
{
    Q_D(const PutRegistryScanningConfigurationResponse);
    return static_cast<const PutRegistryScanningConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr PutRegistryScanningConfiguration \a response.
 */
void PutRegistryScanningConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRegistryScanningConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::PutRegistryScanningConfigurationResponsePrivate
 * \brief The PutRegistryScanningConfigurationResponsePrivate class provides private implementation for PutRegistryScanningConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutRegistryScanningConfigurationResponsePrivate object with public implementation \a q.
 */
PutRegistryScanningConfigurationResponsePrivate::PutRegistryScanningConfigurationResponsePrivate(
    PutRegistryScanningConfigurationResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr PutRegistryScanningConfiguration response element from \a xml.
 */
void PutRegistryScanningConfigurationResponsePrivate::parsePutRegistryScanningConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRegistryScanningConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
