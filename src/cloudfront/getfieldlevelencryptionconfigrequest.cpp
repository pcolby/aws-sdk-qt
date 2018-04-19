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

#include "getfieldlevelencryptionconfigrequest.h"
#include "getfieldlevelencryptionconfigrequest_p.h"
#include "getfieldlevelencryptionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionConfigRequest
 * \brief The GetFieldLevelEncryptionConfigRequest class provides an interface for CloudFront GetFieldLevelEncryptionConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::getFieldLevelEncryptionConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetFieldLevelEncryptionConfigRequest::GetFieldLevelEncryptionConfigRequest(const GetFieldLevelEncryptionConfigRequest &other)
    : CloudFrontRequest(new GetFieldLevelEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFieldLevelEncryptionConfigRequest object.
 */
GetFieldLevelEncryptionConfigRequest::GetFieldLevelEncryptionConfigRequest()
    : CloudFrontRequest(new GetFieldLevelEncryptionConfigRequestPrivate(CloudFrontRequest::GetFieldLevelEncryptionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetFieldLevelEncryptionConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFieldLevelEncryptionConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFieldLevelEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetFieldLevelEncryptionConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::GetFieldLevelEncryptionConfigRequestPrivate
 * \brief The GetFieldLevelEncryptionConfigRequestPrivate class provides private implementation for GetFieldLevelEncryptionConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 *
 * Constructs a GetFieldLevelEncryptionConfigRequestPrivate object for CloudFront \a action with,
 * public implementation \a q.
 */
GetFieldLevelEncryptionConfigRequestPrivate::GetFieldLevelEncryptionConfigRequestPrivate(
    const CloudFrontRequest::Action action, GetFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFieldLevelEncryptionConfigRequest
 * class' copy constructor.
 */
GetFieldLevelEncryptionConfigRequestPrivate::GetFieldLevelEncryptionConfigRequestPrivate(
    const GetFieldLevelEncryptionConfigRequestPrivate &other, GetFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
