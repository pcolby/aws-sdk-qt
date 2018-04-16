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

#include "getcompliancedetailrequest.h"
#include "getcompliancedetailrequest_p.h"
#include "getcompliancedetailresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetComplianceDetailRequest
 *
 * \brief The GetComplianceDetailRequest class encapsulates FMS GetComplianceDetail requests.
 *
 * \ingroup FMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FMSClient::getComplianceDetail
 */

/*!
 * @brief  Constructs a new GetComplianceDetailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetComplianceDetailRequest::GetComplianceDetailRequest(const GetComplianceDetailRequest &other)
    : FMSRequest(new GetComplianceDetailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetComplianceDetailRequest object.
 */
GetComplianceDetailRequest::GetComplianceDetailRequest()
    : FMSRequest(new GetComplianceDetailRequestPrivate(FMSRequest::GetComplianceDetailAction, this))
{

}

/*!
 * \reimp
 */
bool GetComplianceDetailRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetComplianceDetailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetComplianceDetailResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FMSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetComplianceDetailRequest::response(QNetworkReply * const reply) const
{
    return new GetComplianceDetailResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetComplianceDetailRequestPrivate
 *
 * @brief  Private implementation for GetComplianceDetailRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetComplianceDetailRequestPrivate object.
 *
 * @param  action  FMS action being performed.
 * @param  q       Pointer to this object's public GetComplianceDetailRequest instance.
 */
GetComplianceDetailRequestPrivate::GetComplianceDetailRequestPrivate(
    const FMSRequest::Action action, GetComplianceDetailRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetComplianceDetailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetComplianceDetailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetComplianceDetailRequest instance.
 */
GetComplianceDetailRequestPrivate::GetComplianceDetailRequestPrivate(
    const GetComplianceDetailRequestPrivate &other, GetComplianceDetailRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
