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

#include "enablesagemakerservicecatalogportfoliorequest.h"
#include "enablesagemakerservicecatalogportfoliorequest_p.h"
#include "enablesagemakerservicecatalogportfolioresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::EnableSagemakerServicecatalogPortfolioRequest
 * \brief The EnableSagemakerServicecatalogPortfolioRequest class provides an interface for SageMaker EnableSagemakerServicecatalogPortfolio requests.
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
 * \sa SageMakerClient::enableSagemakerServicecatalogPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
EnableSagemakerServicecatalogPortfolioRequest::EnableSagemakerServicecatalogPortfolioRequest(const EnableSagemakerServicecatalogPortfolioRequest &other)
    : SageMakerRequest(new EnableSagemakerServicecatalogPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableSagemakerServicecatalogPortfolioRequest object.
 */
EnableSagemakerServicecatalogPortfolioRequest::EnableSagemakerServicecatalogPortfolioRequest()
    : SageMakerRequest(new EnableSagemakerServicecatalogPortfolioRequestPrivate(SageMakerRequest::EnableSagemakerServicecatalogPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool EnableSagemakerServicecatalogPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableSagemakerServicecatalogPortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableSagemakerServicecatalogPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new EnableSagemakerServicecatalogPortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::EnableSagemakerServicecatalogPortfolioRequestPrivate
 * \brief The EnableSagemakerServicecatalogPortfolioRequestPrivate class provides private implementation for EnableSagemakerServicecatalogPortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a EnableSagemakerServicecatalogPortfolioRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
EnableSagemakerServicecatalogPortfolioRequestPrivate::EnableSagemakerServicecatalogPortfolioRequestPrivate(
    const SageMakerRequest::Action action, EnableSagemakerServicecatalogPortfolioRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableSagemakerServicecatalogPortfolioRequest
 * class' copy constructor.
 */
EnableSagemakerServicecatalogPortfolioRequestPrivate::EnableSagemakerServicecatalogPortfolioRequestPrivate(
    const EnableSagemakerServicecatalogPortfolioRequestPrivate &other, EnableSagemakerServicecatalogPortfolioRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
