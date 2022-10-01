// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generateembedurlforregistereduserrequest.h"
#include "generateembedurlforregistereduserrequest_p.h"
#include "generateembedurlforregistereduserresponse.h"
#include "quicksightrequest_p.h"

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForRegisteredUserRequest
 * \brief The GenerateEmbedUrlForRegisteredUserRequest class provides an interface for QuickSight GenerateEmbedUrlForRegisteredUser requests.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::generateEmbedUrlForRegisteredUser
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateEmbedUrlForRegisteredUserRequest::GenerateEmbedUrlForRegisteredUserRequest(const GenerateEmbedUrlForRegisteredUserRequest &other)
    : QuickSightRequest(new GenerateEmbedUrlForRegisteredUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateEmbedUrlForRegisteredUserRequest object.
 */
GenerateEmbedUrlForRegisteredUserRequest::GenerateEmbedUrlForRegisteredUserRequest()
    : QuickSightRequest(new GenerateEmbedUrlForRegisteredUserRequestPrivate(QuickSightRequest::GenerateEmbedUrlForRegisteredUserAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateEmbedUrlForRegisteredUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateEmbedUrlForRegisteredUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateEmbedUrlForRegisteredUserRequest::response(QNetworkReply * const reply) const
{
    return new GenerateEmbedUrlForRegisteredUserResponse(*this, reply);
}

/*!
 * \class QtAws::QuickSight::GenerateEmbedUrlForRegisteredUserRequestPrivate
 * \brief The GenerateEmbedUrlForRegisteredUserRequestPrivate class provides private implementation for GenerateEmbedUrlForRegisteredUserRequest.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a GenerateEmbedUrlForRegisteredUserRequestPrivate object for QuickSight \a action,
 * with public implementation \a q.
 */
GenerateEmbedUrlForRegisteredUserRequestPrivate::GenerateEmbedUrlForRegisteredUserRequestPrivate(
    const QuickSightRequest::Action action, GenerateEmbedUrlForRegisteredUserRequest * const q)
    : QuickSightRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateEmbedUrlForRegisteredUserRequest
 * class' copy constructor.
 */
GenerateEmbedUrlForRegisteredUserRequestPrivate::GenerateEmbedUrlForRegisteredUserRequestPrivate(
    const GenerateEmbedUrlForRegisteredUserRequestPrivate &other, GenerateEmbedUrlForRegisteredUserRequest * const q)
    : QuickSightRequestPrivate(other, q)
{

}

} // namespace QuickSight
} // namespace QtAws
