// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploadlayerpartresponse.h"
#include "uploadlayerpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::UploadLayerPartResponse
 * \brief The UploadLayerPartResponse class provides an interace for EcrPublic UploadLayerPart responses.
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
 * \sa EcrPublicClient::uploadLayerPart
 */

/*!
 * Constructs a UploadLayerPartResponse object for \a reply to \a request, with parent \a parent.
 */
UploadLayerPartResponse::UploadLayerPartResponse(
        const UploadLayerPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new UploadLayerPartResponsePrivate(this), parent)
{
    setRequest(new UploadLayerPartRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UploadLayerPartRequest * UploadLayerPartResponse::request() const
{
    Q_D(const UploadLayerPartResponse);
    return static_cast<const UploadLayerPartRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic UploadLayerPart \a response.
 */
void UploadLayerPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UploadLayerPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::UploadLayerPartResponsePrivate
 * \brief The UploadLayerPartResponsePrivate class provides private implementation for UploadLayerPartResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a UploadLayerPartResponsePrivate object with public implementation \a q.
 */
UploadLayerPartResponsePrivate::UploadLayerPartResponsePrivate(
    UploadLayerPartResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic UploadLayerPart response element from \a xml.
 */
void UploadLayerPartResponsePrivate::parseUploadLayerPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadLayerPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
