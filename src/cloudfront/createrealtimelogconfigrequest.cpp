/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
