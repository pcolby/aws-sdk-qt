// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putimageresponse.h"
#include "putimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::PutImageResponse
 * \brief The PutImageResponse class provides an interace for EcrPublic PutImage responses.
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
 * \sa EcrPublicClient::putImage
 */

/*!
 * Constructs a PutImageResponse object for \a reply to \a request, with parent \a parent.
 */
PutImageResponse::PutImageResponse(
        const PutImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new PutImageResponsePrivate(this), parent)
{
    setRequest(new PutImageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutImageRequest * PutImageResponse::request() const
{
    Q_D(const PutImageResponse);
    return static_cast<const PutImageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic PutImage \a response.
 */
void PutImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::PutImageResponsePrivate
 * \brief The PutImageResponsePrivate class provides private implementation for PutImageResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a PutImageResponsePrivate object with public implementation \a q.
 */
PutImageResponsePrivate::PutImageResponsePrivate(
    PutImageResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic PutImage response element from \a xml.
 */
void PutImageResponsePrivate::parsePutImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
