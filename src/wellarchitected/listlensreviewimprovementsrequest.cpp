// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlensreviewimprovementsrequest.h"
#include "listlensreviewimprovementsrequest_p.h"
#include "listlensreviewimprovementsresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::ListLensReviewImprovementsRequest
 * \brief The ListLensReviewImprovementsRequest class provides an interface for WellArchitected ListLensReviewImprovements requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::listLensReviewImprovements
 */

/*!
 * Constructs a copy of \a other.
 */
ListLensReviewImprovementsRequest::ListLensReviewImprovementsRequest(const ListLensReviewImprovementsRequest &other)
    : WellArchitectedRequest(new ListLensReviewImprovementsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLensReviewImprovementsRequest object.
 */
ListLensReviewImprovementsRequest::ListLensReviewImprovementsRequest()
    : WellArchitectedRequest(new ListLensReviewImprovementsRequestPrivate(WellArchitectedRequest::ListLensReviewImprovementsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLensReviewImprovementsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLensReviewImprovementsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLensReviewImprovementsRequest::response(QNetworkReply * const reply) const
{
    return new ListLensReviewImprovementsResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::ListLensReviewImprovementsRequestPrivate
 * \brief The ListLensReviewImprovementsRequestPrivate class provides private implementation for ListLensReviewImprovementsRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a ListLensReviewImprovementsRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
ListLensReviewImprovementsRequestPrivate::ListLensReviewImprovementsRequestPrivate(
    const WellArchitectedRequest::Action action, ListLensReviewImprovementsRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLensReviewImprovementsRequest
 * class' copy constructor.
 */
ListLensReviewImprovementsRequestPrivate::ListLensReviewImprovementsRequestPrivate(
    const ListLensReviewImprovementsRequestPrivate &other, ListLensReviewImprovementsRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
