// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontactlistrequest.h"
#include "deletecontactlistrequest_p.h"
#include "deletecontactlistresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteContactListRequest
 * \brief The DeleteContactListRequest class provides an interface for SESv2 DeleteContactList requests.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::deleteContactList
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteContactListRequest::DeleteContactListRequest(const DeleteContactListRequest &other)
    : SESv2Request(new DeleteContactListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteContactListRequest object.
 */
DeleteContactListRequest::DeleteContactListRequest()
    : SESv2Request(new DeleteContactListRequestPrivate(SESv2Request::DeleteContactListAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteContactListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteContactListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContactListRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContactListResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::DeleteContactListRequestPrivate
 * \brief The DeleteContactListRequestPrivate class provides private implementation for DeleteContactListRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteContactListRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
DeleteContactListRequestPrivate::DeleteContactListRequestPrivate(
    const SESv2Request::Action action, DeleteContactListRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteContactListRequest
 * class' copy constructor.
 */
DeleteContactListRequestPrivate::DeleteContactListRequestPrivate(
    const DeleteContactListRequestPrivate &other, DeleteContactListRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
