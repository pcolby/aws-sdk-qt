// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchchecklayeravailabilityresponse.h"
#include "batchchecklayeravailabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::BatchCheckLayerAvailabilityResponse
 * \brief The BatchCheckLayerAvailabilityResponse class provides an interace for Ecr BatchCheckLayerAvailability responses.
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
 * \sa EcrClient::batchCheckLayerAvailability
 */

/*!
 * Constructs a BatchCheckLayerAvailabilityResponse object for \a reply to \a request, with parent \a parent.
 */
BatchCheckLayerAvailabilityResponse::BatchCheckLayerAvailabilityResponse(
        const BatchCheckLayerAvailabilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new BatchCheckLayerAvailabilityResponsePrivate(this), parent)
{
    setRequest(new BatchCheckLayerAvailabilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchCheckLayerAvailabilityRequest * BatchCheckLayerAvailabilityResponse::request() const
{
    Q_D(const BatchCheckLayerAvailabilityResponse);
    return static_cast<const BatchCheckLayerAvailabilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr BatchCheckLayerAvailability \a response.
 */
void BatchCheckLayerAvailabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchCheckLayerAvailabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::BatchCheckLayerAvailabilityResponsePrivate
 * \brief The BatchCheckLayerAvailabilityResponsePrivate class provides private implementation for BatchCheckLayerAvailabilityResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a BatchCheckLayerAvailabilityResponsePrivate object with public implementation \a q.
 */
BatchCheckLayerAvailabilityResponsePrivate::BatchCheckLayerAvailabilityResponsePrivate(
    BatchCheckLayerAvailabilityResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr BatchCheckLayerAvailability response element from \a xml.
 */
void BatchCheckLayerAvailabilityResponsePrivate::parseBatchCheckLayerAvailabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchCheckLayerAvailabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
