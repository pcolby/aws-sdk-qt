// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importservercatalogrequest.h"
#include "importservercatalogrequest_p.h"
#include "importservercatalogresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::ImportServerCatalogRequest
 * \brief The ImportServerCatalogRequest class provides an interface for Sms ImportServerCatalog requests.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::importServerCatalog
 */

/*!
 * Constructs a copy of \a other.
 */
ImportServerCatalogRequest::ImportServerCatalogRequest(const ImportServerCatalogRequest &other)
    : SmsRequest(new ImportServerCatalogRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportServerCatalogRequest object.
 */
ImportServerCatalogRequest::ImportServerCatalogRequest()
    : SmsRequest(new ImportServerCatalogRequestPrivate(SmsRequest::ImportServerCatalogAction, this))
{

}

/*!
 * \reimp
 */
bool ImportServerCatalogRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportServerCatalogResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportServerCatalogRequest::response(QNetworkReply * const reply) const
{
    return new ImportServerCatalogResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::ImportServerCatalogRequestPrivate
 * \brief The ImportServerCatalogRequestPrivate class provides private implementation for ImportServerCatalogRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a ImportServerCatalogRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
ImportServerCatalogRequestPrivate::ImportServerCatalogRequestPrivate(
    const SmsRequest::Action action, ImportServerCatalogRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportServerCatalogRequest
 * class' copy constructor.
 */
ImportServerCatalogRequestPrivate::ImportServerCatalogRequestPrivate(
    const ImportServerCatalogRequestPrivate &other, ImportServerCatalogRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
