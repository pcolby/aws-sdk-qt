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

#include "listuserimportjobsrequest.h"
#include "listuserimportjobsrequest_p.h"
#include "listuserimportjobsresponse.h"
#include "cognitoidentityproviderrequest_p.h"

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::ListUserImportJobsRequest
 *
 * \brief The ListUserImportJobsRequest class provides an interface for CognitoIdentityProvider ListUserImportJobs requests.
 *
 * \ingroup CognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::listUserImportJobs
 */

/*!
 * @brief  Constructs a new ListUserImportJobsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListUserImportJobsRequest::ListUserImportJobsRequest(const ListUserImportJobsRequest &other)
    : CognitoIdentityProviderRequest(new ListUserImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListUserImportJobsRequest object.
 */
ListUserImportJobsRequest::ListUserImportJobsRequest()
    : CognitoIdentityProviderRequest(new ListUserImportJobsRequestPrivate(CognitoIdentityProviderRequest::ListUserImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListUserImportJobsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListUserImportJobsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CognitoIdentityProviderClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserImportJobsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListUserImportJobsRequestPrivate
 *
 * @brief  Private implementation for ListUserImportJobsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListUserImportJobsRequestPrivate object.
 *
 * @param  action  CognitoIdentityProvider action being performed.
 * @param  q       Pointer to this object's public ListUserImportJobsRequest instance.
 */
ListUserImportJobsRequestPrivate::ListUserImportJobsRequestPrivate(
    const CognitoIdentityProviderRequest::Action action, ListUserImportJobsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListUserImportJobsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListUserImportJobsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListUserImportJobsRequest instance.
 */
ListUserImportJobsRequestPrivate::ListUserImportJobsRequestPrivate(
    const ListUserImportJobsRequestPrivate &other, ListUserImportJobsRequest * const q)
    : CognitoIdentityProviderRequestPrivate(other, q)
{

}

} // namespace CognitoIdentityProvider
} // namespace QtAws
