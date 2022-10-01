// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "initiatelayeruploadresponse.h"
#include "initiatelayeruploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::InitiateLayerUploadResponse
 * \brief The InitiateLayerUploadResponse class provides an interace for EcrPublic InitiateLayerUpload responses.
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
 * \sa EcrPublicClient::initiateLayerUpload
 */

/*!
 * Constructs a InitiateLayerUploadResponse object for \a reply to \a request, with parent \a parent.
 */
InitiateLayerUploadResponse::InitiateLayerUploadResponse(
        const InitiateLayerUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new InitiateLayerUploadResponsePrivate(this), parent)
{
    setRequest(new InitiateLayerUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InitiateLayerUploadRequest * InitiateLayerUploadResponse::request() const
{
    Q_D(const InitiateLayerUploadResponse);
    return static_cast<const InitiateLayerUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic InitiateLayerUpload \a response.
 */
void InitiateLayerUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InitiateLayerUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::InitiateLayerUploadResponsePrivate
 * \brief The InitiateLayerUploadResponsePrivate class provides private implementation for InitiateLayerUploadResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a InitiateLayerUploadResponsePrivate object with public implementation \a q.
 */
InitiateLayerUploadResponsePrivate::InitiateLayerUploadResponsePrivate(
    InitiateLayerUploadResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic InitiateLayerUpload response element from \a xml.
 */
void InitiateLayerUploadResponsePrivate::parseInitiateLayerUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InitiateLayerUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
