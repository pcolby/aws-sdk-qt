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

#include "deletejobrequest.h"
#include "deletejobrequest_p.h"
#include "deletejobresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteJobRequest
 *
 * \brief The DeleteJobRequest class provides an interface for Glue DeleteJob requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deleteJob
 */

/*!
 * @brief  Constructs a new DeleteJobRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteJobRequest::DeleteJobRequest(const DeleteJobRequest &other)
    : GlueRequest(new DeleteJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteJobRequest object.
 */
DeleteJobRequest::DeleteJobRequest()
    : GlueRequest(new DeleteJobRequestPrivate(GlueRequest::DeleteJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteJobRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteJobResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteJobResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJobResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteJobRequestPrivate
 *
 * @brief  Private implementation for DeleteJobRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteJobRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public DeleteJobRequest instance.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const GlueRequest::Action action, DeleteJobRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteJobRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteJobRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteJobRequest instance.
 */
DeleteJobRequestPrivate::DeleteJobRequestPrivate(
    const DeleteJobRequestPrivate &other, DeleteJobRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
