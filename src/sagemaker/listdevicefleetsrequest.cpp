// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicefleetsrequest.h"
#include "listdevicefleetsrequest_p.h"
#include "listdevicefleetsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListDeviceFleetsRequest
 * \brief The ListDeviceFleetsRequest class provides an interface for SageMaker ListDeviceFleets requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::listDeviceFleets
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceFleetsRequest::ListDeviceFleetsRequest(const ListDeviceFleetsRequest &other)
    : SageMakerRequest(new ListDeviceFleetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceFleetsRequest object.
 */
ListDeviceFleetsRequest::ListDeviceFleetsRequest()
    : SageMakerRequest(new ListDeviceFleetsRequestPrivate(SageMakerRequest::ListDeviceFleetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceFleetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceFleetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceFleetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceFleetsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListDeviceFleetsRequestPrivate
 * \brief The ListDeviceFleetsRequestPrivate class provides private implementation for ListDeviceFleetsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListDeviceFleetsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListDeviceFleetsRequestPrivate::ListDeviceFleetsRequestPrivate(
    const SageMakerRequest::Action action, ListDeviceFleetsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceFleetsRequest
 * class' copy constructor.
 */
ListDeviceFleetsRequestPrivate::ListDeviceFleetsRequestPrivate(
    const ListDeviceFleetsRequestPrivate &other, ListDeviceFleetsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
