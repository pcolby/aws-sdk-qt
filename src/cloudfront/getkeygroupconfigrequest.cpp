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

#include "getkeygroupconfigrequest.h"
#include "getkeygroupconfigrequest_p.h"
#include "getkeygroupconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetKeyGroupConfigRequest
 * \brief The GetKeyGroupConfigRequest class provides an interface for CloudFront GetKeyGroupConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getKeyGroupConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetKeyGroupConfigRequest::GetKeyGroupConfigRequest(const GetKeyGroupConfigRequest &other)
    : CloudFrontRequest(new GetKeyGroupConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetKeyGroupConfigRequest object.
 */
GetKeyGroupConfigRequest::GetKeyGroupConfigRequest()
    : CloudFrontRequest(new GetKeyGroupConfigRequestPrivate(CloudFrontRequest::GetKeyGroupConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetKeyGroupConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetKeyGroupConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetKeyGroupConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetKeyGroupConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetKeyGroupConfigRequestPrivate
 * \brief The GetKeyGroupConfigRequestPrivate class provides private implementation for GetKeyGroupConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetKeyGroupConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetKeyGroupConfigRequestPrivate::GetKeyGroupConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetKeyGroupConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetKeyGroupConfigRequest
 * class' copy constructor.
 */
GetKeyGroupConfigRequestPrivate::GetKeyGroupConfigRequestPrivate(
    const GetKeyGroupConfigRequestPrivate &other, GetKeyGroupConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
