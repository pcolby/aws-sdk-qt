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

#include "getclassifierrequest.h"
#include "getclassifierrequest_p.h"
#include "getclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetClassifierRequest
 *
 * \brief The GetClassifierRequest class encapsulates Glue GetClassifier requests.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getClassifier
 */

/*!
 * @brief  Constructs a new GetClassifierRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetClassifierRequest::GetClassifierRequest(const GetClassifierRequest &other)
    : GlueRequest(new GetClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetClassifierRequest object.
 */
GetClassifierRequest::GetClassifierRequest()
    : GlueRequest(new GetClassifierRequestPrivate(GlueRequest::GetClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool GetClassifierRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetClassifierResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetClassifierResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlueClient::send
 */
QtAws::Core::AwsAbstractResponse * GetClassifierRequest::response(QNetworkReply * const reply) const
{
    return new GetClassifierResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetClassifierRequestPrivate
 *
 * @brief  Private implementation for GetClassifierRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetClassifierRequestPrivate object.
 *
 * @param  action  Glue action being performed.
 * @param  q       Pointer to this object's public GetClassifierRequest instance.
 */
GetClassifierRequestPrivate::GetClassifierRequestPrivate(
    const GlueRequest::Action action, GetClassifierRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetClassifierRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetClassifierRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetClassifierRequest instance.
 */
GetClassifierRequestPrivate::GetClassifierRequestPrivate(
    const GetClassifierRequestPrivate &other, GetClassifierRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
