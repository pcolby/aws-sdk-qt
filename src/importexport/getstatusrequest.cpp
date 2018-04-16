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

#include "getstatusrequest.h"
#include "getstatusrequest_p.h"
#include "getstatusresponse.h"
#include "importexportrequest_p.h"

namespace QtAws {
namespace ImportExport {

/*!
 * \class QtAws::ImportExport::GetStatusRequest
 *
 * \brief The GetStatusRequest class encapsulates ImportExport GetStatus requests.
 *
 * \ingroup ImportExport
 *
 *  <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates transferring large amounts of data between
 *  the AWS cloud and portable storage devices that you mail to us. AWS Import/Export transfers data directly onto and off
 *  of your storage devices using Amazon's high-speed internal network and bypassing the Internet. For large data sets, AWS
 *
 * \sa ImportExportClient::getStatus
 */

/*!
 * @brief  Constructs a new GetStatusRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetStatusRequest::GetStatusRequest(const GetStatusRequest &other)
    : ImportExportRequest(new GetStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetStatusRequest object.
 */
GetStatusRequest::GetStatusRequest()
    : ImportExportRequest(new GetStatusRequestPrivate(ImportExportRequest::GetStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetStatusRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetStatusResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetStatusResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ImportExportClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetStatusResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetStatusRequestPrivate
 *
 * @brief  Private implementation for GetStatusRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetStatusRequestPrivate object.
 *
 * @param  action  ImportExport action being performed.
 * @param  q       Pointer to this object's public GetStatusRequest instance.
 */
GetStatusRequestPrivate::GetStatusRequestPrivate(
    const ImportExportRequest::Action action, GetStatusRequest * const q)
    : ImportExportRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetStatusRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetStatusRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetStatusRequest instance.
 */
GetStatusRequestPrivate::GetStatusRequestPrivate(
    const GetStatusRequestPrivate &other, GetStatusRequest * const q)
    : ImportExportRequestPrivate(other, q)
{

}

} // namespace ImportExport
} // namespace QtAws
