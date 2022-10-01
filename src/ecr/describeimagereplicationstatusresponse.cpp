// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeimagereplicationstatusresponse.h"
#include "describeimagereplicationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DescribeImageReplicationStatusResponse
 * \brief The DescribeImageReplicationStatusResponse class provides an interace for Ecr DescribeImageReplicationStatus responses.
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
 * \sa EcrClient::describeImageReplicationStatus
 */

/*!
 * Constructs a DescribeImageReplicationStatusResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeImageReplicationStatusResponse::DescribeImageReplicationStatusResponse(
        const DescribeImageReplicationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new DescribeImageReplicationStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeImageReplicationStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeImageReplicationStatusRequest * DescribeImageReplicationStatusResponse::request() const
{
    Q_D(const DescribeImageReplicationStatusResponse);
    return static_cast<const DescribeImageReplicationStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr DescribeImageReplicationStatus \a response.
 */
void DescribeImageReplicationStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeImageReplicationStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::DescribeImageReplicationStatusResponsePrivate
 * \brief The DescribeImageReplicationStatusResponsePrivate class provides private implementation for DescribeImageReplicationStatusResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DescribeImageReplicationStatusResponsePrivate object with public implementation \a q.
 */
DescribeImageReplicationStatusResponsePrivate::DescribeImageReplicationStatusResponsePrivate(
    DescribeImageReplicationStatusResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr DescribeImageReplicationStatus response element from \a xml.
 */
void DescribeImageReplicationStatusResponsePrivate::parseDescribeImageReplicationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeImageReplicationStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
