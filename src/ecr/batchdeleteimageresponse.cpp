// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeleteimageresponse.h"
#include "batchdeleteimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::BatchDeleteImageResponse
 * \brief The BatchDeleteImageResponse class provides an interace for Ecr BatchDeleteImage responses.
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
 * \sa EcrClient::batchDeleteImage
 */

/*!
 * Constructs a BatchDeleteImageResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteImageResponse::BatchDeleteImageResponse(
        const BatchDeleteImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new BatchDeleteImageResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDeleteImageRequest * BatchDeleteImageResponse::request() const
{
    Q_D(const BatchDeleteImageResponse);
    return static_cast<const BatchDeleteImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr BatchDeleteImage \a response.
 */
void BatchDeleteImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::BatchDeleteImageResponsePrivate
 * \brief The BatchDeleteImageResponsePrivate class provides private implementation for BatchDeleteImageResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a BatchDeleteImageResponsePrivate object with public implementation \a q.
 */
BatchDeleteImageResponsePrivate::BatchDeleteImageResponsePrivate(
    BatchDeleteImageResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr BatchDeleteImage response element from \a xml.
 */
void BatchDeleteImageResponsePrivate::parseBatchDeleteImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
