// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdistributionrequest.h"
#include "createdistributionrequest_p.h"
#include "createdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateDistributionRequest
 * \brief The CreateDistributionRequest class provides an interface for CloudFront CreateDistribution requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createDistribution
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDistributionRequest::CreateDistributionRequest(const CreateDistributionRequest &other)
    : CloudFrontRequest(new CreateDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDistributionRequest object.
 */
CreateDistributionRequest::CreateDistributionRequest()
    : CloudFrontRequest(new CreateDistributionRequestPrivate(CloudFrontRequest::CreateDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDistributionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDistributionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDistributionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDistributionResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateDistributionRequestPrivate
 * \brief The CreateDistributionRequestPrivate class provides private implementation for CreateDistributionRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateDistributionRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateDistributionRequestPrivate::CreateDistributionRequestPrivate(
    const CloudFrontRequest::Action action, CreateDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDistributionRequest
 * class' copy constructor.
 */
CreateDistributionRequestPrivate::CreateDistributionRequestPrivate(
    const CreateDistributionRequestPrivate &other, CreateDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
