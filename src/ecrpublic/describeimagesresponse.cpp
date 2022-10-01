// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimagesresponse.h"
#include "describeimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::DescribeImagesResponse
 * \brief The DescribeImagesResponse class provides an interace for EcrPublic DescribeImages responses.
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
 * \sa EcrPublicClient::describeImages
 */

/*!
 * Constructs a DescribeImagesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImagesResponse::DescribeImagesResponse(
        const DescribeImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new DescribeImagesResponsePrivate(this), parent)
{
    setRequest(new DescribeImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImagesRequest * DescribeImagesResponse::request() const
{
    Q_D(const DescribeImagesResponse);
    return static_cast<const DescribeImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic DescribeImages \a response.
 */
void DescribeImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::DescribeImagesResponsePrivate
 * \brief The DescribeImagesResponsePrivate class provides private implementation for DescribeImagesResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a DescribeImagesResponsePrivate object with public implementation \a q.
 */
DescribeImagesResponsePrivate::DescribeImagesResponsePrivate(
    DescribeImagesResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic DescribeImages response element from \a xml.
 */
void DescribeImagesResponsePrivate::parseDescribeImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
