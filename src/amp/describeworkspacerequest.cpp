// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeworkspacerequest.h"
#include "describeworkspacerequest_p.h"
#include "describeworkspaceresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DescribeWorkspaceRequest
 * \brief The DescribeWorkspaceRequest class provides an interface for Amp DescribeWorkspace requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::describeWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspaceRequest::DescribeWorkspaceRequest(const DescribeWorkspaceRequest &other)
    : AmpRequest(new DescribeWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspaceRequest object.
 */
DescribeWorkspaceRequest::DescribeWorkspaceRequest()
    : AmpRequest(new DescribeWorkspaceRequestPrivate(AmpRequest::DescribeWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::DescribeWorkspaceRequestPrivate
 * \brief The DescribeWorkspaceRequestPrivate class provides private implementation for DescribeWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DescribeWorkspaceRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
DescribeWorkspaceRequestPrivate::DescribeWorkspaceRequestPrivate(
    const AmpRequest::Action action, DescribeWorkspaceRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceRequest
 * class' copy constructor.
 */
DescribeWorkspaceRequestPrivate::DescribeWorkspaceRequestPrivate(
    const DescribeWorkspaceRequestPrivate &other, DescribeWorkspaceRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
