// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createportfoliosharerequest.h"
#include "createportfoliosharerequest_p.h"
#include "createportfolioshareresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreatePortfolioShareRequest
 * \brief The CreatePortfolioShareRequest class provides an interface for ServiceCatalog CreatePortfolioShare requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
 *
 * \sa ServiceCatalogClient::createPortfolioShare
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePortfolioShareRequest::CreatePortfolioShareRequest(const CreatePortfolioShareRequest &other)
    : ServiceCatalogRequest(new CreatePortfolioShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePortfolioShareRequest object.
 */
CreatePortfolioShareRequest::CreatePortfolioShareRequest()
    : ServiceCatalogRequest(new CreatePortfolioShareRequestPrivate(ServiceCatalogRequest::CreatePortfolioShareAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePortfolioShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePortfolioShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePortfolioShareRequest::response(QNetworkReply * const reply) const
{
    return new CreatePortfolioShareResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::CreatePortfolioShareRequestPrivate
 * \brief The CreatePortfolioShareRequestPrivate class provides private implementation for CreatePortfolioShareRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreatePortfolioShareRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
CreatePortfolioShareRequestPrivate::CreatePortfolioShareRequestPrivate(
    const ServiceCatalogRequest::Action action, CreatePortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePortfolioShareRequest
 * class' copy constructor.
 */
CreatePortfolioShareRequestPrivate::CreatePortfolioShareRequestPrivate(
    const CreatePortfolioShareRequestPrivate &other, CreatePortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
