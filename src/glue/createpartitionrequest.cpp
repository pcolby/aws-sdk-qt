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

#include "createpartitionrequest.h"
#include "createpartitionrequest_p.h"
#include "createpartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreatePartitionRequest
 *
 * \brief The CreatePartitionRequest class provides an interface for Glue CreatePartition requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createPartition
 */

/*!
 * @brief  Constructs a new CreatePartitionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePartitionRequest::CreatePartitionRequest(const CreatePartitionRequest &other)
    : GlueRequest(new CreatePartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreatePartitionRequest object.
 */
CreatePartitionRequest::CreatePartitionRequest()
    : GlueRequest(new CreatePartitionRequestPrivate(GlueRequest::CreatePartitionAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePartitionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreatePartitionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePartitionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePartitionRequest::response(QNetworkReply * const reply) const
{
    return new CreatePartitionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreatePartitionRequestPrivate
 *
 * @brief  Private implementation for CreatePartitionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreatePartitionRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public CreatePartitionRequest instance.
 */
CreatePartitionRequestPrivate::CreatePartitionRequestPrivate(
    const GlueRequest::Action action, CreatePartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreatePartitionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePartitionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePartitionRequest instance.
 */
CreatePartitionRequestPrivate::CreatePartitionRequestPrivate(
    const CreatePartitionRequestPrivate &other, CreatePartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
