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

#include "gettagkeysrequest.h"
#include "gettagkeysrequest_p.h"
#include "gettagkeysresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetTagKeysRequest
 *
 * \brief The GetTagKeysRequest class encapsulates ResourceGroupsTaggingAPI GetTagKeys requests.
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
 * \sa ResourceGroupsTaggingAPIClient::getTagKeys
 */

/*!
 * @brief  Constructs a new GetTagKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTagKeysRequest::GetTagKeysRequest(const GetTagKeysRequest &other)
    : ResourceGroupsTaggingAPIRequest(new GetTagKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetTagKeysRequest object.
 */
GetTagKeysRequest::GetTagKeysRequest()
    : ResourceGroupsTaggingAPIRequest(new GetTagKeysRequestPrivate(ResourceGroupsTaggingAPIRequest::GetTagKeysAction, this))
{

}

/*!
 * \reimp
 */
bool GetTagKeysRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetTagKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTagKeysResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ResourceGroupsTaggingAPIClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTagKeysRequest::response(QNetworkReply * const reply) const
{
    return new GetTagKeysResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetTagKeysRequestPrivate
 *
 * @brief  Private implementation for GetTagKeysRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTagKeysRequestPrivate object.
 *
 * @param  action  ResourceGroupsTaggingAPI action being performed.
 * @param  q       Pointer to this object's public GetTagKeysRequest instance.
 */
GetTagKeysRequestPrivate::GetTagKeysRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, GetTagKeysRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetTagKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTagKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTagKeysRequest instance.
 */
GetTagKeysRequestPrivate::GetTagKeysRequestPrivate(
    const GetTagKeysRequestPrivate &other, GetTagKeysRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
