// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhsmrequest.h"
#include "createhsmrequest_p.h"
#include "createhsmresponse.h"
#include "cloudhsmv2request_p.h"

namespace QtAws {
namespace CloudHsmV2 {

/*!
 * \class QtAws::CloudHsmV2::CreateHsmRequest
 * \brief The CreateHsmRequest class provides an interface for CloudHsmV2 CreateHsm requests.
 *
 * \inmodule QtAwsCloudHsmV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="https://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHsmV2Client::createHsm
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHsmRequest::CreateHsmRequest(const CreateHsmRequest &other)
    : CloudHsmV2Request(new CreateHsmRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHsmRequest object.
 */
CreateHsmRequest::CreateHsmRequest()
    : CloudHsmV2Request(new CreateHsmRequestPrivate(CloudHsmV2Request::CreateHsmAction, this))
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
 * \class QtAws::CloudHsmV2::CreateHsmRequestPrivate
 * \brief The CreateHsmRequestPrivate class provides private implementation for CreateHsmRequest.
 * \internal
 *
 * \inmodule QtAwsCloudHsmV2
 */

/*!
 * Constructs a CreateHsmRequestPrivate object for CloudHsmV2 \a action,
 * with public implementation \a q.
 */
CreateHsmRequestPrivate::CreateHsmRequestPrivate(
    const CloudHsmV2Request::Action action, CreateHsmRequest * const q)
    : CloudHsmV2RequestPrivate(action, q)
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
    : CloudHsmV2RequestPrivate(other, q)
{

}

} // namespace CloudHsmV2
} // namespace QtAws
