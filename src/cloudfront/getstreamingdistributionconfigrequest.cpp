/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getstreamingdistributionconfigrequest.h"
#include "getstreamingdistributionconfigrequest_p.h"
#include "getstreamingdistributionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetStreamingDistributionConfigRequest
 * \brief The GetStreamingDistributionConfigRequest class provides an interface for CloudFront GetStreamingDistributionConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getStreamingDistributionConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetStreamingDistributionConfigRequest::GetStreamingDistributionConfigRequest(const GetStreamingDistributionConfigRequest &other)
    : CloudFrontRequest(new GetStreamingDistributionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetStreamingDistributionConfigRequest object.
 */
GetStreamingDistributionConfigRequest::GetStreamingDistributionConfigRequest()
    : CloudFrontRequest(new GetStreamingDistributionConfigRequestPrivate(CloudFrontRequest::GetStreamingDistributionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetStreamingDistributionConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetStreamingDistributionConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetStreamingDistributionConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetStreamingDistributionConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetStreamingDistributionConfigRequestPrivate
 * \brief The GetStreamingDistributionConfigRequestPrivate class provides private implementation for GetStreamingDistributionConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetStreamingDistributionConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetStreamingDistributionConfigRequestPrivate::GetStreamingDistributionConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetStreamingDistributionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetStreamingDistributionConfigRequest
 * class' copy constructor.
 */
GetStreamingDistributionConfigRequestPrivate::GetStreamingDistributionConfigRequestPrivate(
    const GetStreamingDistributionConfigRequestPrivate &other, GetStreamingDistributionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
