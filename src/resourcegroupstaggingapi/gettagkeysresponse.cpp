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

#include "gettagkeysresponse.h"
#include "gettagkeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagKeysResponse
 * \brief The GetTagKeysResponse class provides an interace for ResourceGroupsTaggingAPI GetTagKeys responses.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *  <fullname>Resource Groups Tagging API</fullname>
 * 
 *  This guide describes the API operations for the resource groups
 * 
 *  tagging>
 * 
 *  A tag is a label that you assign to an AWS resource. A tag consists of a key and a value, both of which you define. For
 *  example, if you have two Amazon EC2 instances, you might assign both a tag key of "Stack." But the value of "Stack"
 *  might be "Testing" for one and "Production" for the
 * 
 *  other>
 * 
 *  Tagging can help you organize your resources and enables you to simplify resource management, access management and cost
 *  allocation.
 * 
 *  </p
 * 
 *  You can use the resource groups tagging API operations to complete the following
 * 
 *  tasks> <ul> <li>
 * 
 *  Tag and untag supported resources located in the specified region for the AWS
 * 
 *  accoun> </li> <li>
 * 
 *  Use tag-based filters to search for resources located in the specified region for the AWS
 * 
 *  accoun> </li> <li>
 * 
 *  List all existing tag keys in the specified region for the AWS
 * 
 *  accoun> </li> <li>
 * 
 *  List all existing values for the specified key in the specified region for the AWS
 * 
 *  accoun> </li> </ul>
 * 
 *  To make full use of the resource groups tagging API operations, you might need additional IAM permissions, including
 *  permission to access the resources of individual services as well as permission to view and apply tags to those
 *  resources. For more information, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-resource-groups.html">Obtaining
 *  Permissions for Resource Groups and Tag
 * 
 *  Editor</a>>
 * 
 *  You can use the Resource Groups Tagging API to tag resources for the following AWS
 * 
 *  services> <ul> <li>
 * 
 *  Alexa for Business
 * 
 *  (a4b> </li> <li>
 * 
 *  API
 * 
 *  Gatewa> </li> <li>
 * 
 *  AWS
 * 
 *  AppStrea> </li> <li>
 * 
 *  AWS
 * 
 *  AppSyn> </li> <li>
 * 
 *  Amazon
 * 
 *  Athen> </li> <li>
 * 
 *  Amazon
 * 
 *  Auror> </li> <li>
 * 
 *  AWS Certificate
 * 
 *  Manage> </li> <li>
 * 
 *  AWS Certificate Manager Private
 * 
 *  C> </li> <li>
 * 
 *  Amazon Cloud
 * 
 *  Director> </li> <li>
 * 
 *  AWS
 * 
 *  CloudFormatio> </li> <li>
 * 
 *  Amazon
 * 
 *  CloudFron> </li> <li>
 * 
 *  AWS
 * 
 *  CloudHS> </li> <li>
 * 
 *  AWS
 * 
 *  CloudTrai> </li> <li>
 * 
 *  Amazon CloudWatch (alarms
 * 
 *  only> </li> <li>
 * 
 *  Amazon CloudWatch
 * 
 *  Event> </li> <li>
 * 
 *  Amazon CloudWatch
 * 
 *  Log> </li> <li>
 * 
 *  AWS
 * 
 *  CodeBuil> </li> <li>
 * 
 *  AWS
 * 
 *  CodeSta> </li> <li>
 * 
 *  Amazon Cognito
 * 
 *  Identit> </li> <li>
 * 
 *  Amazon Cognito User
 * 
 *  Pool> </li> <li>
 * 
 *  Amazon
 * 
 *  Comprehen> </li> <li>
 * 
 *  AWS
 * 
 *  Confi> </li> <li>
 * 
 *  AWS Data
 * 
 *  Pipelin> </li> <li>
 * 
 *  AWS Database Migration
 * 
 *  Servic> </li> <li>
 * 
 *  AWS
 * 
 *  Datasyn> </li> <li>
 * 
 *  AWS Direct
 * 
 *  Connec> </li> <li>
 * 
 *  AWS Directory
 * 
 *  Servic> </li> <li>
 * 
 *  Amazon
 * 
 *  DynamoD> </li> <li>
 * 
 *  Amazon
 * 
 *  EB> </li> <li>
 * 
 *  Amazon
 * 
 *  EC> </li> <li>
 * 
 *  Amazon
 * 
 *  EC> </li> <li>
 * 
 *  Amazon
 * 
 *  EC> </li> <li>
 * 
 *  AWS Elastic
 * 
 *  Beanstal> </li> <li>
 * 
 *  Amazon Elastic File
 * 
 *  Syste> </li> <li>
 * 
 *  Elastic Load
 * 
 *  Balancin> </li> <li>
 * 
 *  Amazon
 * 
 *  ElastiCach> </li> <li>
 * 
 *  Amazon Elasticsearch
 * 
 *  Servic> </li> <li>
 * 
 *  AWS Elemental
 * 
 *  MediaLiv> </li> <li>
 * 
 *  AWS Elemental
 * 
 *  MediaPackag> </li> <li>
 * 
 *  AWS Elemental
 * 
 *  MediaTailo> </li> <li>
 * 
 *  Amazon
 * 
 *  EM> </li> <li>
 * 
 *  Amazon
 * 
 *  FS> </li> <li>
 * 
 *  Amazon
 * 
 *  Glacie> </li> <li>
 * 
 *  AWS
 * 
 *  Glu> </li> <li>
 * 
 *  Amazon
 * 
 *  Inspecto> </li> <li>
 * 
 *  AWS IoT
 * 
 *  Analytic> </li> <li>
 * 
 *  AWS IoT
 * 
 *  Cor> </li> <li>
 * 
 *  AWS IoT Device
 * 
 *  Defende> </li> <li>
 * 
 *  AWS IoT Device
 * 
 *  Managemen> </li> <li>
 * 
 *  AWS IoT
 * 
 *  Greengras> </li> <li>
 * 
 *  AWS Key Management
 * 
 *  Servic> </li> <li>
 * 
 *  Amazon
 * 
 *  Kinesi> </li> <li>
 * 
 *  Amazon Kinesis Data
 * 
 *  Analytic> </li> <li>
 * 
 *  Amazon Kinesis Data
 * 
 *  Firehos> </li> <li>
 * 
 *  AWS
 * 
 *  Lambd> </li> <li>
 * 
 *  AWS License
 * 
 *  Manage> </li> <li>
 * 
 *  Amazon Machine
 * 
 *  Learnin> </li> <li>
 * 
 *  Amazon
 * 
 *  M> </li> <li>
 * 
 *  Amazon
 * 
 *  MS> </li> <li>
 * 
 *  Amazon
 * 
 *  Neptun> </li> <li>
 * 
 *  AWS
 * 
 *  OpsWork> </li> <li>
 * 
 *  Amazon
 * 
 *  RD> </li> <li>
 * 
 *  Amazon
 * 
 *  Redshif> </li> <li>
 * 
 *  AWS Resource Access
 * 
 *  Manage> </li> <li>
 * 
 *  AWS Resource
 * 
 *  Group> </li> <li>
 * 
 *  AWS
 * 
 *  RoboMake> </li> <li>
 * 
 *  Amazon Route
 * 
 *  5> </li> <li>
 * 
 *  Amazon Route 53
 * 
 *  Resolve> </li> <li>
 * 
 *  Amazon S3 (buckets
 * 
 *  only> </li> <li>
 * 
 *  Amazon
 * 
 *  SageMake> </li> <li>
 * 
 *  AWS Secrets
 * 
 *  Manage> </li> <li>
 * 
 *  AWS Service
 * 
 *  Catalo> </li> <li>
 * 
 *  Amazon Simple Notification Service
 * 
 *  (SNS> </li> <li>
 * 
 *  Amazon Simple Queue Service
 * 
 *  (SQS> </li> <li>
 * 
 *  AWS Simple System Manager
 * 
 *  (SSM> </li> <li>
 * 
 *  AWS Step
 * 
 *  Function> </li> <li>
 * 
 *  AWS Storage
 * 
 *  Gatewa> </li> <li>
 * 
 *  AWS Transfer for
 * 
 *  SFT> </li> <li>
 * 
 *  Amazon
 * 
 *  VP> </li> <li>
 * 
 *  Amazon
 *
 * \sa ResourceGroupsTaggingAPIClient::getTagKeys
 */

/*!
 * Constructs a GetTagKeysResponse object for \a reply to \a request, with parent \a parent.
 */
GetTagKeysResponse::GetTagKeysResponse(
        const GetTagKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsTaggingAPIResponse(new GetTagKeysResponsePrivate(this), parent)
{
    setRequest(new GetTagKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTagKeysRequest * GetTagKeysResponse::request() const
{
    Q_D(const GetTagKeysResponse);
    return static_cast<const GetTagKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroupsTaggingAPI GetTagKeys \a response.
 */
void GetTagKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTagKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagKeysResponsePrivate
 * \brief The GetTagKeysResponsePrivate class provides private implementation for GetTagKeysResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a GetTagKeysResponsePrivate object with public implementation \a q.
 */
GetTagKeysResponsePrivate::GetTagKeysResponsePrivate(
    GetTagKeysResponse * const q) : ResourceGroupsTaggingAPIResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroupsTaggingAPI GetTagKeys response element from \a xml.
 */
void GetTagKeysResponsePrivate::parseGetTagKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTagKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
