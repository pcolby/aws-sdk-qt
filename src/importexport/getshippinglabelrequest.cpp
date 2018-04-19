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

/*!
 * \class QtAws::ImportExport::GetShippingLabelRequest
 * \brief The GetShippingLabelRequest class provides an interface for ImportExport GetShippingLabel requests.
 *
 * \inmodule QtAwsImportExport
 *
 *  <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates transferring large amounts of data between
 *  the AWS cloud and portable storage devices that you mail to us. AWS Import/Export transfers data directly onto and off
 *  of your storage devices using Amazon's high-speed internal network and bypassing the Internet. For large data sets, AWS
 *
 * \sa ImportExportClient::getShippingLabel
 */

/*!
 * Constructs a copy of \a other.
 */
GetShippingLabelRequest::GetShippingLabelRequest(const GetShippingLabelRequest &other)
    : ImportExportRequest(new GetShippingLabelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetShippingLabelRequest object.
 */
GetShippingLabelRequest::GetShippingLabelRequest()
    : ImportExportRequest(new GetShippingLabelRequestPrivate(ImportExportRequest::GetShippingLabelAction, this))
{

}

/*!
 * \reimp
 */
bool GetShippingLabelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetShippingLabelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetShippingLabelRequest::response(QNetworkReply * const reply) const
{
    return new GetShippingLabelResponse(*this, reply);
}

/*!
 * \class QtAws::ImportExport::GetShippingLabelRequestPrivate
 * \brief The GetShippingLabelRequestPrivate class provides private implementation for GetShippingLabelRequest.
 * \internal
 *
 * \inmodule QtAwsImportExport
 */

/*!
 *
 * Constructs a GetShippingLabelRequestPrivate object for ImportExport \a action with,
 * public implementation \a q.
 */
GetShippingLabelRequestPrivate::GetShippingLabelRequestPrivate(
    const ImportExportRequest::Action action, GetShippingLabelRequest * const q)
    : ImportExportRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetShippingLabelRequest
 * class' copy constructor.
 */
GetShippingLabelRequestPrivate::GetShippingLabelRequestPrivate(
    const GetShippingLabelRequestPrivate &other, GetShippingLabelRequest * const q)
    : ImportExportRequestPrivate(other, q)
{

}

} // namespace ImportExport
} // namespace QtAws
