// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "unassignvolumeresponse.h"
#include "unassignvolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/*!
 * \class QtAws::OpsWorks::UnassignVolumeResponse
 * \brief The UnassignVolumeResponse class provides an interace for OpsWorks UnassignVolume responses.
 *
 * \inmodule QtAwsOpsWorks
 *
 *  <fullname>AWS OpsWorks</fullname>
 * 
 *  Welcome to the <i>AWS OpsWorks Stacks API Reference</i>. This guide provides descriptions, syntax, and usage examples
 *  for AWS OpsWorks Stacks actions and data types, including common parameters and error codes.
 * 
 *  </p
 * 
 *  AWS OpsWorks Stacks is an application management service that provides an integrated experience for overseeing the
 *  complete application lifecycle. For information about this product, go to the <a
 *  href="http://aws.amazon.com/opsworks/">AWS OpsWorks</a> details page.
 * 
 *  </p
 * 
 *  <b>SDKs and CLI</b>
 * 
 *  </p
 * 
 *  The most common way to use the AWS OpsWorks Stacks API is by using the AWS Command Line Interface (CLI) or by using one
 *  of the AWS SDKs to implement applications in your preferred language. For more information,
 * 
 *  see> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-welcome.html">AWS CLI</a>
 * 
 *  </p </li> <li>
 * 
 *  <a
 *  href="https://docs.aws.amazon.com/AWSJavaSDK/latest/javadoc/com/amazonaws/services/opsworks/AWSOpsWorksClient.html">AWS
 *  SDK for Java</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sdkfornet/latest/apidocs/html/N_Amazon_OpsWorks.htm">AWS SDK for .NET</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/aws-sdk-php-2/latest/class-Aws.OpsWorks.OpsWorksClient.html">AWS SDK for PHP 2</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/sdkforruby/api/">AWS SDK for Ruby</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/sdkforjavascript/">AWS SDK for Node.js</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.pythonboto.org/en/latest/ref/opsworks.html">AWS SDK for Python(Boto)</a>
 * 
 *  </p </li> </ul>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  AWS OpsWorks Stacks supports the following endpoints, all HTTPS. You must connect to one of the following endpoints.
 *  Stacks can only be accessed or managed within the endpoint in which they are
 * 
 *  created> <ul> <li>
 * 
 *  opsworks.us-east-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-east-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.us-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.ca-central-1.amazonaws.com (API only; not available in the AWS
 * 
 *  console> </li> <li>
 * 
 *  opsworks.eu-west-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-west-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-west-3.amazonaws.co> </li> <li>
 * 
 *  opsworks.eu-central-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-northeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-northeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-south-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-southeast-1.amazonaws.co> </li> <li>
 * 
 *  opsworks.ap-southeast-2.amazonaws.co> </li> <li>
 * 
 *  opsworks.sa-east-1.amazonaws.co> </li> </ul>
 * 
 *  <b>Chef Versions</b>
 * 
 *  </p
 * 
 *  When you call <a>CreateStack</a>, <a>CloneStack</a>, or <a>UpdateStack</a> we recommend you use the
 *  <code>ConfigurationManager</code> parameter to specify the Chef version. The recommended and default value for Linux
 *  stacks is currently 12. Windows stacks use Chef 12.2. For more information, see <a
 *  href="https://docs.aws.amazon.com/opsworks/latest/userguide/workingcookbook-chef11.html">Chef
 * 
 *  Versions</a>> <note>
 * 
 *  You can specify Chef 12, 11.10, or 11.4 for your Linux stack. We recommend migrating your existing Linux stacks to Chef
 *  12 as soon as
 *
 * \sa OpsWorksClient::unassignVolume
 */

/*!
 * Constructs a UnassignVolumeResponse object for \a reply to \a request, with parent \a parent.
 */
UnassignVolumeResponse::UnassignVolumeResponse(
        const UnassignVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new UnassignVolumeResponsePrivate(this), parent)
{
    setRequest(new UnassignVolumeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UnassignVolumeRequest * UnassignVolumeResponse::request() const
{
    Q_D(const UnassignVolumeResponse);
    return static_cast<const UnassignVolumeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful OpsWorks UnassignVolume \a response.
 */
void UnassignVolumeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UnassignVolumeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::OpsWorks::UnassignVolumeResponsePrivate
 * \brief The UnassignVolumeResponsePrivate class provides private implementation for UnassignVolumeResponse.
 * \internal
 *
 * \inmodule QtAwsOpsWorks
 */

/*!
 * Constructs a UnassignVolumeResponsePrivate object with public implementation \a q.
 */
UnassignVolumeResponsePrivate::UnassignVolumeResponsePrivate(
    UnassignVolumeResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/*!
 * Parses a OpsWorks UnassignVolume response element from \a xml.
 */
void UnassignVolumeResponsePrivate::parseUnassignVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnassignVolumeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace OpsWorks
} // namespace QtAws
