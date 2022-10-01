// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelunaclientrequest.h"
#include "deletelunaclientrequest_p.h"
#include "deletelunaclientresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::DeleteLunaClientRequest
 * \brief The DeleteLunaClientRequest class provides an interface for CloudHsm DeleteLunaClient requests.
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
 * \sa CloudHsmClient::deleteLunaClient
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLunaClientRequest::DeleteLunaClientRequest(const DeleteLunaClientRequest &other)
    : CloudHsmRequest(new DeleteLunaClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLunaClientRequest object.
 */
DeleteLunaClientRequest::DeleteLunaClientRequest()
    : CloudHsmRequest(new DeleteLunaClientRequestPrivate(CloudHsmRequest::DeleteLunaClientAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLunaClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLunaClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLunaClientRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLunaClientResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::DeleteLunaClientRequestPrivate
 * \brief The DeleteLunaClientRequestPrivate class provides private implementation for DeleteLunaClientRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a DeleteLunaClientRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
DeleteLunaClientRequestPrivate::DeleteLunaClientRequestPrivate(
    const CloudHsmRequest::Action action, DeleteLunaClientRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLunaClientRequest
 * class' copy constructor.
 */
DeleteLunaClientRequestPrivate::DeleteLunaClientRequestPrivate(
    const DeleteLunaClientRequestPrivate &other, DeleteLunaClientRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
