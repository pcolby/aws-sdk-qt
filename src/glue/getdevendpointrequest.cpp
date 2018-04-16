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

#include "getdevendpointrequest.h"
#include "getdevendpointrequest_p.h"
#include "getdevendpointresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDevEndpointRequest
 *
 * \brief The GetDevEndpointRequest class encapsulates Glue GetDevEndpoint requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDevEndpoint
 */

/*!
 * @brief  Constructs a new GetDevEndpointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDevEndpointRequest::GetDevEndpointRequest(const GetDevEndpointRequest &other)
    : GlueRequest(new GetDevEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetDevEndpointRequest object.
 */
GetDevEndpointRequest::GetDevEndpointRequest()
    : GlueRequest(new GetDevEndpointRequestPrivate(GlueRequest::GetDevEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetDevEndpointRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetDevEndpointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDevEndpointResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDevEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetDevEndpointResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetDevEndpointRequestPrivate
 *
 * @brief  Private implementation for GetDevEndpointRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDevEndpointRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetDevEndpointRequest instance.
 */
GetDevEndpointRequestPrivate::GetDevEndpointRequestPrivate(
    const GlueRequest::Action action, GetDevEndpointRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetDevEndpointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDevEndpointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDevEndpointRequest instance.
 */
GetDevEndpointRequestPrivate::GetDevEndpointRequestPrivate(
    const GetDevEndpointRequestPrivate &other, GetDevEndpointRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
