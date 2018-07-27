/*
    Copyright 2013-2018 Paul Colby

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

#include "disassociates3resourcesrequest.h"
#include "disassociates3resourcesrequest_p.h"
#include "disassociates3resourcesresponse.h"
#include "macierequest_p.h"

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::DisassociateS3ResourcesRequest
 * \brief The DisassociateS3ResourcesRequest class provides an interface for Macie DisassociateS3Resources requests.
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
 * \sa MacieClient::disassociateS3Resources
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateS3ResourcesRequest::DisassociateS3ResourcesRequest(const DisassociateS3ResourcesRequest &other)
    : MacieRequest(new DisassociateS3ResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateS3ResourcesRequest object.
 */
DisassociateS3ResourcesRequest::DisassociateS3ResourcesRequest()
    : MacieRequest(new DisassociateS3ResourcesRequestPrivate(MacieRequest::DisassociateS3ResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateS3ResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateS3ResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateS3ResourcesRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateS3ResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Macie::DisassociateS3ResourcesRequestPrivate
 * \brief The DisassociateS3ResourcesRequestPrivate class provides private implementation for DisassociateS3ResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a DisassociateS3ResourcesRequestPrivate object for Macie \a action,
 * with public implementation \a q.
 */
DisassociateS3ResourcesRequestPrivate::DisassociateS3ResourcesRequestPrivate(
    const MacieRequest::Action action, DisassociateS3ResourcesRequest * const q)
    : MacieRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateS3ResourcesRequest
 * class' copy constructor.
 */
DisassociateS3ResourcesRequestPrivate::DisassociateS3ResourcesRequestPrivate(
    const DisassociateS3ResourcesRequestPrivate &other, DisassociateS3ResourcesRequest * const q)
    : MacieRequestPrivate(other, q)
{

}

} // namespace Macie
} // namespace QtAws
