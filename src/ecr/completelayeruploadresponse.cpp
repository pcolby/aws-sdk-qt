// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "completelayeruploadresponse.h"
#include "completelayeruploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::CompleteLayerUploadResponse
 * \brief The CompleteLayerUploadResponse class provides an interace for Ecr CompleteLayerUpload responses.
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
 * \sa EcrClient::completeLayerUpload
 */

/*!
 * Constructs a CompleteLayerUploadResponse object for \a reply to \a request, with parent \a parent.
 */
CompleteLayerUploadResponse::CompleteLayerUploadResponse(
        const CompleteLayerUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new CompleteLayerUploadResponsePrivate(this), parent)
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
 * Parses a successful Ecr CompleteLayerUpload \a response.
 */
void CompleteLayerUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CompleteLayerUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::CompleteLayerUploadResponsePrivate
 * \brief The CompleteLayerUploadResponsePrivate class provides private implementation for CompleteLayerUploadResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a CompleteLayerUploadResponsePrivate object with public implementation \a q.
 */
CompleteLayerUploadResponsePrivate::CompleteLayerUploadResponsePrivate(
    CompleteLayerUploadResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr CompleteLayerUpload response element from \a xml.
 */
void CompleteLayerUploadResponsePrivate::parseCompleteLayerUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteLayerUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
