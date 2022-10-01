// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Amazon Macie Classic</fullname>
 * 
 *  Amazon Macie Classic has been discontinued and is no longer
 * 
 *  available>
 * 
 *  A new Amazon Macie is now available with significant design improvements and additional features, at a lower price and
 *  in most Amazon Web Services Regions. We encourage you to take advantage of the new and improved features, and benefit
 *  from the reduced cost. To learn about features and pricing for the new Macie, see <a
 *  href="http://aws.amazon.com/macie/">Amazon Macie</a>. To learn how to use the new Macie, see the <a
 *  href="https://docs.aws.amazon.com/macie/latest/user/what-is-macie.html">Amazon Macie User
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
