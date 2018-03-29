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

#include "getshippinglabelrequest.h"
#include "getshippinglabelrequest_p.h"
#include "getshippinglabelresponse.h"
#include "importexportrequest_p.h"

namespace QtAws {
namespace ImportExport {

/**
 * @class  GetShippingLabelRequest
 *
 * @brief  Implements ImportExport GetShippingLabel requests.
 *
 * @see    ImportExportClient::getShippingLabel
 */

/**
 * @brief  Constructs a new GetShippingLabelRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetShippingLabelRequest::GetShippingLabelRequest(const GetShippingLabelRequest &other)
    : ImportExportRequest(new GetShippingLabelRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetShippingLabelRequest object.
 */
GetShippingLabelRequest::GetShippingLabelRequest()
    : ImportExportRequest(new GetShippingLabelRequestPrivate(ImportExportRequest::GetShippingLabelAction, this))
{

}

bool GetShippingLabelRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetShippingLabelResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetShippingLabelResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ImportExportClient::send
 */
QtAws::Core::AwsAbstractResponse * GetShippingLabelRequest::response(QNetworkReply * const reply) const
{
    return new GetShippingLabelResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetShippingLabelRequestPrivate
 *
 * @brief  Private implementation for GetShippingLabelRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetShippingLabelRequestPrivate object.
 *
 * @param  action  ImportExport action being performed.
 * @param  q       Pointer to this object's public GetShippingLabelRequest instance.
 */
GetShippingLabelRequestPrivate::GetShippingLabelRequestPrivate(
    const ImportExportRequest::Action action, GetShippingLabelRequest * const q)
    : GetShippingLabelPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetShippingLabelRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetShippingLabelRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetShippingLabelRequest instance.
 */
GetShippingLabelRequestPrivate::GetShippingLabelRequestPrivate(
    const GetShippingLabelRequestPrivate &other, GetShippingLabelRequest * const q)
    : GetShippingLabelPrivate(other, q)
{

}

} // namespace ImportExport
} // namespace QtAws
