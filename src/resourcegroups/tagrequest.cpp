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

#include "tagrequest.h"
#include "tagrequest_p.h"
#include "tagresponse.h"
#include "resourcegroupsrequest_p.h"

namespace QtAws {
namespace ResourceGroups {

/*!
 * \class QtAws::ResourceGroups::TagRequest
 * \brief The TagRequest class provides an interface for ResourceGroups Tag requests.
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
 * \sa ResourceGroupsClient::tag
 */

/*!
 * Constructs a copy of \a other.
 */
TagRequest::TagRequest(const TagRequest &other)
    : ResourceGroupsRequest(new TagRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagRequest object.
 */
TagRequest::TagRequest()
    : ResourceGroupsRequest(new TagRequestPrivate(ResourceGroupsRequest::TagAction, this))
{

}

/*!
 * \reimp
 */
bool TagRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagRequest::response(QNetworkReply * const reply) const
{
    return new TagResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroups::TagRequestPrivate
 * \brief The TagRequestPrivate class provides private implementation for TagRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroups
 */

/*!
 * Constructs a TagRequestPrivate object for ResourceGroups \a action,
 * with public implementation \a q.
 */
TagRequestPrivate::TagRequestPrivate(
    const ResourceGroupsRequest::Action action, TagRequest * const q)
    : ResourceGroupsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagRequest
 * class' copy constructor.
 */
TagRequestPrivate::TagRequestPrivate(
    const TagRequestPrivate &other, TagRequest * const q)
    : ResourceGroupsRequestPrivate(other, q)
{

}

} // namespace ResourceGroups
} // namespace QtAws
