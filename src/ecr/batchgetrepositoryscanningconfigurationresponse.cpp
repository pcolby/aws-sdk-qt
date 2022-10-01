// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetrepositoryscanningconfigurationresponse.h"
#include "batchgetrepositoryscanningconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::BatchGetRepositoryScanningConfigurationResponse
 * \brief The BatchGetRepositoryScanningConfigurationResponse class provides an interace for Ecr BatchGetRepositoryScanningConfiguration responses.
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
 * \sa EcrClient::batchGetRepositoryScanningConfiguration
 */

/*!
 * Constructs a BatchGetRepositoryScanningConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetRepositoryScanningConfigurationResponse::BatchGetRepositoryScanningConfigurationResponse(
        const BatchGetRepositoryScanningConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new BatchGetRepositoryScanningConfigurationResponsePrivate(this), parent)
{
    setRequest(new BatchGetRepositoryScanningConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetRepositoryScanningConfigurationRequest * BatchGetRepositoryScanningConfigurationResponse::request() const
{
    Q_D(const BatchGetRepositoryScanningConfigurationResponse);
    return static_cast<const BatchGetRepositoryScanningConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr BatchGetRepositoryScanningConfiguration \a response.
 */
void BatchGetRepositoryScanningConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetRepositoryScanningConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::BatchGetRepositoryScanningConfigurationResponsePrivate
 * \brief The BatchGetRepositoryScanningConfigurationResponsePrivate class provides private implementation for BatchGetRepositoryScanningConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a BatchGetRepositoryScanningConfigurationResponsePrivate object with public implementation \a q.
 */
BatchGetRepositoryScanningConfigurationResponsePrivate::BatchGetRepositoryScanningConfigurationResponsePrivate(
    BatchGetRepositoryScanningConfigurationResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr BatchGetRepositoryScanningConfiguration response element from \a xml.
 */
void BatchGetRepositoryScanningConfigurationResponsePrivate::parseBatchGetRepositoryScanningConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetRepositoryScanningConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
