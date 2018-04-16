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

#include "listfieldlevelencryptionprofilesrequest.h"
#include "listfieldlevelencryptionprofilesrequest_p.h"
#include "listfieldlevelencryptionprofilesresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionProfilesRequest
 *
 * \brief The ListFieldLevelEncryptionProfilesRequest class provides an interface for CloudFront ListFieldLevelEncryptionProfiles requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listFieldLevelEncryptionProfiles
 */

/*!
 * @brief  Constructs a new ListFieldLevelEncryptionProfilesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFieldLevelEncryptionProfilesRequest::ListFieldLevelEncryptionProfilesRequest(const ListFieldLevelEncryptionProfilesRequest &other)
    : CloudFrontRequest(new ListFieldLevelEncryptionProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListFieldLevelEncryptionProfilesRequest object.
 */
ListFieldLevelEncryptionProfilesRequest::ListFieldLevelEncryptionProfilesRequest()
    : CloudFrontRequest(new ListFieldLevelEncryptionProfilesRequestPrivate(CloudFrontRequest::ListFieldLevelEncryptionProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListFieldLevelEncryptionProfilesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListFieldLevelEncryptionProfilesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFieldLevelEncryptionProfilesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFieldLevelEncryptionProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListFieldLevelEncryptionProfilesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListFieldLevelEncryptionProfilesRequestPrivate
 *
 * @brief  Private implementation for ListFieldLevelEncryptionProfilesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListFieldLevelEncryptionProfilesRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public ListFieldLevelEncryptionProfilesRequest instance.
 */
ListFieldLevelEncryptionProfilesRequestPrivate::ListFieldLevelEncryptionProfilesRequestPrivate(
    const CloudFrontRequest::Action action, ListFieldLevelEncryptionProfilesRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListFieldLevelEncryptionProfilesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFieldLevelEncryptionProfilesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFieldLevelEncryptionProfilesRequest instance.
 */
ListFieldLevelEncryptionProfilesRequestPrivate::ListFieldLevelEncryptionProfilesRequestPrivate(
    const ListFieldLevelEncryptionProfilesRequestPrivate &other, ListFieldLevelEncryptionProfilesRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
