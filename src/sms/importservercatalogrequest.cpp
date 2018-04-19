/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "importservercatalogrequest.h"
#include "importservercatalogrequest_p.h"
#include "importservercatalogresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::ImportServerCatalogRequest
 * \brief The ImportServerCatalogRequest class provides an interface for SMS ImportServerCatalog requests.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SMSClient::importServerCatalog
 */

/*!
 * Constructs a copy of \a other.
 */
ImportServerCatalogRequest::ImportServerCatalogRequest(const ImportServerCatalogRequest &other)
    : SMSRequest(new ImportServerCatalogRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportServerCatalogRequest object.
 */
ImportServerCatalogRequest::ImportServerCatalogRequest()
    : SMSRequest(new ImportServerCatalogRequestPrivate(SMSRequest::ImportServerCatalogAction, this))
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
 * \class QtAws::SMS::ImportServerCatalogRequestPrivate
 * \brief The ImportServerCatalogRequestPrivate class provides private implementation for ImportServerCatalogRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a ImportServerCatalogRequestPrivate object for SMS \a action,
 * with public implementation \a q.
 */
ImportServerCatalogRequestPrivate::ImportServerCatalogRequestPrivate(
    const SMSRequest::Action action, ImportServerCatalogRequest * const q)
    : SMSRequestPrivate(action, q)
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
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
