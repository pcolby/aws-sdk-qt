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

#include "describeassessmenttemplatesrequest.h"
#include "describeassessmenttemplatesrequest_p.h"
#include "describeassessmenttemplatesresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::DescribeAssessmentTemplatesRequest
 *
 * \brief The DescribeAssessmentTemplatesRequest class provides an interface for Inspector DescribeAssessmentTemplates requests.
 *
 * \ingroup Inspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::describeAssessmentTemplates
 */

/*!
 * @brief  Constructs a new DescribeAssessmentTemplatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeAssessmentTemplatesRequest::DescribeAssessmentTemplatesRequest(const DescribeAssessmentTemplatesRequest &other)
    : InspectorRequest(new DescribeAssessmentTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeAssessmentTemplatesRequest object.
 */
DescribeAssessmentTemplatesRequest::DescribeAssessmentTemplatesRequest()
    : InspectorRequest(new DescribeAssessmentTemplatesRequestPrivate(InspectorRequest::DescribeAssessmentTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAssessmentTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeAssessmentTemplatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeAssessmentTemplatesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  InspectorClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAssessmentTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAssessmentTemplatesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeAssessmentTemplatesRequestPrivate
 *
 * @brief  Private implementation for DescribeAssessmentTemplatesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentTemplatesRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public DescribeAssessmentTemplatesRequest instance.
 */
DescribeAssessmentTemplatesRequestPrivate::DescribeAssessmentTemplatesRequestPrivate(
    const InspectorRequest::Action action, DescribeAssessmentTemplatesRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeAssessmentTemplatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeAssessmentTemplatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeAssessmentTemplatesRequest instance.
 */
DescribeAssessmentTemplatesRequestPrivate::DescribeAssessmentTemplatesRequestPrivate(
    const DescribeAssessmentTemplatesRequestPrivate &other, DescribeAssessmentTemplatesRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
