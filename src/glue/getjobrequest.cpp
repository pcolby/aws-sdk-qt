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

#include "getjobrequest.h"
#include "getjobrequest_p.h"
#include "getjobresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobRequest
 *
 * \brief The GetJobRequest class provides an interface for Glue GetJob requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getJob
 */

/*!
 * @brief  Constructs a new GetJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetJobRequest::GetJobRequest(const GetJobRequest &other)
    : GlueRequest(new GetJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetJobRequest object.
 */
GetJobRequest::GetJobRequest()
    : GlueRequest(new GetJobRequestPrivate(GlueRequest::GetJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobRequest::response(QNetworkReply * const reply) const
{
    return new GetJobResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetJobRequestPrivate
 *
 * @brief  Private implementation for GetJobRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetJobRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetJobRequest instance.
 */
GetJobRequestPrivate::GetJobRequestPrivate(
    const GlueRequest::Action action, GetJobRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetJobRequest instance.
 */
GetJobRequestPrivate::GetJobRequestPrivate(
    const GetJobRequestPrivate &other, GetJobRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
