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

#include "listfieldlevelencryptionconfigsrequest.h"
#include "listfieldlevelencryptionconfigsrequest_p.h"
#include "listfieldlevelencryptionconfigsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionConfigsRequest
 *
 * \brief The ListFieldLevelEncryptionConfigsRequest class encapsulates CloudFront ListFieldLevelEncryptionConfigs requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listFieldLevelEncryptionConfigs
 */

/*!
 * @brief  Constructs a new ListFieldLevelEncryptionConfigsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFieldLevelEncryptionConfigsRequest::ListFieldLevelEncryptionConfigsRequest(const ListFieldLevelEncryptionConfigsRequest &other)
    : CloudFrontRequest(new ListFieldLevelEncryptionConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListFieldLevelEncryptionConfigsRequest object.
 */
ListFieldLevelEncryptionConfigsRequest::ListFieldLevelEncryptionConfigsRequest()
    : CloudFrontRequest(new ListFieldLevelEncryptionConfigsRequestPrivate(CloudFrontRequest::ListFieldLevelEncryptionConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFieldLevelEncryptionConfigsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListFieldLevelEncryptionConfigsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFieldLevelEncryptionConfigsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFieldLevelEncryptionConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListFieldLevelEncryptionConfigsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListFieldLevelEncryptionConfigsRequestPrivate
 *
 * @brief  Private implementation for ListFieldLevelEncryptionConfigsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListFieldLevelEncryptionConfigsRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public ListFieldLevelEncryptionConfigsRequest instance.
 */
ListFieldLevelEncryptionConfigsRequestPrivate::ListFieldLevelEncryptionConfigsRequestPrivate(
    const CloudFrontRequest::Action action, ListFieldLevelEncryptionConfigsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListFieldLevelEncryptionConfigsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFieldLevelEncryptionConfigsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFieldLevelEncryptionConfigsRequest instance.
 */
ListFieldLevelEncryptionConfigsRequestPrivate::ListFieldLevelEncryptionConfigsRequestPrivate(
    const ListFieldLevelEncryptionConfigsRequestPrivate &other, ListFieldLevelEncryptionConfigsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
