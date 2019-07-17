/*
    Copyright 2013-2019 Paul Colby

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

#include "abortenvironmentupdateresponse.h"
#include "abortenvironmentupdateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::AbortEnvironmentUpdateResponse
 * \brief The AbortEnvironmentUpdateResponse class provides an interace for ElasticBeanstalk AbortEnvironmentUpdate responses.
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
 *  href="http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
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
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the
 *  <i>Amazon Web Services
 *
 * \sa ElasticBeanstalkClient::abortEnvironmentUpdate
 */

/*!
 * Constructs a AbortEnvironmentUpdateResponse object for \a reply to \a request, with parent \a parent.
 */
AbortEnvironmentUpdateResponse::AbortEnvironmentUpdateResponse(
        const AbortEnvironmentUpdateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new AbortEnvironmentUpdateResponsePrivate(this), parent)
{
    setRequest(new AbortEnvironmentUpdateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AbortEnvironmentUpdateRequest * AbortEnvironmentUpdateResponse::request() const
{
    Q_D(const AbortEnvironmentUpdateResponse);
    return static_cast<const AbortEnvironmentUpdateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticBeanstalk AbortEnvironmentUpdate \a response.
 */
void AbortEnvironmentUpdateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AbortEnvironmentUpdateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticBeanstalk::AbortEnvironmentUpdateResponsePrivate
 * \brief The AbortEnvironmentUpdateResponsePrivate class provides private implementation for AbortEnvironmentUpdateResponse.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a AbortEnvironmentUpdateResponsePrivate object with public implementation \a q.
 */
AbortEnvironmentUpdateResponsePrivate::AbortEnvironmentUpdateResponsePrivate(
    AbortEnvironmentUpdateResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/*!
 * Parses a ElasticBeanstalk AbortEnvironmentUpdate response element from \a xml.
 */
void AbortEnvironmentUpdateResponsePrivate::parseAbortEnvironmentUpdateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AbortEnvironmentUpdateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
