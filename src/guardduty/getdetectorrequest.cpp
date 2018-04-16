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

#include "getdetectorrequest.h"
#include "getdetectorrequest_p.h"
#include "getdetectorresponse.h"
#include "guarddutyrequest_p.h"

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetDetectorRequest
 *
 * \brief The GetDetectorRequest class encapsulates GuardDuty GetDetector requests.
 *
 * \ingroup GuardDuty
 *
 *
 * \sa GuardDutyClient::getDetector
 */

/*!
 * @brief  Constructs a new GetDetectorRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDetectorRequest::GetDetectorRequest(const GetDetectorRequest &other)
    : GuardDutyRequest(new GetDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetDetectorRequest object.
 */
GetDetectorRequest::GetDetectorRequest()
    : GuardDutyRequest(new GetDetectorRequestPrivate(GuardDutyRequest::GetDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool GetDetectorRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetDetectorResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDetectorResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GuardDutyClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDetectorRequest::response(QNetworkReply * const reply) const
{
    return new GetDetectorResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetDetectorRequestPrivate
 *
 * @brief  Private implementation for GetDetectorRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDetectorRequestPrivate object.
 *
 * @param  action  GuardDuty action being performed.
 * @param  q       Pointer to this object's public GetDetectorRequest instance.
 */
GetDetectorRequestPrivate::GetDetectorRequestPrivate(
    const GuardDutyRequest::Action action, GetDetectorRequest * const q)
    : GuardDutyRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetDetectorRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDetectorRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDetectorRequest instance.
 */
GetDetectorRequestPrivate::GetDetectorRequestPrivate(
    const GetDetectorRequestPrivate &other, GetDetectorRequest * const q)
    : GuardDutyRequestPrivate(other, q)
{

}

} // namespace GuardDuty
} // namespace QtAws
