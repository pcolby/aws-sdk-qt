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

#include "batchchecklayeravailabilityresponse.h"
#include "batchchecklayeravailabilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::BatchCheckLayerAvailabilityResponse
 * \brief The BatchCheckLayerAvailabilityResponse class provides an interace for ECR BatchCheckLayerAvailability responses.
 *
 * \inmodule QtAwsECR
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
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
    return static_cast<const BatchCheckLayerAvailabilityRequest *>(EcrResponse::request());
}

/*!
 * \reimp
 * Parses a successful ECR BatchCheckLayerAvailability \a response.
 */
void BatchCheckLayerAvailabilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchCheckLayerAvailabilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::BatchCheckLayerAvailabilityResponsePrivate
 * \brief The BatchCheckLayerAvailabilityResponsePrivate class provides private implementation for BatchCheckLayerAvailabilityResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a BatchCheckLayerAvailabilityResponsePrivate object with public implementation \a q.
 */
BatchCheckLayerAvailabilityResponsePrivate::BatchCheckLayerAvailabilityResponsePrivate(
    BatchCheckLayerAvailabilityResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a ECR BatchCheckLayerAvailability response element from \a xml.
 */
void BatchCheckLayerAvailabilityResponsePrivate::parseBatchCheckLayerAvailabilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchCheckLayerAvailabilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECR
} // namespace QtAws
