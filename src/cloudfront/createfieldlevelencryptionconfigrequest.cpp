/*
    Copyright 2013-2019 Paul Colby

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

#include "createfieldlevelencryptionconfigrequest.h"
#include "createfieldlevelencryptionconfigrequest_p.h"
#include "createfieldlevelencryptionconfigresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionConfigRequest
 * \brief The CreateFieldLevelEncryptionConfigRequest class provides an interface for CloudFront CreateFieldLevelEncryptionConfig requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createFieldLevelEncryptionConfig
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFieldLevelEncryptionConfigRequest::CreateFieldLevelEncryptionConfigRequest(const CreateFieldLevelEncryptionConfigRequest &other)
    : CloudFrontRequest(new CreateFieldLevelEncryptionConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFieldLevelEncryptionConfigRequest object.
 */
CreateFieldLevelEncryptionConfigRequest::CreateFieldLevelEncryptionConfigRequest()
    : CloudFrontRequest(new CreateFieldLevelEncryptionConfigRequestPrivate(CloudFrontRequest::CreateFieldLevelEncryptionConfigAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFieldLevelEncryptionConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFieldLevelEncryptionConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFieldLevelEncryptionConfigRequest::response(QNetworkReply * const reply) const
{
    return new CreateFieldLevelEncryptionConfigResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateFieldLevelEncryptionConfigRequestPrivate
 * \brief The CreateFieldLevelEncryptionConfigRequestPrivate class provides private implementation for CreateFieldLevelEncryptionConfigRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateFieldLevelEncryptionConfigRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateFieldLevelEncryptionConfigRequestPrivate::CreateFieldLevelEncryptionConfigRequestPrivate(
    const CloudFrontRequest::Action action, CreateFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFieldLevelEncryptionConfigRequest
 * class' copy constructor.
 */
CreateFieldLevelEncryptionConfigRequestPrivate::CreateFieldLevelEncryptionConfigRequestPrivate(
    const CreateFieldLevelEncryptionConfigRequestPrivate &other, CreateFieldLevelEncryptionConfigRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
