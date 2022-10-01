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

#include "batchgetimageresponse.h"
#include "batchgetimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::BatchGetImageResponse
 * \brief The BatchGetImageResponse class provides an interace for Ecr BatchGetImage responses.
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
 * \sa EcrClient::batchGetImage
 */

/*!
 * Constructs a BatchGetImageResponse object for \a reply to \a request, with parent \a parent.
 */
BatchGetImageResponse::BatchGetImageResponse(
        const BatchGetImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new BatchGetImageResponsePrivate(this), parent)
{
    setRequest(new BatchGetImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchGetImageRequest * BatchGetImageResponse::request() const
{
    Q_D(const BatchGetImageResponse);
    return static_cast<const BatchGetImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr BatchGetImage \a response.
 */
void BatchGetImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchGetImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::BatchGetImageResponsePrivate
 * \brief The BatchGetImageResponsePrivate class provides private implementation for BatchGetImageResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a BatchGetImageResponsePrivate object with public implementation \a q.
 */
BatchGetImageResponsePrivate::BatchGetImageResponsePrivate(
    BatchGetImageResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr BatchGetImage response element from \a xml.
 */
void BatchGetImageResponsePrivate::parseBatchGetImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
