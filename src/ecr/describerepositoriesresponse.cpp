// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerepositoriesresponse.h"
#include "describerepositoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DescribeRepositoriesResponse
 * \brief The DescribeRepositoriesResponse class provides an interace for Ecr DescribeRepositories responses.
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
 * \sa EcrClient::describeRepositories
 */

/*!
 * Constructs a DescribeRepositoriesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRepositoriesResponse::DescribeRepositoriesResponse(
        const DescribeRepositoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new DescribeRepositoriesResponsePrivate(this), parent)
{
    setRequest(new DescribeRepositoriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRepositoriesRequest * DescribeRepositoriesResponse::request() const
{
    Q_D(const DescribeRepositoriesResponse);
    return static_cast<const DescribeRepositoriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr DescribeRepositories \a response.
 */
void DescribeRepositoriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRepositoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::DescribeRepositoriesResponsePrivate
 * \brief The DescribeRepositoriesResponsePrivate class provides private implementation for DescribeRepositoriesResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DescribeRepositoriesResponsePrivate object with public implementation \a q.
 */
DescribeRepositoriesResponsePrivate::DescribeRepositoriesResponsePrivate(
    DescribeRepositoriesResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr DescribeRepositories response element from \a xml.
 */
void DescribeRepositoriesResponsePrivate::parseDescribeRepositoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRepositoriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
