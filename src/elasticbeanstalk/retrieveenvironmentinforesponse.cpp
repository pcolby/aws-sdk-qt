// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "retrieveenvironmentinforesponse.h"
#include "retrieveenvironmentinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::RetrieveEnvironmentInfoResponse
 * \brief The RetrieveEnvironmentInfoResponse class provides an interace for ElasticBeanstalk RetrieveEnvironmentInfo responses.
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
 * \sa ElasticBeanstalkClient::retrieveEnvironmentInfo
 */

/*!
 * Constructs a RetrieveEnvironmentInfoResponse object for \a reply to \a request, with parent \a parent.
 */
RetrieveEnvironmentInfoResponse::RetrieveEnvironmentInfoResponse(
        const RetrieveEnvironmentInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new RetrieveEnvironmentInfoResponsePrivate(this), parent)
{
    setRequest(new RetrieveEnvironmentInfoRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RetrieveEnvironmentInfoRequest * RetrieveEnvironmentInfoResponse::request() const
{
    Q_D(const RetrieveEnvironmentInfoResponse);
    return static_cast<const RetrieveEnvironmentInfoRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticBeanstalk RetrieveEnvironmentInfo \a response.
 */
void RetrieveEnvironmentInfoResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RetrieveEnvironmentInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticBeanstalk::RetrieveEnvironmentInfoResponsePrivate
 * \brief The RetrieveEnvironmentInfoResponsePrivate class provides private implementation for RetrieveEnvironmentInfoResponse.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a RetrieveEnvironmentInfoResponsePrivate object with public implementation \a q.
 */
RetrieveEnvironmentInfoResponsePrivate::RetrieveEnvironmentInfoResponsePrivate(
    RetrieveEnvironmentInfoResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/*!
 * Parses a ElasticBeanstalk RetrieveEnvironmentInfo response element from \a xml.
 */
void RetrieveEnvironmentInfoResponsePrivate::parseRetrieveEnvironmentInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetrieveEnvironmentInfoResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
