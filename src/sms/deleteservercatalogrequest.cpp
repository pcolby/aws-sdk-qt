// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteservercatalogrequest.h"
#include "deleteservercatalogrequest_p.h"
#include "deleteservercatalogresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::DeleteServerCatalogRequest
 * \brief The DeleteServerCatalogRequest class provides an interface for Sms DeleteServerCatalog requests.
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
 * \sa SmsClient::deleteServerCatalog
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServerCatalogRequest::DeleteServerCatalogRequest(const DeleteServerCatalogRequest &other)
    : SmsRequest(new DeleteServerCatalogRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServerCatalogRequest object.
 */
DeleteServerCatalogRequest::DeleteServerCatalogRequest()
    : SmsRequest(new DeleteServerCatalogRequestPrivate(SmsRequest::DeleteServerCatalogAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServerCatalogRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServerCatalogResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServerCatalogRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServerCatalogResponse(*this, reply);
}

/*!
 * \class QtAws::Sms::DeleteServerCatalogRequestPrivate
 * \brief The DeleteServerCatalogRequestPrivate class provides private implementation for DeleteServerCatalogRequest.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a DeleteServerCatalogRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
DeleteServerCatalogRequestPrivate::DeleteServerCatalogRequestPrivate(
    const SmsRequest::Action action, DeleteServerCatalogRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServerCatalogRequest
 * class' copy constructor.
 */
DeleteServerCatalogRequestPrivate::DeleteServerCatalogRequestPrivate(
    const DeleteServerCatalogRequestPrivate &other, DeleteServerCatalogRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace Sms
} // namespace QtAws
