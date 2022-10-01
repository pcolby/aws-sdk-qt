// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsagemakerservicecatalogportfoliostatusrequest.h"
#include "getsagemakerservicecatalogportfoliostatusrequest_p.h"
#include "getsagemakerservicecatalogportfoliostatusresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::GetSagemakerServicecatalogPortfolioStatusRequest
 * \brief The GetSagemakerServicecatalogPortfolioStatusRequest class provides an interface for SageMaker GetSagemakerServicecatalogPortfolioStatus requests.
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
 * \sa SageMakerClient::getSagemakerServicecatalogPortfolioStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetSagemakerServicecatalogPortfolioStatusRequest::GetSagemakerServicecatalogPortfolioStatusRequest(const GetSagemakerServicecatalogPortfolioStatusRequest &other)
    : SageMakerRequest(new GetSagemakerServicecatalogPortfolioStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSagemakerServicecatalogPortfolioStatusRequest object.
 */
GetSagemakerServicecatalogPortfolioStatusRequest::GetSagemakerServicecatalogPortfolioStatusRequest()
    : SageMakerRequest(new GetSagemakerServicecatalogPortfolioStatusRequestPrivate(SageMakerRequest::GetSagemakerServicecatalogPortfolioStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetSagemakerServicecatalogPortfolioStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSagemakerServicecatalogPortfolioStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSagemakerServicecatalogPortfolioStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetSagemakerServicecatalogPortfolioStatusResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::GetSagemakerServicecatalogPortfolioStatusRequestPrivate
 * \brief The GetSagemakerServicecatalogPortfolioStatusRequestPrivate class provides private implementation for GetSagemakerServicecatalogPortfolioStatusRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a GetSagemakerServicecatalogPortfolioStatusRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
GetSagemakerServicecatalogPortfolioStatusRequestPrivate::GetSagemakerServicecatalogPortfolioStatusRequestPrivate(
    const SageMakerRequest::Action action, GetSagemakerServicecatalogPortfolioStatusRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSagemakerServicecatalogPortfolioStatusRequest
 * class' copy constructor.
 */
GetSagemakerServicecatalogPortfolioStatusRequestPrivate::GetSagemakerServicecatalogPortfolioStatusRequestPrivate(
    const GetSagemakerServicecatalogPortfolioStatusRequestPrivate &other, GetSagemakerServicecatalogPortfolioStatusRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
