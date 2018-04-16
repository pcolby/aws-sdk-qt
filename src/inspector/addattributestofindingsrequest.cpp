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

#include "addattributestofindingsrequest.h"
#include "addattributestofindingsrequest_p.h"
#include "addattributestofindingsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::AddAttributesToFindingsRequest
 *
 * \brief The AddAttributesToFindingsRequest class encapsulates Inspector AddAttributesToFindings requests.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::addAttributesToFindings
 */

/*!
 * @brief  Constructs a new AddAttributesToFindingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddAttributesToFindingsRequest::AddAttributesToFindingsRequest(const AddAttributesToFindingsRequest &other)
    : InspectorRequest(new AddAttributesToFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new AddAttributesToFindingsRequest object.
 */
AddAttributesToFindingsRequest::AddAttributesToFindingsRequest()
    : InspectorRequest(new AddAttributesToFindingsRequestPrivate(InspectorRequest::AddAttributesToFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool AddAttributesToFindingsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an AddAttributesToFindingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddAttributesToFindingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * AddAttributesToFindingsRequest::response(QNetworkReply * const reply) const
{
    return new AddAttributesToFindingsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  AddAttributesToFindingsRequestPrivate
 *
 * @brief  Private implementation for AddAttributesToFindingsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new AddAttributesToFindingsRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public AddAttributesToFindingsRequest instance.
 */
AddAttributesToFindingsRequestPrivate::AddAttributesToFindingsRequestPrivate(
    const InspectorRequest::Action action, AddAttributesToFindingsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new AddAttributesToFindingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddAttributesToFindingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddAttributesToFindingsRequest instance.
 */
AddAttributesToFindingsRequestPrivate::AddAttributesToFindingsRequestPrivate(
    const AddAttributesToFindingsRequestPrivate &other, AddAttributesToFindingsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
