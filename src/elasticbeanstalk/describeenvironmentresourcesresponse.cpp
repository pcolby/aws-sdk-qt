// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeenvironmentresourcesresponse.h"
#include "describeenvironmentresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::DescribeEnvironmentResourcesResponse
 * \brief The DescribeEnvironmentResourcesResponse class provides an interace for ElasticBeanstalk DescribeEnvironmentResources responses.
 *
 * \inmodule QtAwsElasticBeanstalk
 *
 *  <fullname>AWS Elastic Beanstalk</fullname>
 * 
 *  AWS Elastic Beanstalk makes it easy for you to create, deploy, and manage scalable, fault-tolerant applications running
 *  on the Amazon Web Services
 * 
 *  cloud>
 * 
 *  For more information about this product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic
 *  Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk WSDL is <a
 *  href="https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that enable you to access the API, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of region-specific endpoints that AWS Elastic Beanstalk supports, go to <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the
 *  <i>Amazon Web Services
 *
 * \sa ElasticBeanstalkClient::describeEnvironmentResources
 */

/*!
 * Constructs a DescribeEnvironmentResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEnvironmentResourcesResponse::DescribeEnvironmentResourcesResponse(
        const DescribeEnvironmentResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DescribeEnvironmentResourcesResponsePrivate(this), parent)
{
    setRequest(new DescribeEnvironmentResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEnvironmentResourcesRequest * DescribeEnvironmentResourcesResponse::request() const
{
    Q_D(const DescribeEnvironmentResourcesResponse);
    return static_cast<const DescribeEnvironmentResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticBeanstalk DescribeEnvironmentResources \a response.
 */
void DescribeEnvironmentResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEnvironmentResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticBeanstalk::DescribeEnvironmentResourcesResponsePrivate
 * \brief The DescribeEnvironmentResourcesResponsePrivate class provides private implementation for DescribeEnvironmentResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a DescribeEnvironmentResourcesResponsePrivate object with public implementation \a q.
 */
DescribeEnvironmentResourcesResponsePrivate::DescribeEnvironmentResourcesResponsePrivate(
    DescribeEnvironmentResourcesResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/*!
 * Parses a ElasticBeanstalk DescribeEnvironmentResources response element from \a xml.
 */
void DescribeEnvironmentResourcesResponsePrivate::parseDescribeEnvironmentResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEnvironmentResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
