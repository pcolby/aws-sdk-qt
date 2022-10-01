// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeregistryresponse.h"
#include "describeregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::DescribeRegistryResponse
 * \brief The DescribeRegistryResponse class provides an interace for Ecr DescribeRegistry responses.
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
 * \sa EcrClient::describeRegistry
 */

/*!
 * Constructs a DescribeRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeRegistryResponse::DescribeRegistryResponse(
        const DescribeRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EcrResponse(new DescribeRegistryResponsePrivate(this), parent)
{
    setRequest(new DescribeRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeRegistryRequest * DescribeRegistryResponse::request() const
{
    Q_D(const DescribeRegistryResponse);
    return static_cast<const DescribeRegistryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ecr DescribeRegistry \a response.
 */
void DescribeRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ecr::DescribeRegistryResponsePrivate
 * \brief The DescribeRegistryResponsePrivate class provides private implementation for DescribeRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a DescribeRegistryResponsePrivate object with public implementation \a q.
 */
DescribeRegistryResponsePrivate::DescribeRegistryResponsePrivate(
    DescribeRegistryResponse * const q) : EcrResponsePrivate(q)
{

}

/*!
 * Parses a Ecr DescribeRegistry response element from \a xml.
 */
void DescribeRegistryResponsePrivate::parseDescribeRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ecr
} // namespace QtAws
