// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtagsrequest.h"
#include "createtagsrequest_p.h"
#include "createtagsresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::CreateTagsRequest
 * \brief The CreateTagsRequest class provides an interface for Efs CreateTags requests.
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
 * \sa EfsClient::createTags
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTagsRequest::CreateTagsRequest(const CreateTagsRequest &other)
    : EfsRequest(new CreateTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTagsRequest object.
 */
CreateTagsRequest::CreateTagsRequest()
    : EfsRequest(new CreateTagsRequestPrivate(EfsRequest::CreateTagsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::CreateTagsRequestPrivate
 * \brief The CreateTagsRequestPrivate class provides private implementation for CreateTagsRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a CreateTagsRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
CreateTagsRequestPrivate::CreateTagsRequestPrivate(
    const EfsRequest::Action action, CreateTagsRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTagsRequest
 * class' copy constructor.
 */
CreateTagsRequestPrivate::CreateTagsRequestPrivate(
    const CreateTagsRequestPrivate &other, CreateTagsRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
