// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationtemplateresponse.h"
#include "createconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::CreateConfigurationTemplateResponse
 * \brief The CreateConfigurationTemplateResponse class provides an interace for ElasticBeanstalk CreateConfigurationTemplate responses.
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
 * \sa ElasticBeanstalkClient::createConfigurationTemplate
 */

/*!
 * Constructs a CreateConfigurationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConfigurationTemplateResponse::CreateConfigurationTemplateResponse(
        const CreateConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new CreateConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConfigurationTemplateRequest * CreateConfigurationTemplateResponse::request() const
{
    Q_D(const CreateConfigurationTemplateResponse);
    return static_cast<const CreateConfigurationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElasticBeanstalk CreateConfigurationTemplate \a response.
 */
void CreateConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElasticBeanstalk::CreateConfigurationTemplateResponsePrivate
 * \brief The CreateConfigurationTemplateResponsePrivate class provides private implementation for CreateConfigurationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a CreateConfigurationTemplateResponsePrivate object with public implementation \a q.
 */
CreateConfigurationTemplateResponsePrivate::CreateConfigurationTemplateResponsePrivate(
    CreateConfigurationTemplateResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/*!
 * Parses a ElasticBeanstalk CreateConfigurationTemplate response element from \a xml.
 */
void CreateConfigurationTemplateResponsePrivate::parseCreateConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
