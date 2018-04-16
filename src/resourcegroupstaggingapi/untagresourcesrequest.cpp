/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "untagresourcesrequest.h"
#include "untagresourcesrequest_p.h"
#include "untagresourcesresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::UntagResourcesRequest
 *
 * \brief The UntagResourcesRequest class provides an interface for ResourceGroupsTaggingAPI UntagResources requests.
 *
 * \ingroup ResourceGroupsTaggingAPI
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
 *  allocation. For more information about tagging, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/tag-editor.html">Working with Tag Editor</a> and <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/resource-groups.html">Working with Resource Groups</a>.
 *  For more information about permissions you need to use the resource groups tagging APIs, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-resource-groups.html">Obtaining
 *  Permissions for Resource Groups </a> and <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 *  Permissions for Tagging
 * 
 *  </a>>
 * 
 *  You can use the resource groups tagging APIs to complete the following
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
 *  Not all resources can have tags. For a lists of resources that you can tag, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/supported-resources.html">Supported Resources</a> in the
 *  <i>AWS Resource Groups and Tag Editor User
 * 
 *  Guide</i>>
 * 
 *  To make full use of the resource groups tagging APIs, you might need additional IAM permissions, including permission to
 *  access the resources of individual services as well as permission to view and apply tags to those resources. For more
 *  information, see <a
 *  href="http://docs.aws.amazon.com/awsconsolehelpdocs/latest/gsg/obtaining-permissions-for-tagging.html">Obtaining
 *  Permissions for Tagging</a> in the <i>AWS Resource Groups and Tag Editor User
 *
 * \sa ResourceGroupsTaggingAPIClient::untagResources
 */

/*!
 * @brief  Constructs a new UntagResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UntagResourcesRequest::UntagResourcesRequest(const UntagResourcesRequest &other)
    : ResourceGroupsTaggingAPIRequest(new UntagResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UntagResourcesRequest object.
 */
UntagResourcesRequest::UntagResourcesRequest()
    : ResourceGroupsTaggingAPIRequest(new UntagResourcesRequestPrivate(ResourceGroupsTaggingAPIRequest::UntagResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourcesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UntagResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UntagResourcesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ResourceGroupsTaggingAPIClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourcesRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourcesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UntagResourcesRequestPrivate
 *
 * @brief  Private implementation for UntagResourcesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UntagResourcesRequestPrivate object.
 *
 * @param  action  ResourceGroupsTaggingAPI action being performed.
 * @param  q       Pointer to this object's public UntagResourcesRequest instance.
 */
UntagResourcesRequestPrivate::UntagResourcesRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, UntagResourcesRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UntagResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UntagResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UntagResourcesRequest instance.
 */
UntagResourcesRequestPrivate::UntagResourcesRequestPrivate(
    const UntagResourcesRequestPrivate &other, UntagResourcesRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
