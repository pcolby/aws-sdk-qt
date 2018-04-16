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

#include "sendcustomverificationemailrequest.h"
#include "sendcustomverificationemailrequest_p.h"
#include "sendcustomverificationemailresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SendCustomVerificationEmailRequest
 *
 * \brief The SendCustomVerificationEmailRequest class provides an interface for SES SendCustomVerificationEmail requests.
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
 * \sa SESClient::sendCustomVerificationEmail
 */

/*!
 * @brief  Constructs a new SendCustomVerificationEmailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SendCustomVerificationEmailRequest::SendCustomVerificationEmailRequest(const SendCustomVerificationEmailRequest &other)
    : SESRequest(new SendCustomVerificationEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new SendCustomVerificationEmailRequest object.
 */
SendCustomVerificationEmailRequest::SendCustomVerificationEmailRequest()
    : SESRequest(new SendCustomVerificationEmailRequestPrivate(SESRequest::SendCustomVerificationEmailAction, this))
{

}

/*!
 * \reimp
 */
bool SendCustomVerificationEmailRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an SendCustomVerificationEmailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SendCustomVerificationEmailResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * SendCustomVerificationEmailRequest::response(QNetworkReply * const reply) const
{
    return new SendCustomVerificationEmailResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  SendCustomVerificationEmailRequestPrivate
 *
 * @brief  Private implementation for SendCustomVerificationEmailRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new SendCustomVerificationEmailRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public SendCustomVerificationEmailRequest instance.
 */
SendCustomVerificationEmailRequestPrivate::SendCustomVerificationEmailRequestPrivate(
    const SESRequest::Action action, SendCustomVerificationEmailRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new SendCustomVerificationEmailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SendCustomVerificationEmailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SendCustomVerificationEmailRequest instance.
 */
SendCustomVerificationEmailRequestPrivate::SendCustomVerificationEmailRequestPrivate(
    const SendCustomVerificationEmailRequestPrivate &other, SendCustomVerificationEmailRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
