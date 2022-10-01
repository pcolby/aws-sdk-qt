// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdataqualityjobdefinitionsrequest.h"
#include "listdataqualityjobdefinitionsrequest_p.h"
#include "listdataqualityjobdefinitionsresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::ListDataQualityJobDefinitionsRequest
 * \brief The ListDataQualityJobDefinitionsRequest class provides an interface for SageMaker ListDataQualityJobDefinitions requests.
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
 * \sa SageMakerClient::listDataQualityJobDefinitions
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataQualityJobDefinitionsRequest::ListDataQualityJobDefinitionsRequest(const ListDataQualityJobDefinitionsRequest &other)
    : SageMakerRequest(new ListDataQualityJobDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataQualityJobDefinitionsRequest object.
 */
ListDataQualityJobDefinitionsRequest::ListDataQualityJobDefinitionsRequest()
    : SageMakerRequest(new ListDataQualityJobDefinitionsRequestPrivate(SageMakerRequest::ListDataQualityJobDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataQualityJobDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataQualityJobDefinitionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataQualityJobDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataQualityJobDefinitionsResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::ListDataQualityJobDefinitionsRequestPrivate
 * \brief The ListDataQualityJobDefinitionsRequestPrivate class provides private implementation for ListDataQualityJobDefinitionsRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a ListDataQualityJobDefinitionsRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
ListDataQualityJobDefinitionsRequestPrivate::ListDataQualityJobDefinitionsRequestPrivate(
    const SageMakerRequest::Action action, ListDataQualityJobDefinitionsRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataQualityJobDefinitionsRequest
 * class' copy constructor.
 */
ListDataQualityJobDefinitionsRequestPrivate::ListDataQualityJobDefinitionsRequestPrivate(
    const ListDataQualityJobDefinitionsRequestPrivate &other, ListDataQualityJobDefinitionsRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
