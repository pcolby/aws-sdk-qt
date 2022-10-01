// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrealtimelogconfigrequest.h"
#include "createrealtimelogconfigrequest_p.h"
#include "createrealtimelogconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateRealtimeLogConfigRequest
 * \brief The CreateRealtimeLogConfigRequest class provides an interface for CloudFront CreateRealtimeLogConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createRealtimeLogConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRealtimeLogConfigRequest::CreateRealtimeLogConfigRequest(const CreateRealtimeLogConfigRequest &other)
    : CloudFrontRequest(new CreateRealtimeLogConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRealtimeLogConfigRequest object.
 */
CreateRealtimeLogConfigRequest::CreateRealtimeLogConfigRequest()
    : CloudFrontRequest(new CreateRealtimeLogConfigRequestPrivate(CloudFrontRequest::CreateRealtimeLogConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRealtimeLogConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRealtimeLogConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRealtimeLogConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateRealtimeLogConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateRealtimeLogConfigRequestPrivate
 * \brief The CreateRealtimeLogConfigRequestPrivate class provides private implementation for CreateRealtimeLogConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateRealtimeLogConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateRealtimeLogConfigRequestPrivate::CreateRealtimeLogConfigRequestPrivate(
    const CloudFrontRequest::Action action, CreateRealtimeLogConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRealtimeLogConfigRequest
 * class' copy constructor.
 */
CreateRealtimeLogConfigRequestPrivate::CreateRealtimeLogConfigRequestPrivate(
    const CreateRealtimeLogConfigRequestPrivate &other, CreateRealtimeLogConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
