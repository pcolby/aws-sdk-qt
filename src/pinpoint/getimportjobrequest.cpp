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

#include "getimportjobrequest.h"
#include "getimportjobrequest_p.h"
#include "getimportjobresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetImportJobRequest
 *
 * \brief The GetImportJobRequest class provides an interface for Pinpoint GetImportJob requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getImportJob
 */

/*!
 * @brief  Constructs a new GetImportJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetImportJobRequest::GetImportJobRequest(const GetImportJobRequest &other)
    : PinpointRequest(new GetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetImportJobRequest object.
 */
GetImportJobRequest::GetImportJobRequest()
    : PinpointRequest(new GetImportJobRequestPrivate(PinpointRequest::GetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetImportJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetImportJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new GetImportJobResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetImportJobRequestPrivate
 *
 * @brief  Private implementation for GetImportJobRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetImportJobRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetImportJobRequest instance.
 */
GetImportJobRequestPrivate::GetImportJobRequestPrivate(
    const PinpointRequest::Action action, GetImportJobRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetImportJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetImportJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetImportJobRequest instance.
 */
GetImportJobRequestPrivate::GetImportJobRequestPrivate(
    const GetImportJobRequestPrivate &other, GetImportJobRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
