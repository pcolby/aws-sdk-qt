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

#include "listcustomverificationemailtemplatesrequest.h"
#include "listcustomverificationemailtemplatesrequest_p.h"
#include "listcustomverificationemailtemplatesresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::ListCustomVerificationEmailTemplatesRequest
 *
 * \brief The ListCustomVerificationEmailTemplatesRequest class provides an interface for SES ListCustomVerificationEmailTemplates requests.
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
 * \sa SESClient::listCustomVerificationEmailTemplates
 */

/*!
 * @brief  Constructs a new ListCustomVerificationEmailTemplatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCustomVerificationEmailTemplatesRequest::ListCustomVerificationEmailTemplatesRequest(const ListCustomVerificationEmailTemplatesRequest &other)
    : SESRequest(new ListCustomVerificationEmailTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListCustomVerificationEmailTemplatesRequest object.
 */
ListCustomVerificationEmailTemplatesRequest::ListCustomVerificationEmailTemplatesRequest()
    : SESRequest(new ListCustomVerificationEmailTemplatesRequestPrivate(SESRequest::ListCustomVerificationEmailTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCustomVerificationEmailTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListCustomVerificationEmailTemplatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCustomVerificationEmailTemplatesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SESClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCustomVerificationEmailTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListCustomVerificationEmailTemplatesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListCustomVerificationEmailTemplatesRequestPrivate
 *
 * @brief  Private implementation for ListCustomVerificationEmailTemplatesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListCustomVerificationEmailTemplatesRequestPrivate object.
 *
 * @param  action  SES action being performed.
 * @param  q       Pointer to this object's public ListCustomVerificationEmailTemplatesRequest instance.
 */
ListCustomVerificationEmailTemplatesRequestPrivate::ListCustomVerificationEmailTemplatesRequestPrivate(
    const SESRequest::Action action, ListCustomVerificationEmailTemplatesRequest * const q)
    : SESRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListCustomVerificationEmailTemplatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCustomVerificationEmailTemplatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCustomVerificationEmailTemplatesRequest instance.
 */
ListCustomVerificationEmailTemplatesRequestPrivate::ListCustomVerificationEmailTemplatesRequestPrivate(
    const ListCustomVerificationEmailTemplatesRequestPrivate &other, ListCustomVerificationEmailTemplatesRequest * const q)
    : SESRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
