/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
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
