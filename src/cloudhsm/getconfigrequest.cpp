// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconfigrequest.h"
#include "getconfigrequest_p.h"
#include "getconfigresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::GetConfigRequest
 * \brief The GetConfigRequest class provides an interface for CloudHsm GetConfig requests.
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
 * \sa CloudHsmClient::getConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetConfigRequest::GetConfigRequest(const GetConfigRequest &other)
    : CloudHsmRequest(new GetConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConfigRequest object.
 */
GetConfigRequest::GetConfigRequest()
    : CloudHsmRequest(new GetConfigRequestPrivate(CloudHsmRequest::GetConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::GetConfigRequestPrivate
 * \brief The GetConfigRequestPrivate class provides private implementation for GetConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a GetConfigRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
GetConfigRequestPrivate::GetConfigRequestPrivate(
    const CloudHsmRequest::Action action, GetConfigRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConfigRequest
 * class' copy constructor.
 */
GetConfigRequestPrivate::GetConfigRequestPrivate(
    const GetConfigRequestPrivate &other, GetConfigRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
