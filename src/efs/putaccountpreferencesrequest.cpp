// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountpreferencesrequest.h"
#include "putaccountpreferencesrequest_p.h"
#include "putaccountpreferencesresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::PutAccountPreferencesRequest
 * \brief The PutAccountPreferencesRequest class provides an interface for Efs PutAccountPreferences requests.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::putAccountPreferences
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccountPreferencesRequest::PutAccountPreferencesRequest(const PutAccountPreferencesRequest &other)
    : EfsRequest(new PutAccountPreferencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccountPreferencesRequest object.
 */
PutAccountPreferencesRequest::PutAccountPreferencesRequest()
    : EfsRequest(new PutAccountPreferencesRequestPrivate(EfsRequest::PutAccountPreferencesAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccountPreferencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccountPreferencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccountPreferencesRequest::response(QNetworkReply * const reply) const
{
    return new PutAccountPreferencesResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::PutAccountPreferencesRequestPrivate
 * \brief The PutAccountPreferencesRequestPrivate class provides private implementation for PutAccountPreferencesRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a PutAccountPreferencesRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
PutAccountPreferencesRequestPrivate::PutAccountPreferencesRequestPrivate(
    const EfsRequest::Action action, PutAccountPreferencesRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccountPreferencesRequest
 * class' copy constructor.
 */
PutAccountPreferencesRequestPrivate::PutAccountPreferencesRequestPrivate(
    const PutAccountPreferencesRequestPrivate &other, PutAccountPreferencesRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
