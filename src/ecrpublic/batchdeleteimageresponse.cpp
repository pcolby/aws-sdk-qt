// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeleteimageresponse.h"
#include "batchdeleteimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::BatchDeleteImageResponse
 * \brief The BatchDeleteImageResponse class provides an interace for EcrPublic BatchDeleteImage responses.
 *
 * \inmodule QtAwsEcrPublic
 *
 *  <fullname>Amazon Elastic Container Registry Public</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Amazon ECR provides both
 *  public and private registries to host your container images. You can use the familiar Docker CLI, or their preferred
 *  client, to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry for your Docker
 *  or Open Container Initiative (OCI) images. Amazon ECR supports public repositories with this API. For information about
 *  the Amazon ECR API for private repositories, see <a
 *  href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon Elastic Container Registry API
 *
 * \sa EcrPublicClient::batchDeleteImage
 */

/*!
 * Constructs a BatchDeleteImageResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDeleteImageResponse::BatchDeleteImageResponse(
        const BatchDeleteImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new BatchDeleteImageResponsePrivate(this), parent)
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
 * Parses a successful EcrPublic BatchDeleteImage \a response.
 */
void BatchDeleteImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDeleteImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::BatchDeleteImageResponsePrivate
 * \brief The BatchDeleteImageResponsePrivate class provides private implementation for BatchDeleteImageResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a BatchDeleteImageResponsePrivate object with public implementation \a q.
 */
BatchDeleteImageResponsePrivate::BatchDeleteImageResponsePrivate(
    BatchDeleteImageResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic BatchDeleteImage response element from \a xml.
 */
void BatchDeleteImageResponsePrivate::parseBatchDeleteImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
