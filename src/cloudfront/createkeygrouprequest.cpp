// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createkeygrouprequest.h"
#include "createkeygrouprequest_p.h"
#include "createkeygroupresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateKeyGroupRequest
 * \brief The CreateKeyGroupRequest class provides an interface for CloudFront CreateKeyGroup requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createKeyGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateKeyGroupRequest::CreateKeyGroupRequest(const CreateKeyGroupRequest &other)
    : CloudFrontRequest(new CreateKeyGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateKeyGroupRequest object.
 */
CreateKeyGroupRequest::CreateKeyGroupRequest()
    : CloudFrontRequest(new CreateKeyGroupRequestPrivate(CloudFrontRequest::CreateKeyGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateKeyGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateKeyGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateKeyGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateKeyGroupResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::CreateKeyGroupRequestPrivate
 * \brief The CreateKeyGroupRequestPrivate class provides private implementation for CreateKeyGroupRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a CreateKeyGroupRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
CreateKeyGroupRequestPrivate::CreateKeyGroupRequestPrivate(
    const CloudFrontRequest::Action action, CreateKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateKeyGroupRequest
 * class' copy constructor.
 */
CreateKeyGroupRequestPrivate::CreateKeyGroupRequestPrivate(
    const CreateKeyGroupRequestPrivate &other, CreateKeyGroupRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
