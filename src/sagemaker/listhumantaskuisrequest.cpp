// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listhumantaskuisrequest.h"
#include "listhumantaskuisrequest_p.h"
#include "listhumantaskuisresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListHumanTaskUisRequest
 * \brief The ListHumanTaskUisRequest class provides an interface for SageMaker ListHumanTaskUis requests.
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
 * \sa SageMakerClient::listHumanTaskUis
 */

/*!
 * Constructs a copy of \a other.
 */
ListHumanTaskUisRequest::ListHumanTaskUisRequest(const ListHumanTaskUisRequest &other)
    : SageMakerRequest(new ListHumanTaskUisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHumanTaskUisRequest object.
 */
ListHumanTaskUisRequest::ListHumanTaskUisRequest()
    : SageMakerRequest(new ListHumanTaskUisRequestPrivate(SageMakerRequest::ListHumanTaskUisAction, this))
{

}

/*!
 * \reimp
 */
bool ListHumanTaskUisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHumanTaskUisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHumanTaskUisRequest::response(QNetworkReply * const reply) const
{
    return new ListHumanTaskUisResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListHumanTaskUisRequestPrivate
 * \brief The ListHumanTaskUisRequestPrivate class provides private implementation for ListHumanTaskUisRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListHumanTaskUisRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListHumanTaskUisRequestPrivate::ListHumanTaskUisRequestPrivate(
    const SageMakerRequest::Action action, ListHumanTaskUisRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHumanTaskUisRequest
 * class' copy constructor.
 */
ListHumanTaskUisRequestPrivate::ListHumanTaskUisRequestPrivate(
    const ListHumanTaskUisRequestPrivate &other, ListHumanTaskUisRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
