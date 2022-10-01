// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimagesresponse.h"
#include "describeimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DescribeImagesResponse
 * \brief The DescribeImagesResponse class provides an interace for Ecr DescribeImages responses.
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
 * \sa EcrClient::describeImages
 */

/*!
 * Constructs a DescribeImagesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImagesResponse::DescribeImagesResponse(
        const DescribeImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new DescribeImagesResponsePrivate(this), parent)
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
 * Parses a successful Ecr DescribeImages \a response.
 */
void DescribeImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::DescribeImagesResponsePrivate
 * \brief The DescribeImagesResponsePrivate class provides private implementation for DescribeImagesResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DescribeImagesResponsePrivate object with public implementation \a q.
 */
DescribeImagesResponsePrivate::DescribeImagesResponsePrivate(
    DescribeImagesResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr DescribeImages response element from \a xml.
 */
void DescribeImagesResponsePrivate::parseDescribeImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
