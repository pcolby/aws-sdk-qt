/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeimagetagsresponse.h"
#include "describeimagetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECRPublic {

/*!
 * \class QtAws::ECRPublic::DescribeImageTagsResponse
 * \brief The DescribeImageTagsResponse class provides an interace for ECRPublic DescribeImageTags responses.
 *
 * \inmodule QtAwsECRPublic
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
 * \sa ECRPublicClient::describeImageTags
 */

/*!
 * Constructs a DescribeImageTagsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImageTagsResponse::DescribeImageTagsResponse(
        const DescribeImageTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRPublicResponse(new DescribeImageTagsResponsePrivate(this), parent)
{
    setRequest(new DescribeImageTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImageTagsRequest * DescribeImageTagsResponse::request() const
{
    return static_cast<const DescribeImageTagsRequest *>(ECRPublicResponse::request());
}

/*!
 * \reimp
 * Parses a successful ECRPublic DescribeImageTags \a response.
 */
void DescribeImageTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImageTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ECRPublic::DescribeImageTagsResponsePrivate
 * \brief The DescribeImageTagsResponsePrivate class provides private implementation for DescribeImageTagsResponse.
 * \internal
 *
 * \inmodule QtAwsECRPublic
 */

/*!
 * Constructs a DescribeImageTagsResponsePrivate object with public implementation \a q.
 */
DescribeImageTagsResponsePrivate::DescribeImageTagsResponsePrivate(
    DescribeImageTagsResponse * const q) : ECRPublicResponsePrivate(q)
{

}

/*!
 * Parses a ECRPublic DescribeImageTags response element from \a xml.
 */
void DescribeImageTagsResponsePrivate::parseDescribeImageTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ECRPublic
} // namespace QtAws
