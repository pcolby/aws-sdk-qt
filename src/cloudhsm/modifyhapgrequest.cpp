// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyhapgrequest.h"
#include "modifyhapgrequest_p.h"
#include "modifyhapgresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ModifyHapgRequest
 * \brief The ModifyHapgRequest class provides an interface for CloudHsm ModifyHapg requests.
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
 * \sa CloudHsmClient::modifyHapg
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyHapgRequest::ModifyHapgRequest(const ModifyHapgRequest &other)
    : CloudHsmRequest(new ModifyHapgRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyHapgRequest object.
 */
ModifyHapgRequest::ModifyHapgRequest()
    : CloudHsmRequest(new ModifyHapgRequestPrivate(CloudHsmRequest::ModifyHapgAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyHapgRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyHapgResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyHapgRequest::response(QNetworkReply * const reply) const
{
    return new ModifyHapgResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::ModifyHapgRequestPrivate
 * \brief The ModifyHapgRequestPrivate class provides private implementation for ModifyHapgRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ModifyHapgRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
ModifyHapgRequestPrivate::ModifyHapgRequestPrivate(
    const CloudHsmRequest::Action action, ModifyHapgRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyHapgRequest
 * class' copy constructor.
 */
ModifyHapgRequestPrivate::ModifyHapgRequestPrivate(
    const ModifyHapgRequestPrivate &other, ModifyHapgRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
