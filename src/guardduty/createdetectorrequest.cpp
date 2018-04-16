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

#include "createdetectorrequest.h"
#include "createdetectorrequest_p.h"
#include "createdetectorresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateDetectorRequest
 *
 * \brief The CreateDetectorRequest class provides an interface for GuardDuty CreateDetector requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::createDetector
 */

/*!
 * @brief  Constructs a new CreateDetectorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDetectorRequest::CreateDetectorRequest(const CreateDetectorRequest &other)
    : GuardDutyRequest(new CreateDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateDetectorRequest object.
 */
CreateDetectorRequest::CreateDetectorRequest()
    : GuardDutyRequest(new CreateDetectorRequestPrivate(GuardDutyRequest::CreateDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDetectorRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateDetectorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDetectorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDetectorRequest::response(QNetworkReply * const reply) const
{
    return new CreateDetectorResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateDetectorRequestPrivate
 *
 * @brief  Private implementation for CreateDetectorRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDetectorRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public CreateDetectorRequest instance.
 */
CreateDetectorRequestPrivate::CreateDetectorRequestPrivate(
    const GuardDutyRequest::Action action, CreateDetectorRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDetectorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDetectorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDetectorRequest instance.
 */
CreateDetectorRequestPrivate::CreateDetectorRequestPrivate(
    const CreateDetectorRequestPrivate &other, CreateDetectorRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
