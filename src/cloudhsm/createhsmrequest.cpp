// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhsmrequest.h"
#include "createhsmrequest_p.h"
#include "createhsmresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHsm {

/*!
 * \class QtAws::CloudHsm::CreateHsmRequest
 * \brief The CreateHsmRequest class provides an interface for CloudHsm CreateHsm requests.
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
 * \sa CloudHsmClient::createHsm
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHsmRequest::CreateHsmRequest(const CreateHsmRequest &other)
    : CloudHsmRequest(new CreateHsmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHsmRequest object.
 */
CreateHsmRequest::CreateHsmRequest()
    : CloudHsmRequest(new CreateHsmRequestPrivate(CloudHsmRequest::CreateHsmAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHsmRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHsmResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHsmRequest::response(QNetworkReply * const reply) const
{
    return new CreateHsmResponse(*this, reply);
}

/*!
 * \class QtAws::CloudHsm::CreateHsmRequestPrivate
 * \brief The CreateHsmRequestPrivate class provides private implementation for CreateHsmRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsm
 */

/*!
 * Constructs a CreateHsmRequestPrivate object for CloudHsm \a action,
 * with public implementation \a q.
 */
CreateHsmRequestPrivate::CreateHsmRequestPrivate(
    const CloudHsmRequest::Action action, CreateHsmRequest * const q)
    : CloudHsmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHsmRequest
 * class' copy constructor.
 */
CreateHsmRequestPrivate::CreateHsmRequestPrivate(
    const CreateHsmRequestPrivate &other, CreateHsmRequest * const q)
    : CloudHsmRequestPrivate(other, q)
{

}

} // namespace CloudHsm
} // namespace QtAws
