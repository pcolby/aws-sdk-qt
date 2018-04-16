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

#include "deletequalificationtyperequest.h"
#include "deletequalificationtyperequest_p.h"
#include "deletequalificationtyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::DeleteQualificationTypeRequest
 *
 * \brief The DeleteQualificationTypeRequest class provides an interface for MTurk DeleteQualificationType requests.
 *
 * \ingroup MTurk
 *
 *
 * \sa MTurkClient::deleteQualificationType
 */

/*!
 * @brief  Constructs a new DeleteQualificationTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteQualificationTypeRequest::DeleteQualificationTypeRequest(const DeleteQualificationTypeRequest &other)
    : MTurkRequest(new DeleteQualificationTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteQualificationTypeRequest object.
 */
DeleteQualificationTypeRequest::DeleteQualificationTypeRequest()
    : MTurkRequest(new DeleteQualificationTypeRequestPrivate(MTurkRequest::DeleteQualificationTypeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteQualificationTypeRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteQualificationTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteQualificationTypeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MTurkClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteQualificationTypeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQualificationTypeResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteQualificationTypeRequestPrivate
 *
 * @brief  Private implementation for DeleteQualificationTypeRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteQualificationTypeRequestPrivate object.
 *
 * @param  action  MTurk action being performed.
 * @param  q       Pointer to this object's public DeleteQualificationTypeRequest instance.
 */
DeleteQualificationTypeRequestPrivate::DeleteQualificationTypeRequestPrivate(
    const MTurkRequest::Action action, DeleteQualificationTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteQualificationTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteQualificationTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteQualificationTypeRequest instance.
 */
DeleteQualificationTypeRequestPrivate::DeleteQualificationTypeRequestPrivate(
    const DeleteQualificationTypeRequestPrivate &other, DeleteQualificationTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
