// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdistributionrequest.h"
#include "getdistributionrequest_p.h"
#include "getdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetDistributionRequest
 * \brief The GetDistributionRequest class provides an interface for CloudFront GetDistribution requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getDistribution
 */

/*!
 * Constructs a copy of \a other.
 */
GetDistributionRequest::GetDistributionRequest(const GetDistributionRequest &other)
    : CloudFrontRequest(new GetDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDistributionRequest object.
 */
GetDistributionRequest::GetDistributionRequest()
    : CloudFrontRequest(new GetDistributionRequestPrivate(CloudFrontRequest::GetDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool GetDistributionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDistributionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDistributionRequest::response(QNetworkReply * const reply) const
{
    return new GetDistributionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetDistributionRequestPrivate
 * \brief The GetDistributionRequestPrivate class provides private implementation for GetDistributionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetDistributionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetDistributionRequestPrivate::GetDistributionRequestPrivate(
    const CloudFrontRequest::Action action, GetDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDistributionRequest
 * class' copy constructor.
 */
GetDistributionRequestPrivate::GetDistributionRequestPrivate(
    const GetDistributionRequestPrivate &other, GetDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
