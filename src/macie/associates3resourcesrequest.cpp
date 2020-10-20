/*
    Copyright 2013-2020 Paul Colby

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

#include "associates3resourcesrequest.h"
#include "associates3resourcesrequest_p.h"
#include "associates3resourcesresponse.h"
#include "macierequest_p.h"

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::AssociateS3ResourcesRequest
 * \brief The AssociateS3ResourcesRequest class provides an interface for Macie AssociateS3Resources requests.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie</fullname>
 * 
 *  Amazon Macie is a security service that uses machine learning to automatically discover, classify, and protect sensitive
 *  data in AWS. Macie recognizes sensitive data such as personally identifiable information (PII) or intellectual property,
 *  and provides you with dashboards and alerts that give visibility into how this data is being accessed or moved. For more
 *  information, see the <a href="https://docs.aws.amazon.com/macie/latest/userguide/what-is-macie.html">Macie User
 *  Guide</a>.
 *
 * \sa MacieClient::associateS3Resources
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateS3ResourcesRequest::AssociateS3ResourcesRequest(const AssociateS3ResourcesRequest &other)
    : MacieRequest(new AssociateS3ResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateS3ResourcesRequest object.
 */
AssociateS3ResourcesRequest::AssociateS3ResourcesRequest()
    : MacieRequest(new AssociateS3ResourcesRequestPrivate(MacieRequest::AssociateS3ResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateS3ResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateS3ResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateS3ResourcesRequest::response(QNetworkReply * const reply) const
{
    return new AssociateS3ResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Macie::AssociateS3ResourcesRequestPrivate
 * \brief The AssociateS3ResourcesRequestPrivate class provides private implementation for AssociateS3ResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a AssociateS3ResourcesRequestPrivate object for Macie \a action,
 * with public implementation \a q.
 */
AssociateS3ResourcesRequestPrivate::AssociateS3ResourcesRequestPrivate(
    const MacieRequest::Action action, AssociateS3ResourcesRequest * const q)
    : MacieRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateS3ResourcesRequest
 * class' copy constructor.
 */
AssociateS3ResourcesRequestPrivate::AssociateS3ResourcesRequestPrivate(
    const AssociateS3ResourcesRequestPrivate &other, AssociateS3ResourcesRequest * const q)
    : MacieRequestPrivate(other, q)
{

}

} // namespace Macie
} // namespace QtAws
