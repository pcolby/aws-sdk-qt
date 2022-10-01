// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 * Constructs a ListFieldLevelEncryptionProfilesRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
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
