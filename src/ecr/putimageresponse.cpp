// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putimageresponse.h"
#include "putimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::PutImageResponse
 * \brief The PutImageResponse class provides an interace for Ecr PutImage responses.
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
 * \sa EcrClient::putImage
 */

/*!
 * Constructs a PutImageResponse object for \a reply to \a request, with parent \a parent.
 */
PutImageResponse::PutImageResponse(
        const PutImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new PutImageResponsePrivate(this), parent)
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
 * Parses a successful Ecr PutImage \a response.
 */
void PutImageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::PutImageResponsePrivate
 * \brief The PutImageResponsePrivate class provides private implementation for PutImageResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a PutImageResponsePrivate object with public implementation \a q.
 */
PutImageResponsePrivate::PutImageResponsePrivate(
    PutImageResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr PutImage response element from \a xml.
 */
void PutImageResponsePrivate::parsePutImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutImageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
