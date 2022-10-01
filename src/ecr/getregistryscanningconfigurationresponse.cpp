// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getregistryscanningconfigurationresponse.h"
#include "getregistryscanningconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::GetRegistryScanningConfigurationResponse
 * \brief The GetRegistryScanningConfigurationResponse class provides an interace for Ecr GetRegistryScanningConfiguration responses.
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
 * \sa EcrClient::getRegistryScanningConfiguration
 */

/*!
 * Constructs a GetRegistryScanningConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetRegistryScanningConfigurationResponse::GetRegistryScanningConfigurationResponse(
        const GetRegistryScanningConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new GetRegistryScanningConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetRegistryScanningConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRegistryScanningConfigurationRequest * GetRegistryScanningConfigurationResponse::request() const
{
    Q_D(const GetRegistryScanningConfigurationResponse);
    return static_cast<const GetRegistryScanningConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr GetRegistryScanningConfiguration \a response.
 */
void GetRegistryScanningConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRegistryScanningConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::GetRegistryScanningConfigurationResponsePrivate
 * \brief The GetRegistryScanningConfigurationResponsePrivate class provides private implementation for GetRegistryScanningConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a GetRegistryScanningConfigurationResponsePrivate object with public implementation \a q.
 */
GetRegistryScanningConfigurationResponsePrivate::GetRegistryScanningConfigurationResponsePrivate(
    GetRegistryScanningConfigurationResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr GetRegistryScanningConfiguration response element from \a xml.
 */
void GetRegistryScanningConfigurationResponsePrivate::parseGetRegistryScanningConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegistryScanningConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
