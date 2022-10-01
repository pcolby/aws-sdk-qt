/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletehapgrequest.h"
#include "deletehapgrequest_p.h"
#include "deletehapgresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DeleteHapgRequest
 * \brief The DeleteHapgRequest class provides an interface for CloudHsm DeleteHapg requests.
 *
 * \inmodule QtAwsCloudHsm
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="https://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHsmClient::deleteHapg
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteHapgRequest::DeleteHapgRequest(const DeleteHapgRequest &other)
    : CloudHsmRequest(new DeleteHapgRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteHapgRequest object.
 */
DeleteHapgRequest::DeleteHapgRequest()
    : CloudHsmRequest(new DeleteHapgRequestPrivate(CloudHsmRequest::DeleteHapgAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteHapgRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteHapgResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteHapgRequest::response(QNetworkReply * const reply) const
{
    return new DeleteHapgResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::DeleteHapgRequestPrivate
 * \brief The DeleteHapgRequestPrivate class provides private implementation for DeleteHapgRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DeleteHapgRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
DeleteHapgRequestPrivate::DeleteHapgRequestPrivate(
    const CloudHsmRequest::Action action, DeleteHapgRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteHapgRequest
 * class' copy constructor.
 */
DeleteHapgRequestPrivate::DeleteHapgRequestPrivate(
    const DeleteHapgRequestPrivate &other, DeleteHapgRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
