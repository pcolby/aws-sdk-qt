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

#include "startimagescanresponse.h"
#include "startimagescanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::StartImageScanResponse
 * \brief The StartImageScanResponse class provides an interace for ECR StartImageScan responses.
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
 * Parses a successful ECR StartImageScan \a response.
 */
void StartImageScanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartImageScanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECR::StartImageScanResponsePrivate
 * \brief The StartImageScanResponsePrivate class provides private implementation for StartImageScanResponse.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a StartImageScanResponsePrivate object with public implementation \a q.
 */
StartImageScanResponsePrivate::StartImageScanResponsePrivate(
    StartImageScanResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a ECR StartImageScan response element from \a xml.
 */
void StartImageScanResponsePrivate::parseStartImageScanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImageScanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECR
} // namespace QtAws
