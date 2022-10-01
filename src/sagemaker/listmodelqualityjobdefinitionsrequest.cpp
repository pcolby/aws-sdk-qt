// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmodelqualityjobdefinitionsrequest.h"
#include "listmodelqualityjobdefinitionsrequest_p.h"
#include "listmodelqualityjobdefinitionsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListModelQualityJobDefinitionsRequest
 * \brief The ListModelQualityJobDefinitionsRequest class provides an interface for SageMaker ListModelQualityJobDefinitions requests.
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
 * \sa SageMakerClient::listModelQualityJobDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListModelQualityJobDefinitionsRequest::ListModelQualityJobDefinitionsRequest(const ListModelQualityJobDefinitionsRequest &other)
    : SageMakerRequest(new ListModelQualityJobDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListModelQualityJobDefinitionsRequest object.
 */
ListModelQualityJobDefinitionsRequest::ListModelQualityJobDefinitionsRequest()
    : SageMakerRequest(new ListModelQualityJobDefinitionsRequestPrivate(SageMakerRequest::ListModelQualityJobDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListModelQualityJobDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListModelQualityJobDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListModelQualityJobDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListModelQualityJobDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListModelQualityJobDefinitionsRequestPrivate
 * \brief The ListModelQualityJobDefinitionsRequestPrivate class provides private implementation for ListModelQualityJobDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListModelQualityJobDefinitionsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListModelQualityJobDefinitionsRequestPrivate::ListModelQualityJobDefinitionsRequestPrivate(
    const SageMakerRequest::Action action, ListModelQualityJobDefinitionsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListModelQualityJobDefinitionsRequest
 * class' copy constructor.
 */
ListModelQualityJobDefinitionsRequestPrivate::ListModelQualityJobDefinitionsRequestPrivate(
    const ListModelQualityJobDefinitionsRequestPrivate &other, ListModelQualityJobDefinitionsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
