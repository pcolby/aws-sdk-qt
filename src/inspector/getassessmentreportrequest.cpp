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

#include "getassessmentreportrequest.h"
#include "getassessmentreportrequest_p.h"
#include "getassessmentreportresponse.h"
#include "inspectorrequest_p.h"

namespace AWS {
namespace Inspector {

/**
 * @class  GetAssessmentReportRequest
 *
 * @brief  Implements Inspector GetAssessmentReport requests.
 *
 * @see    InspectorClient::getAssessmentReport
 */

/**
 * @brief  Constructs a new GetAssessmentReportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAssessmentReportRequest::GetAssessmentReportRequest(const GetAssessmentReportRequest &other)
    : InspectorRequest(new GetAssessmentReportRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAssessmentReportRequest object.
 */
GetAssessmentReportRequest::GetAssessmentReportRequest()
    : InspectorRequest(new GetAssessmentReportRequestPrivate(InspectorRequest::GetAssessmentReportAction, this))
{

}

bool GetAssessmentReportRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAssessmentReportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAssessmentReportResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  InspectorClient::send
 */
AwsAbstractResponse * GetAssessmentReportRequest::response(QNetworkReply * const reply) const
{
    return new GetAssessmentReportResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAssessmentReportRequestPrivate
 *
 * @brief  Private implementation for GetAssessmentReportRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAssessmentReportRequestPrivate object.
 *
 * @param  action  Inspector action being performed.
 * @param  q       Pointer to this object's public GetAssessmentReportRequest instance.
 */
GetAssessmentReportRequestPrivate::GetAssessmentReportRequestPrivate(
    const InspectorRequest::Action action, GetAssessmentReportRequest * const q)
    : GetAssessmentReportPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAssessmentReportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAssessmentReportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAssessmentReportRequest instance.
 */
GetAssessmentReportRequestPrivate::GetAssessmentReportRequestPrivate(
    const GetAssessmentReportRequestPrivate &other, GetAssessmentReportRequest * const q)
    : GetAssessmentReportPrivate(other, q)
{

}

} // namespace Inspector
} // namespace AWS
