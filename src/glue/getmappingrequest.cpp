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

#include "getmappingrequest.h"
#include "getmappingrequest_p.h"
#include "getmappingresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMappingRequest
 *
 * \brief The GetMappingRequest class encapsulates Glue GetMapping requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getMapping
 */

/*!
 * @brief  Constructs a new GetMappingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetMappingRequest::GetMappingRequest(const GetMappingRequest &other)
    : GlueRequest(new GetMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetMappingRequest object.
 */
GetMappingRequest::GetMappingRequest()
    : GlueRequest(new GetMappingRequestPrivate(GlueRequest::GetMappingAction, this))
{

}

/*!
 * \reimp
 */
bool GetMappingRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetMappingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetMappingResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMappingRequest::response(QNetworkReply * const reply) const
{
    return new GetMappingResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetMappingRequestPrivate
 *
 * @brief  Private implementation for GetMappingRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetMappingRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetMappingRequest instance.
 */
GetMappingRequestPrivate::GetMappingRequestPrivate(
    const GlueRequest::Action action, GetMappingRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetMappingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetMappingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetMappingRequest instance.
 */
GetMappingRequestPrivate::GetMappingRequestPrivate(
    const GetMappingRequestPrivate &other, GetMappingRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
