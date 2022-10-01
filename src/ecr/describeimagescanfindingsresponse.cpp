// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimagescanfindingsresponse.h"
#include "describeimagescanfindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DescribeImageScanFindingsResponse
 * \brief The DescribeImageScanFindingsResponse class provides an interace for Ecr DescribeImageScanFindings responses.
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
 * \sa EcrClient::describeImageScanFindings
 */

/*!
 * Constructs a DescribeImageScanFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImageScanFindingsResponse::DescribeImageScanFindingsResponse(
        const DescribeImageScanFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new DescribeImageScanFindingsResponsePrivate(this), parent)
{
    setRequest(new DescribeImageScanFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImageScanFindingsRequest * DescribeImageScanFindingsResponse::request() const
{
    Q_D(const DescribeImageScanFindingsResponse);
    return static_cast<const DescribeImageScanFindingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr DescribeImageScanFindings \a response.
 */
void DescribeImageScanFindingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImageScanFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::DescribeImageScanFindingsResponsePrivate
 * \brief The DescribeImageScanFindingsResponsePrivate class provides private implementation for DescribeImageScanFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DescribeImageScanFindingsResponsePrivate object with public implementation \a q.
 */
DescribeImageScanFindingsResponsePrivate::DescribeImageScanFindingsResponsePrivate(
    DescribeImageScanFindingsResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr DescribeImageScanFindings response element from \a xml.
 */
void DescribeImageScanFindingsResponsePrivate::parseDescribeImageScanFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageScanFindingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
