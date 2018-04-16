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

#include "createhittyperequest.h"
#include "createhittyperequest_p.h"
#include "createhittyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITTypeRequest
 *
 * \brief The CreateHITTypeRequest class encapsulates MTurk CreateHITType requests.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::createHITType
 */

/*!
 * @brief  Constructs a new CreateHITTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateHITTypeRequest::CreateHITTypeRequest(const CreateHITTypeRequest &other)
    : MTurkRequest(new CreateHITTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateHITTypeRequest object.
 */
CreateHITTypeRequest::CreateHITTypeRequest()
    : MTurkRequest(new CreateHITTypeRequestPrivate(MTurkRequest::CreateHITTypeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHITTypeRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateHITTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateHITTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHITTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateHITTypeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateHITTypeRequestPrivate
 *
 * @brief  Private implementation for CreateHITTypeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateHITTypeRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public CreateHITTypeRequest instance.
 */
CreateHITTypeRequestPrivate::CreateHITTypeRequestPrivate(
    const MTurkRequest::Action action, CreateHITTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateHITTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateHITTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateHITTypeRequest instance.
 */
CreateHITTypeRequestPrivate::CreateHITTypeRequestPrivate(
    const CreateHITTypeRequestPrivate &other, CreateHITTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
