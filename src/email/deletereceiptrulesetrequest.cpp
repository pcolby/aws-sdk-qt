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

#include "deletereceiptrulesetrequest.h"
#include "deletereceiptrulesetrequest_p.h"
#include "deletereceiptrulesetresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::DeleteReceiptRuleSetRequest
 *
 * \brief The DeleteReceiptRuleSetRequest class provides an interface for SES DeleteReceiptRuleSet requests.
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
 * \sa SESClient::deleteReceiptRuleSet
 */

/*!
 * @brief  Constructs a new DeleteReceiptRuleSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteReceiptRuleSetRequest::DeleteReceiptRuleSetRequest(const DeleteReceiptRuleSetRequest &other)
    : SESRequest(new DeleteReceiptRuleSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteReceiptRuleSetRequest object.
 */
DeleteReceiptRuleSetRequest::DeleteReceiptRuleSetRequest()
    : SESRequest(new DeleteReceiptRuleSetRequestPrivate(SESRequest::DeleteReceiptRuleSetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReceiptRuleSetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteReceiptRuleSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteReceiptRuleSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReceiptRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReceiptRuleSetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteReceiptRuleSetRequestPrivate
 *
 * @brief  Private implementation for DeleteReceiptRuleSetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteReceiptRuleSetRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public DeleteReceiptRuleSetRequest instance.
 */
DeleteReceiptRuleSetRequestPrivate::DeleteReceiptRuleSetRequestPrivate(
    const SESRequest::Action action, DeleteReceiptRuleSetRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteReceiptRuleSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteReceiptRuleSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteReceiptRuleSetRequest instance.
 */
DeleteReceiptRuleSetRequestPrivate::DeleteReceiptRuleSetRequestPrivate(
    const DeleteReceiptRuleSetRequestPrivate &other, DeleteReceiptRuleSetRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
