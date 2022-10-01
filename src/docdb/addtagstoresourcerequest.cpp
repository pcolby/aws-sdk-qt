// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addtagstoresourcerequest.h"
#include "addtagstoresourcerequest_p.h"
#include "addtagstoresourceresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::AddTagsToResourceRequest
 * \brief The AddTagsToResourceRequest class provides an interface for DocDb AddTagsToResource requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::addTagsToResource
 */

/*!
 * Constructs a copy of \a other.
 */
AddTagsToResourceRequest::AddTagsToResourceRequest(const AddTagsToResourceRequest &other)
    : DocDbRequest(new AddTagsToResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddTagsToResourceRequest object.
 */
AddTagsToResourceRequest::AddTagsToResourceRequest()
    : DocDbRequest(new AddTagsToResourceRequestPrivate(DocDbRequest::AddTagsToResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AddTagsToResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddTagsToResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsToResourceRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToResourceResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::AddTagsToResourceRequestPrivate
 * \brief The AddTagsToResourceRequestPrivate class provides private implementation for AddTagsToResourceRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a AddTagsToResourceRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
AddTagsToResourceRequestPrivate::AddTagsToResourceRequestPrivate(
    const DocDbRequest::Action action, AddTagsToResourceRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToResourceRequest
 * class' copy constructor.
 */
AddTagsToResourceRequestPrivate::AddTagsToResourceRequestPrivate(
    const AddTagsToResourceRequestPrivate &other, AddTagsToResourceRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
