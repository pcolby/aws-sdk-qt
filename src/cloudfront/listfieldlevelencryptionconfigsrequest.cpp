// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfieldlevelencryptionconfigsrequest.h"
#include "listfieldlevelencryptionconfigsrequest_p.h"
#include "listfieldlevelencryptionconfigsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionConfigsRequest
 * \brief The ListFieldLevelEncryptionConfigsRequest class provides an interface for CloudFront ListFieldLevelEncryptionConfigs requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listFieldLevelEncryptionConfigs
 */

/*!
 * Constructs a copy of \a other.
 */
ListFieldLevelEncryptionConfigsRequest::ListFieldLevelEncryptionConfigsRequest(const ListFieldLevelEncryptionConfigsRequest &other)
    : CloudFrontRequest(new ListFieldLevelEncryptionConfigsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFieldLevelEncryptionConfigsRequest object.
 */
ListFieldLevelEncryptionConfigsRequest::ListFieldLevelEncryptionConfigsRequest()
    : CloudFrontRequest(new ListFieldLevelEncryptionConfigsRequestPrivate(CloudFrontRequest::ListFieldLevelEncryptionConfigsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFieldLevelEncryptionConfigsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFieldLevelEncryptionConfigsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFieldLevelEncryptionConfigsRequest::response(QNetworkReply * const reply) const
{
    return new ListFieldLevelEncryptionConfigsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListFieldLevelEncryptionConfigsRequestPrivate
 * \brief The ListFieldLevelEncryptionConfigsRequestPrivate class provides private implementation for ListFieldLevelEncryptionConfigsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListFieldLevelEncryptionConfigsRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListFieldLevelEncryptionConfigsRequestPrivate::ListFieldLevelEncryptionConfigsRequestPrivate(
    const CloudFrontRequest::Action action, ListFieldLevelEncryptionConfigsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFieldLevelEncryptionConfigsRequest
 * class' copy constructor.
 */
ListFieldLevelEncryptionConfigsRequestPrivate::ListFieldLevelEncryptionConfigsRequestPrivate(
    const ListFieldLevelEncryptionConfigsRequestPrivate &other, ListFieldLevelEncryptionConfigsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
