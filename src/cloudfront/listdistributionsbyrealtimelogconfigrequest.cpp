// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdistributionsbyrealtimelogconfigrequest.h"
#include "listdistributionsbyrealtimelogconfigrequest_p.h"
#include "listdistributionsbyrealtimelogconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListDistributionsByRealtimeLogConfigRequest
 * \brief The ListDistributionsByRealtimeLogConfigRequest class provides an interface for CloudFront ListDistributionsByRealtimeLogConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listDistributionsByRealtimeLogConfig
 */

/*!
 * Constructs a copy of \a other.
 */
ListDistributionsByRealtimeLogConfigRequest::ListDistributionsByRealtimeLogConfigRequest(const ListDistributionsByRealtimeLogConfigRequest &other)
    : CloudFrontRequest(new ListDistributionsByRealtimeLogConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDistributionsByRealtimeLogConfigRequest object.
 */
ListDistributionsByRealtimeLogConfigRequest::ListDistributionsByRealtimeLogConfigRequest()
    : CloudFrontRequest(new ListDistributionsByRealtimeLogConfigRequestPrivate(CloudFrontRequest::ListDistributionsByRealtimeLogConfigAction, this))
{

}

/*!
 * \reimp
 */
bool ListDistributionsByRealtimeLogConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDistributionsByRealtimeLogConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDistributionsByRealtimeLogConfigRequest::response(QNetworkReply * const reply) const
{
    return new ListDistributionsByRealtimeLogConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListDistributionsByRealtimeLogConfigRequestPrivate
 * \brief The ListDistributionsByRealtimeLogConfigRequestPrivate class provides private implementation for ListDistributionsByRealtimeLogConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListDistributionsByRealtimeLogConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListDistributionsByRealtimeLogConfigRequestPrivate::ListDistributionsByRealtimeLogConfigRequestPrivate(
    const CloudFrontRequest::Action action, ListDistributionsByRealtimeLogConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDistributionsByRealtimeLogConfigRequest
 * class' copy constructor.
 */
ListDistributionsByRealtimeLogConfigRequestPrivate::ListDistributionsByRealtimeLogConfigRequestPrivate(
    const ListDistributionsByRealtimeLogConfigRequestPrivate &other, ListDistributionsByRealtimeLogConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
