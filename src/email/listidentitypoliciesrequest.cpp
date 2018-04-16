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

#include "listidentitypoliciesrequest.h"
#include "listidentitypoliciesrequest_p.h"
#include "listidentitypoliciesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::ListIdentityPoliciesRequest
 *
 * \brief The ListIdentityPoliciesRequest class encapsulates SES ListIdentityPolicies requests.
 *
 * \ingroup SES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SESClient::listIdentityPolicies
 */

/*!
 * @brief  Constructs a new ListIdentityPoliciesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListIdentityPoliciesRequest::ListIdentityPoliciesRequest(const ListIdentityPoliciesRequest &other)
    : SESRequest(new ListIdentityPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListIdentityPoliciesRequest object.
 */
ListIdentityPoliciesRequest::ListIdentityPoliciesRequest()
    : SESRequest(new ListIdentityPoliciesRequestPrivate(SESRequest::ListIdentityPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListIdentityPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListIdentityPoliciesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListIdentityPoliciesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * ListIdentityPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListIdentityPoliciesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListIdentityPoliciesRequestPrivate
 *
 * @brief  Private implementation for ListIdentityPoliciesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoliciesRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public ListIdentityPoliciesRequest instance.
 */
ListIdentityPoliciesRequestPrivate::ListIdentityPoliciesRequestPrivate(
    const SESRequest::Action action, ListIdentityPoliciesRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoliciesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListIdentityPoliciesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListIdentityPoliciesRequest instance.
 */
ListIdentityPoliciesRequestPrivate::ListIdentityPoliciesRequestPrivate(
    const ListIdentityPoliciesRequestPrivate &other, ListIdentityPoliciesRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
