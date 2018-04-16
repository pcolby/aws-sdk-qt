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

#include "deleteverifiedemailaddressrequest.h"
#include "deleteverifiedemailaddressrequest_p.h"
#include "deleteverifiedemailaddressresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DeleteVerifiedEmailAddressRequest
 *
 * \brief The DeleteVerifiedEmailAddressRequest class encapsulates SES DeleteVerifiedEmailAddress requests.
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
 * \sa SESClient::deleteVerifiedEmailAddress
 */

/*!
 * @brief  Constructs a new DeleteVerifiedEmailAddressRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVerifiedEmailAddressRequest::DeleteVerifiedEmailAddressRequest(const DeleteVerifiedEmailAddressRequest &other)
    : SESRequest(new DeleteVerifiedEmailAddressRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteVerifiedEmailAddressRequest object.
 */
DeleteVerifiedEmailAddressRequest::DeleteVerifiedEmailAddressRequest()
    : SESRequest(new DeleteVerifiedEmailAddressRequestPrivate(SESRequest::DeleteVerifiedEmailAddressAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVerifiedEmailAddressRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteVerifiedEmailAddressResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVerifiedEmailAddressResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVerifiedEmailAddressRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVerifiedEmailAddressResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteVerifiedEmailAddressRequestPrivate
 *
 * @brief  Private implementation for DeleteVerifiedEmailAddressRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteVerifiedEmailAddressRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteVerifiedEmailAddressRequest instance.
 */
DeleteVerifiedEmailAddressRequestPrivate::DeleteVerifiedEmailAddressRequestPrivate(
    const SESRequest::Action action, DeleteVerifiedEmailAddressRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteVerifiedEmailAddressRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVerifiedEmailAddressRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVerifiedEmailAddressRequest instance.
 */
DeleteVerifiedEmailAddressRequestPrivate::DeleteVerifiedEmailAddressRequestPrivate(
    const DeleteVerifiedEmailAddressRequestPrivate &other, DeleteVerifiedEmailAddressRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
