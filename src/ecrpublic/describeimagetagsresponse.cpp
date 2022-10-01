// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimagetagsresponse.h"
#include "describeimagetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::DescribeImageTagsResponse
 * \brief The DescribeImageTagsResponse class provides an interace for EcrPublic DescribeImageTags responses.
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
 * \sa EcrPublicClient::describeImageTags
 */

/*!
 * Constructs a DescribeImageTagsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImageTagsResponse::DescribeImageTagsResponse(
        const DescribeImageTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrPublicResponse(new DescribeImageTagsResponsePrivate(this), parent)
{
    setRequest(new DescribeImageTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImageTagsRequest * DescribeImageTagsResponse::request() const
{
    Q_D(const DescribeImageTagsResponse);
    return static_cast<const DescribeImageTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EcrPublic DescribeImageTags \a response.
 */
void DescribeImageTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImageTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EcrPublic::DescribeImageTagsResponsePrivate
 * \brief The DescribeImageTagsResponsePrivate class provides private implementation for DescribeImageTagsResponse.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a DescribeImageTagsResponsePrivate object with public implementation \a q.
 */
DescribeImageTagsResponsePrivate::DescribeImageTagsResponsePrivate(
    DescribeImageTagsResponse * const q) : EcrPublicResponsePrivate(q)
{

}

/*!
 * Parses a EcrPublic DescribeImageTags response element from \a xml.
 */
void DescribeImageTagsResponsePrivate::parseDescribeImageTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EcrPublic
} // namespace QtAws
