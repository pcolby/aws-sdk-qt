// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generateembedurlforanonymoususerrequest.h"
#include "generateembedurlforanonymoususerrequest_p.h"
#include "generateembedurlforanonymoususerresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForAnonymousUserRequest
 * \brief The GenerateEmbedUrlForAnonymousUserRequest class provides an interface for QuickSight GenerateEmbedUrlForAnonymousUser requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::generateEmbedUrlForAnonymousUser
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateEmbedUrlForAnonymousUserRequest::GenerateEmbedUrlForAnonymousUserRequest(const GenerateEmbedUrlForAnonymousUserRequest &other)
    : QuickSightRequest(new GenerateEmbedUrlForAnonymousUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateEmbedUrlForAnonymousUserRequest object.
 */
GenerateEmbedUrlForAnonymousUserRequest::GenerateEmbedUrlForAnonymousUserRequest()
    : QuickSightRequest(new GenerateEmbedUrlForAnonymousUserRequestPrivate(QuickSightRequest::GenerateEmbedUrlForAnonymousUserAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateEmbedUrlForAnonymousUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateEmbedUrlForAnonymousUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateEmbedUrlForAnonymousUserRequest::response(QNetworkReply * const reply) const
{
    return new GenerateEmbedUrlForAnonymousUserResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForAnonymousUserRequestPrivate
 * \brief The GenerateEmbedUrlForAnonymousUserRequestPrivate class provides private implementation for GenerateEmbedUrlForAnonymousUserRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GenerateEmbedUrlForAnonymousUserRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
GenerateEmbedUrlForAnonymousUserRequestPrivate::GenerateEmbedUrlForAnonymousUserRequestPrivate(
    const QuickSightRequest::Action action, GenerateEmbedUrlForAnonymousUserRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateEmbedUrlForAnonymousUserRequest
 * class' copy constructor.
 */
GenerateEmbedUrlForAnonymousUserRequestPrivate::GenerateEmbedUrlForAnonymousUserRequestPrivate(
    const GenerateEmbedUrlForAnonymousUserRequestPrivate &other, GenerateEmbedUrlForAnonymousUserRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
