/*
    Copyright 2013-2020 Paul Colby

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

#include "createfieldlevelencryptionprofilerequest.h"
#include "createfieldlevelencryptionprofilerequest_p.h"
#include "createfieldlevelencryptionprofileresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionProfileRequest
 * \brief The CreateFieldLevelEncryptionProfileRequest class provides an interface for CloudFront CreateFieldLevelEncryptionProfile requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createFieldLevelEncryptionProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFieldLevelEncryptionProfileRequest::CreateFieldLevelEncryptionProfileRequest(const CreateFieldLevelEncryptionProfileRequest &other)
    : CloudFrontRequest(new CreateFieldLevelEncryptionProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFieldLevelEncryptionProfileRequest object.
 */
CreateFieldLevelEncryptionProfileRequest::CreateFieldLevelEncryptionProfileRequest()
    : CloudFrontRequest(new CreateFieldLevelEncryptionProfileRequestPrivate(CloudFrontRequest::CreateFieldLevelEncryptionProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFieldLevelEncryptionProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFieldLevelEncryptionProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFieldLevelEncryptionProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateFieldLevelEncryptionProfileResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionProfileRequestPrivate
 * \brief The CreateFieldLevelEncryptionProfileRequestPrivate class provides private implementation for CreateFieldLevelEncryptionProfileRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateFieldLevelEncryptionProfileRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateFieldLevelEncryptionProfileRequestPrivate::CreateFieldLevelEncryptionProfileRequestPrivate(
    const CloudFrontRequest::Action action, CreateFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFieldLevelEncryptionProfileRequest
 * class' copy constructor.
 */
CreateFieldLevelEncryptionProfileRequestPrivate::CreateFieldLevelEncryptionProfileRequestPrivate(
    const CreateFieldLevelEncryptionProfileRequestPrivate &other, CreateFieldLevelEncryptionProfileRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
