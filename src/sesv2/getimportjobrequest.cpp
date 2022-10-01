// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimportjobrequest.h"
#include "getimportjobrequest_p.h"
#include "getimportjobresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetImportJobRequest
 * \brief The GetImportJobRequest class provides an interface for SESv2 GetImportJob requests.
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
 * \sa SESv2Client::getImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetImportJobRequest::GetImportJobRequest(const GetImportJobRequest &other)
    : SESv2Request(new GetImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImportJobRequest object.
 */
GetImportJobRequest::GetImportJobRequest()
    : SESv2Request(new GetImportJobRequestPrivate(SESv2Request::GetImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImportJobRequest::response(QNetworkReply * const reply) const
{
    return new GetImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::GetImportJobRequestPrivate
 * \brief The GetImportJobRequestPrivate class provides private implementation for GetImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetImportJobRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
GetImportJobRequestPrivate::GetImportJobRequestPrivate(
    const SESv2Request::Action action, GetImportJobRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImportJobRequest
 * class' copy constructor.
 */
GetImportJobRequestPrivate::GetImportJobRequestPrivate(
    const GetImportJobRequestPrivate &other, GetImportJobRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
