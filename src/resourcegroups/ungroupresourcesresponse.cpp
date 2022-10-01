// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "ungroupresourcesresponse.h"
#include "ungroupresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ResourceGroups {

/*!
 * \class QtAws::ResourceGroups::UngroupResourcesResponse
 * \brief The UngroupResourcesResponse class provides an interace for ResourceGroups UngroupResources responses.
 *
 * \inmodule QtAwsResourceGroups
 *
 *  <fullname>AWS Resource Groups</fullname>
 * 
 *  AWS Resource Groups lets you organize AWS resources such as Amazon EC2 instances, Amazon Relational Database Service
 *  databases, and Amazon S3 buckets into groups using criteria that you define as tags. A resource group is a collection of
 *  resources that match the resource types specified in a query, and share one or more tags or portions of tags. You can
 *  create a group of resources based on their roles in your cloud infrastructure, lifecycle stages, regions, application
 *  layers, or virtually any criteria. Resource Groups enable you to automate management tasks, such as those in AWS Systems
 *  Manager Automation documents, on tag-related resources in AWS Systems Manager. Groups of tagged resources also let you
 *  quickly view a custom console in AWS Systems Manager that shows AWS Config compliance and other monitoring data about
 *  member
 * 
 *  resources>
 * 
 *  To create a resource group, build a resource query, and specify tags that identify the criteria that members of the
 *  group have in common. Tags are key-value
 * 
 *  pairs>
 * 
 *  For more information about Resource Groups, see the <a
 *  href="https://docs.aws.amazon.com/ARG/latest/userguide/welcome.html">AWS Resource Groups User
 * 
 *  Guide</a>>
 * 
 *  AWS Resource Groups uses a REST-compliant API that you can use to perform the following types of
 * 
 *  operations> <ul> <li>
 * 
 *  Create, Read, Update, and Delete (CRUD) operations on resource groups and resource query
 * 
 *  entitie> </li> <li>
 * 
 *  Applying, editing, and removing tags from resource
 * 
 *  group> </li> <li>
 * 
 *  Resolving resource group member ARNs so they can be returned as search
 * 
 *  result> </li> <li>
 * 
 *  Getting data about resources that are members of a
 * 
 *  grou> </li> <li>
 * 
 *  Searching AWS resources based on a resource
 *
 * \sa ResourceGroupsClient::ungroupResources
 */

/*!
 * Constructs a UngroupResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
UngroupResourcesResponse::UngroupResourcesResponse(
        const UngroupResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResourceGroupsResponse(new UngroupResourcesResponsePrivate(this), parent)
{
    setRequest(new UngroupResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UngroupResourcesRequest * UngroupResourcesResponse::request() const
{
    Q_D(const UngroupResourcesResponse);
    return static_cast<const UngroupResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ResourceGroups UngroupResources \a response.
 */
void UngroupResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UngroupResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ResourceGroups::UngroupResourcesResponsePrivate
 * \brief The UngroupResourcesResponsePrivate class provides private implementation for UngroupResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsResourceGroups
 */

/*!
 * Constructs a UngroupResourcesResponsePrivate object with public implementation \a q.
 */
UngroupResourcesResponsePrivate::UngroupResourcesResponsePrivate(
    UngroupResourcesResponse * const q) : ResourceGroupsResponsePrivate(q)
{

}

/*!
 * Parses a ResourceGroups UngroupResources response element from \a xml.
 */
void UngroupResourcesResponsePrivate::parseUngroupResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UngroupResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ResourceGroups
} // namespace QtAws
