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

#include "getdataflowgraphrequest.h"
#include "getdataflowgraphrequest_p.h"
#include "getdataflowgraphresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDataflowGraphRequest
 *
 * \brief The GetDataflowGraphRequest class provides an interface for Glue GetDataflowGraph requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDataflowGraph
 */

/*!
 * @brief  Constructs a new GetDataflowGraphRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDataflowGraphRequest::GetDataflowGraphRequest(const GetDataflowGraphRequest &other)
    : GlueRequest(new GetDataflowGraphRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetDataflowGraphRequest object.
 */
GetDataflowGraphRequest::GetDataflowGraphRequest()
    : GlueRequest(new GetDataflowGraphRequestPrivate(GlueRequest::GetDataflowGraphAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataflowGraphRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetDataflowGraphResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDataflowGraphResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataflowGraphRequest::response(QNetworkReply * const reply) const
{
    return new GetDataflowGraphResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetDataflowGraphRequestPrivate
 *
 * @brief  Private implementation for GetDataflowGraphRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetDataflowGraphRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetDataflowGraphRequest instance.
 */
GetDataflowGraphRequestPrivate::GetDataflowGraphRequestPrivate(
    const GlueRequest::Action action, GetDataflowGraphRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetDataflowGraphRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDataflowGraphRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDataflowGraphRequest instance.
 */
GetDataflowGraphRequestPrivate::GetDataflowGraphRequestPrivate(
    const GetDataflowGraphRequestPrivate &other, GetDataflowGraphRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
