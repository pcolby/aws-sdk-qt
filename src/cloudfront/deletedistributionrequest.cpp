// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedistributionrequest.h"
#include "deletedistributionrequest_p.h"
#include "deletedistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::DeleteDistributionRequest
 * \brief The DeleteDistributionRequest class provides an interface for CloudFront DeleteDistribution requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::deleteDistribution
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDistributionRequest::DeleteDistributionRequest(const DeleteDistributionRequest &other)
    : CloudFrontRequest(new DeleteDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDistributionRequest object.
 */
DeleteDistributionRequest::DeleteDistributionRequest()
    : CloudFrontRequest(new DeleteDistributionRequestPrivate(CloudFrontRequest::DeleteDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDistributionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDistributionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDistributionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDistributionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::DeleteDistributionRequestPrivate
 * \brief The DeleteDistributionRequestPrivate class provides private implementation for DeleteDistributionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a DeleteDistributionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
DeleteDistributionRequestPrivate::DeleteDistributionRequestPrivate(
    const CloudFrontRequest::Action action, DeleteDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDistributionRequest
 * class' copy constructor.
 */
DeleteDistributionRequestPrivate::DeleteDistributionRequestPrivate(
    const DeleteDistributionRequestPrivate &other, DeleteDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
