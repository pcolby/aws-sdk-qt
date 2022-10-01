// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifylunaclientrequest.h"
#include "modifylunaclientrequest_p.h"
#include "modifylunaclientresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::ModifyLunaClientRequest
 * \brief The ModifyLunaClientRequest class provides an interface for CloudHsm ModifyLunaClient requests.
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
 * \sa CloudHsmClient::modifyLunaClient
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyLunaClientRequest::ModifyLunaClientRequest(const ModifyLunaClientRequest &other)
    : CloudHsmRequest(new ModifyLunaClientRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyLunaClientRequest object.
 */
ModifyLunaClientRequest::ModifyLunaClientRequest()
    : CloudHsmRequest(new ModifyLunaClientRequestPrivate(CloudHsmRequest::ModifyLunaClientAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyLunaClientRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyLunaClientResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyLunaClientRequest::response(QNetworkReply * const reply) const
{
    return new ModifyLunaClientResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::ModifyLunaClientRequestPrivate
 * \brief The ModifyLunaClientRequestPrivate class provides private implementation for ModifyLunaClientRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a ModifyLunaClientRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
ModifyLunaClientRequestPrivate::ModifyLunaClientRequestPrivate(
    const CloudHsmRequest::Action action, ModifyLunaClientRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyLunaClientRequest
 * class' copy constructor.
 */
ModifyLunaClientRequestPrivate::ModifyLunaClientRequestPrivate(
    const ModifyLunaClientRequestPrivate &other, ModifyLunaClientRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
