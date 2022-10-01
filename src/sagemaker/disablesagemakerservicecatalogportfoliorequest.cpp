// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disablesagemakerservicecatalogportfoliorequest.h"
#include "disablesagemakerservicecatalogportfoliorequest_p.h"
#include "disablesagemakerservicecatalogportfolioresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DisableSagemakerServicecatalogPortfolioRequest
 * \brief The DisableSagemakerServicecatalogPortfolioRequest class provides an interface for SageMaker DisableSagemakerServicecatalogPortfolio requests.
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
 * \sa SageMakerClient::disableSagemakerServicecatalogPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
DisableSagemakerServicecatalogPortfolioRequest::DisableSagemakerServicecatalogPortfolioRequest(const DisableSagemakerServicecatalogPortfolioRequest &other)
    : SageMakerRequest(new DisableSagemakerServicecatalogPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableSagemakerServicecatalogPortfolioRequest object.
 */
DisableSagemakerServicecatalogPortfolioRequest::DisableSagemakerServicecatalogPortfolioRequest()
    : SageMakerRequest(new DisableSagemakerServicecatalogPortfolioRequestPrivate(SageMakerRequest::DisableSagemakerServicecatalogPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool DisableSagemakerServicecatalogPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableSagemakerServicecatalogPortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableSagemakerServicecatalogPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new DisableSagemakerServicecatalogPortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DisableSagemakerServicecatalogPortfolioRequestPrivate
 * \brief The DisableSagemakerServicecatalogPortfolioRequestPrivate class provides private implementation for DisableSagemakerServicecatalogPortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DisableSagemakerServicecatalogPortfolioRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DisableSagemakerServicecatalogPortfolioRequestPrivate::DisableSagemakerServicecatalogPortfolioRequestPrivate(
    const SageMakerRequest::Action action, DisableSagemakerServicecatalogPortfolioRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableSagemakerServicecatalogPortfolioRequest
 * class' copy constructor.
 */
DisableSagemakerServicecatalogPortfolioRequestPrivate::DisableSagemakerServicecatalogPortfolioRequestPrivate(
    const DisableSagemakerServicecatalogPortfolioRequestPrivate &other, DisableSagemakerServicecatalogPortfolioRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
