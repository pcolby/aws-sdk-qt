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

#include "listfieldlevelencryptionprofilesrequest.h"
#include "listfieldlevelencryptionprofilesrequest_p.h"
#include "listfieldlevelencryptionprofilesresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionProfilesRequest
 * \brief The ListFieldLevelEncryptionProfilesRequest class provides an interface for CloudFront ListFieldLevelEncryptionProfiles requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listFieldLevelEncryptionProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListFieldLevelEncryptionProfilesRequest::ListFieldLevelEncryptionProfilesRequest(const ListFieldLevelEncryptionProfilesRequest &other)
    : CloudFrontRequest(new ListFieldLevelEncryptionProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFieldLevelEncryptionProfilesRequest object.
 */
ListFieldLevelEncryptionProfilesRequest::ListFieldLevelEncryptionProfilesRequest()
    : CloudFrontRequest(new ListFieldLevelEncryptionProfilesRequestPrivate(CloudFrontRequest::ListFieldLevelEncryptionProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListFieldLevelEncryptionProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFieldLevelEncryptionProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFieldLevelEncryptionProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListFieldLevelEncryptionProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionProfilesRequestPrivate
 * \brief The ListFieldLevelEncryptionProfilesRequestPrivate class provides private implementation for ListFieldLevelEncryptionProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 *
 * Constructs a ListFieldLevelEncryptionProfilesRequestPrivate object for CloudFront \a action with,
 * public implementation \a q.
 */
ListFieldLevelEncryptionProfilesRequestPrivate::ListFieldLevelEncryptionProfilesRequestPrivate(
    const CloudFrontRequest::Action action, ListFieldLevelEncryptionProfilesRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFieldLevelEncryptionProfilesRequest
 * class' copy constructor.
 */
ListFieldLevelEncryptionProfilesRequestPrivate::ListFieldLevelEncryptionProfilesRequestPrivate(
    const ListFieldLevelEncryptionProfilesRequestPrivate &other, ListFieldLevelEncryptionProfilesRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
