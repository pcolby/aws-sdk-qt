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

#include "importappcatalogrequest.h"
#include "importappcatalogrequest_p.h"
#include "importappcatalogresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::ImportAppCatalogRequest
 * \brief The ImportAppCatalogRequest class provides an interface for Sms ImportAppCatalog requests.
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
 * \sa SmsClient::importAppCatalog
 */

/*!
 * Constructs a copy of \a other.
 */
ImportAppCatalogRequest::ImportAppCatalogRequest(const ImportAppCatalogRequest &other)
    : SmsRequest(new ImportAppCatalogRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportAppCatalogRequest object.
 */
ImportAppCatalogRequest::ImportAppCatalogRequest()
    : SmsRequest(new ImportAppCatalogRequestPrivate(SmsRequest::ImportAppCatalogAction, this))
{

}

/*!
 * \reimp
 */
bool ImportAppCatalogRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportAppCatalogResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportAppCatalogRequest::response(QNetworkReply * const reply) const
{
    return new ImportAppCatalogResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::ImportAppCatalogRequestPrivate
 * \brief The ImportAppCatalogRequestPrivate class provides private implementation for ImportAppCatalogRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a ImportAppCatalogRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
ImportAppCatalogRequestPrivate::ImportAppCatalogRequestPrivate(
    const SmsRequest::Action action, ImportAppCatalogRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportAppCatalogRequest
 * class' copy constructor.
 */
ImportAppCatalogRequestPrivate::ImportAppCatalogRequestPrivate(
    const ImportAppCatalogRequestPrivate &other, ImportAppCatalogRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
