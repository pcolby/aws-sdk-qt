/*
    Copyright 2013-2019 Paul Colby

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

#include "updates3resourcesrequest.h"
#include "updates3resourcesrequest_p.h"
#include "updates3resourcesresponse.h"
#include "macierequest_p.h"

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::UpdateS3ResourcesRequest
 * \brief The UpdateS3ResourcesRequest class provides an interface for Macie UpdateS3Resources requests.
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
 * \sa MacieClient::updateS3Resources
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateS3ResourcesRequest::UpdateS3ResourcesRequest(const UpdateS3ResourcesRequest &other)
    : MacieRequest(new UpdateS3ResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateS3ResourcesRequest object.
 */
UpdateS3ResourcesRequest::UpdateS3ResourcesRequest()
    : MacieRequest(new UpdateS3ResourcesRequestPrivate(MacieRequest::UpdateS3ResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateS3ResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateS3ResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateS3ResourcesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateS3ResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Macie::UpdateS3ResourcesRequestPrivate
 * \brief The UpdateS3ResourcesRequestPrivate class provides private implementation for UpdateS3ResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a UpdateS3ResourcesRequestPrivate object for Macie \a action,
 * with public implementation \a q.
 */
UpdateS3ResourcesRequestPrivate::UpdateS3ResourcesRequestPrivate(
    const MacieRequest::Action action, UpdateS3ResourcesRequest * const q)
    : MacieRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateS3ResourcesRequest
 * class' copy constructor.
 */
UpdateS3ResourcesRequestPrivate::UpdateS3ResourcesRequestPrivate(
    const UpdateS3ResourcesRequestPrivate &other, UpdateS3ResourcesRequest * const q)
    : MacieRequestPrivate(other, q)
{

}

} // namespace Macie
} // namespace QtAws
