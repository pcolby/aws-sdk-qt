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

#include "verifyemailidentityrequest.h"
#include "verifyemailidentityrequest_p.h"
#include "verifyemailidentityresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::VerifyEmailIdentityRequest
 *
 * \brief The VerifyEmailIdentityRequest class provides an interface for SES VerifyEmailIdentity requests.
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
 * \sa SESClient::verifyEmailIdentity
 */

/*!
 * @brief  Constructs a new VerifyEmailIdentityRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
VerifyEmailIdentityRequest::VerifyEmailIdentityRequest(const VerifyEmailIdentityRequest &other)
    : SESRequest(new VerifyEmailIdentityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new VerifyEmailIdentityRequest object.
 */
VerifyEmailIdentityRequest::VerifyEmailIdentityRequest()
    : SESRequest(new VerifyEmailIdentityRequestPrivate(SESRequest::VerifyEmailIdentityAction, this))
{

}

/*!
 * \reimp
 */
bool VerifyEmailIdentityRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an VerifyEmailIdentityResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An VerifyEmailIdentityResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * VerifyEmailIdentityRequest::response(QNetworkReply * const reply) const
{
    return new VerifyEmailIdentityResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  VerifyEmailIdentityRequestPrivate
 *
 * @brief  Private implementation for VerifyEmailIdentityRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new VerifyEmailIdentityRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public VerifyEmailIdentityRequest instance.
 */
VerifyEmailIdentityRequestPrivate::VerifyEmailIdentityRequestPrivate(
    const SESRequest::Action action, VerifyEmailIdentityRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new VerifyEmailIdentityRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the VerifyEmailIdentityRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public VerifyEmailIdentityRequest instance.
 */
VerifyEmailIdentityRequestPrivate::VerifyEmailIdentityRequestPrivate(
    const VerifyEmailIdentityRequestPrivate &other, VerifyEmailIdentityRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
