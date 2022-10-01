// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststagedevicesrequest.h"
#include "liststagedevicesrequest_p.h"
#include "liststagedevicesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListStageDevicesRequest
 * \brief The ListStageDevicesRequest class provides an interface for SageMaker ListStageDevices requests.
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
 * \sa SageMakerClient::listStageDevices
 */

/*!
 * Constructs a copy of \a other.
 */
ListStageDevicesRequest::ListStageDevicesRequest(const ListStageDevicesRequest &other)
    : SageMakerRequest(new ListStageDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStageDevicesRequest object.
 */
ListStageDevicesRequest::ListStageDevicesRequest()
    : SageMakerRequest(new ListStageDevicesRequestPrivate(SageMakerRequest::ListStageDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListStageDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStageDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStageDevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListStageDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListStageDevicesRequestPrivate
 * \brief The ListStageDevicesRequestPrivate class provides private implementation for ListStageDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListStageDevicesRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListStageDevicesRequestPrivate::ListStageDevicesRequestPrivate(
    const SageMakerRequest::Action action, ListStageDevicesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStageDevicesRequest
 * class' copy constructor.
 */
ListStageDevicesRequestPrivate::ListStageDevicesRequestPrivate(
    const ListStageDevicesRequestPrivate &other, ListStageDevicesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
