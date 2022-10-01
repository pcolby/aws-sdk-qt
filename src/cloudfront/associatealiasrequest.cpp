// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatealiasrequest.h"
#include "associatealiasrequest_p.h"
#include "associatealiasresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::AssociateAliasRequest
 * \brief The AssociateAliasRequest class provides an interface for CloudFront AssociateAlias requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::associateAlias
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateAliasRequest::AssociateAliasRequest(const AssociateAliasRequest &other)
    : CloudFrontRequest(new AssociateAliasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateAliasRequest object.
 */
AssociateAliasRequest::AssociateAliasRequest()
    : CloudFrontRequest(new AssociateAliasRequestPrivate(CloudFrontRequest::AssociateAliasAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateAliasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateAliasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateAliasRequest::response(QNetworkReply * const reply) const
{
    return new AssociateAliasResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::AssociateAliasRequestPrivate
 * \brief The AssociateAliasRequestPrivate class provides private implementation for AssociateAliasRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a AssociateAliasRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
AssociateAliasRequestPrivate::AssociateAliasRequestPrivate(
    const CloudFrontRequest::Action action, AssociateAliasRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateAliasRequest
 * class' copy constructor.
 */
AssociateAliasRequestPrivate::AssociateAliasRequestPrivate(
    const AssociateAliasRequestPrivate &other, AssociateAliasRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
