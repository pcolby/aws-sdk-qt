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

#include "addpermissionrequest.h"
#include "addpermissionrequest_p.h"
#include "addpermissionresponse.h"
#include "lambdarequest_p.h"

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::AddPermissionRequest
 *
 * \brief The AddPermissionRequest class provides an interface for Lambda AddPermission requests.
 *
 * \ingroup Lambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 *  information about how the service works, see <a
 *  href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::addPermission
 */

/*!
 * @brief  Constructs a new AddPermissionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddPermissionRequest::AddPermissionRequest(const AddPermissionRequest &other)
    : LambdaRequest(new AddPermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AddPermissionRequest object.
 */
AddPermissionRequest::AddPermissionRequest()
    : LambdaRequest(new AddPermissionRequestPrivate(LambdaRequest::AddPermissionAction, this))
{

}

/*!
 * \reimp
 */
bool AddPermissionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AddPermissionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddPermissionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LambdaClient::send
 */
QtAws::Core::AwsAbstractResponse * AddPermissionRequest::response(QNetworkReply * const reply) const
{
    return new AddPermissionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AddPermissionRequestPrivate
 *
 * @brief  Private implementation for AddPermissionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AddPermissionRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public AddPermissionRequest instance.
 */
AddPermissionRequestPrivate::AddPermissionRequestPrivate(
    const LambdaRequest::Action action, AddPermissionRequest * const q)
    : LambdaRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AddPermissionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddPermissionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddPermissionRequest instance.
 */
AddPermissionRequestPrivate::AddPermissionRequestPrivate(
    const AddPermissionRequestPrivate &other, AddPermissionRequest * const q)
    : LambdaRequestPrivate(other, q)
{

}

} // namespace Lambda
} // namespace QtAws
