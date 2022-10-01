// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "uploadlayerpartresponse.h"
#include "uploadlayerpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::UploadLayerPartResponse
 * \brief The UploadLayerPartResponse class provides an interace for Ecr UploadLayerPart responses.
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
 * \sa EcrClient::uploadLayerPart
 */

/*!
 * Constructs a UploadLayerPartResponse object for \a reply to \a request, with parent \a parent.
 */
UploadLayerPartResponse::UploadLayerPartResponse(
        const UploadLayerPartRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new UploadLayerPartResponsePrivate(this), parent)
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
 * Parses a successful Ecr UploadLayerPart \a response.
 */
void UploadLayerPartResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UploadLayerPartResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::UploadLayerPartResponsePrivate
 * \brief The UploadLayerPartResponsePrivate class provides private implementation for UploadLayerPartResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a UploadLayerPartResponsePrivate object with public implementation \a q.
 */
UploadLayerPartResponsePrivate::UploadLayerPartResponsePrivate(
    UploadLayerPartResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr UploadLayerPart response element from \a xml.
 */
void UploadLayerPartResponsePrivate::parseUploadLayerPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadLayerPartResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
