// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "completelayeruploadresponse.h"
#include "completelayeruploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::CompleteLayerUploadResponse
 * \brief The CompleteLayerUploadResponse class provides an interace for EcrPublic CompleteLayerUpload responses.
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
 * \sa EcrPublicClient::completeLayerUpload
 */

/*!
 * Constructs a CompleteLayerUploadResponse object for \a reply to \a request, with parent \a parent.
 */
CompleteLayerUploadResponse::CompleteLayerUploadResponse(
        const CompleteLayerUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new CompleteLayerUploadResponsePrivate(this), parent)
{
    setRequest(new CompleteLayerUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CompleteLayerUploadRequest * CompleteLayerUploadResponse::request() const
{
    Q_D(const CompleteLayerUploadResponse);
    return static_cast<const CompleteLayerUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic CompleteLayerUpload \a response.
 */
void CompleteLayerUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CompleteLayerUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::CompleteLayerUploadResponsePrivate
 * \brief The CompleteLayerUploadResponsePrivate class provides private implementation for CompleteLayerUploadResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a CompleteLayerUploadResponsePrivate object with public implementation \a q.
 */
CompleteLayerUploadResponsePrivate::CompleteLayerUploadResponsePrivate(
    CompleteLayerUploadResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic CompleteLayerUpload response element from \a xml.
 */
void CompleteLayerUploadResponsePrivate::parseCompleteLayerUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteLayerUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
