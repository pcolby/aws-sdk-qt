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

#include "putimagescanningconfigurationresponse.h"
#include "putimagescanningconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::PutImageScanningConfigurationResponse
 * \brief The PutImageScanningConfigurationResponse class provides an interace for ECR PutImageScanningConfiguration responses.
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
 * Parses a successful ECR PutImageScanningConfiguration \a response.
 */
void PutImageScanningConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutImageScanningConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::PutImageScanningConfigurationResponsePrivate
 * \brief The PutImageScanningConfigurationResponsePrivate class provides private implementation for PutImageScanningConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a PutImageScanningConfigurationResponsePrivate object with public implementation \a q.
 */
PutImageScanningConfigurationResponsePrivate::PutImageScanningConfigurationResponsePrivate(
    PutImageScanningConfigurationResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a ECR PutImageScanningConfiguration response element from \a xml.
 */
void PutImageScanningConfigurationResponsePrivate::parsePutImageScanningConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutImageScanningConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECR
} // namespace QtAws
