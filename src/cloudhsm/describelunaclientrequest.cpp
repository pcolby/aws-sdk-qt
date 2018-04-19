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

#include "describelunaclientrequest.h"
#include "describelunaclientrequest_p.h"
#include "describelunaclientresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::DescribeLunaClientRequest
 * \brief The DescribeLunaClientRequest class provides an interface for CloudHSM DescribeLunaClient requests.
 *
 * \inmodule QtAwsCloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::describeLunaClient
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLunaClientRequest::DescribeLunaClientRequest(const DescribeLunaClientRequest &other)
    : CloudHSMRequest(new DescribeLunaClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLunaClientRequest object.
 */
DescribeLunaClientRequest::DescribeLunaClientRequest()
    : CloudHSMRequest(new DescribeLunaClientRequestPrivate(CloudHSMRequest::DescribeLunaClientAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLunaClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLunaClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLunaClientRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLunaClientResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHSM::DescribeLunaClientRequestPrivate
 * \brief The DescribeLunaClientRequestPrivate class provides private implementation for DescribeLunaClientRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a DescribeLunaClientRequestPrivate object for CloudHSM \a action,
 * with public implementation \a q.
 */
DescribeLunaClientRequestPrivate::DescribeLunaClientRequestPrivate(
    const CloudHSMRequest::Action action, DescribeLunaClientRequest * const q)
    : CloudHSMRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLunaClientRequest
 * class' copy constructor.
 */
DescribeLunaClientRequestPrivate::DescribeLunaClientRequestPrivate(
    const DescribeLunaClientRequestPrivate &other, DescribeLunaClientRequest * const q)
    : CloudHSMRequestPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
