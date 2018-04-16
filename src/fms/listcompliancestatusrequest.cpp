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

#include "listcompliancestatusrequest.h"
#include "listcompliancestatusrequest_p.h"
#include "listcompliancestatusresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::ListComplianceStatusRequest
 *
 * \brief The ListComplianceStatusRequest class encapsulates FMS ListComplianceStatus requests.
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
 * \sa FMSClient::listComplianceStatus
 */

/*!
 * @brief  Constructs a new ListComplianceStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListComplianceStatusRequest::ListComplianceStatusRequest(const ListComplianceStatusRequest &other)
    : FMSRequest(new ListComplianceStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListComplianceStatusRequest object.
 */
ListComplianceStatusRequest::ListComplianceStatusRequest()
    : FMSRequest(new ListComplianceStatusRequestPrivate(FMSRequest::ListComplianceStatusAction, this))
{

}

/*!
 * \reimp
 */
bool ListComplianceStatusRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListComplianceStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListComplianceStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  FMSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComplianceStatusRequest::response(QNetworkReply * const reply) const
{
    return new ListComplianceStatusResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListComplianceStatusRequestPrivate
 *
 * @brief  Private implementation for ListComplianceStatusRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListComplianceStatusRequestPrivate object.
 *
 * @param  action  FMS action being performed.
 * @param  q       Pointer to this object's public ListComplianceStatusRequest instance.
 */
ListComplianceStatusRequestPrivate::ListComplianceStatusRequestPrivate(
    const FMSRequest::Action action, ListComplianceStatusRequest * const q)
    : FMSRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListComplianceStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListComplianceStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListComplianceStatusRequest instance.
 */
ListComplianceStatusRequestPrivate::ListComplianceStatusRequestPrivate(
    const ListComplianceStatusRequestPrivate &other, ListComplianceStatusRequest * const q)
    : FMSRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
