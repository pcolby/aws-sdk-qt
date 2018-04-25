/*
    Copyright 2013-2018 Paul Colby

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

#include "getfieldlevelencryptionprofileconfigrequest.h"
#include "getfieldlevelencryptionprofileconfigrequest_p.h"
#include "getfieldlevelencryptionprofileconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileConfigRequest
 * \brief The GetFieldLevelEncryptionProfileConfigRequest class provides an interface for CloudFront GetFieldLevelEncryptionProfileConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionProfileConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetFieldLevelEncryptionProfileConfigRequest::GetFieldLevelEncryptionProfileConfigRequest(const GetFieldLevelEncryptionProfileConfigRequest &other)
    : CloudFrontRequest(new GetFieldLevelEncryptionProfileConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFieldLevelEncryptionProfileConfigRequest object.
 */
GetFieldLevelEncryptionProfileConfigRequest::GetFieldLevelEncryptionProfileConfigRequest()
    : CloudFrontRequest(new GetFieldLevelEncryptionProfileConfigRequestPrivate(CloudFrontRequest::GetFieldLevelEncryptionProfileConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetFieldLevelEncryptionProfileConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFieldLevelEncryptionProfileConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFieldLevelEncryptionProfileConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetFieldLevelEncryptionProfileConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionProfileConfigRequestPrivate
 * \brief The GetFieldLevelEncryptionProfileConfigRequestPrivate class provides private implementation for GetFieldLevelEncryptionProfileConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a GetFieldLevelEncryptionProfileConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
GetFieldLevelEncryptionProfileConfigRequestPrivate::GetFieldLevelEncryptionProfileConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetFieldLevelEncryptionProfileConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFieldLevelEncryptionProfileConfigRequest
 * class' copy constructor.
 */
GetFieldLevelEncryptionProfileConfigRequestPrivate::GetFieldLevelEncryptionProfileConfigRequestPrivate(
    const GetFieldLevelEncryptionProfileConfigRequestPrivate &other, GetFieldLevelEncryptionProfileConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
