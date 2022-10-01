/*
    Copyright 2013-2021 Paul Colby

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

#include "createimportjobrequest.h"
#include "createimportjobrequest_p.h"
#include "createimportjobresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateImportJobRequest
 * \brief The CreateImportJobRequest class provides an interface for SESv2 CreateImportJob requests.
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
 * \sa SESv2Client::createImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateImportJobRequest::CreateImportJobRequest(const CreateImportJobRequest &other)
    : SESv2Request(new CreateImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateImportJobRequest object.
 */
CreateImportJobRequest::CreateImportJobRequest()
    : SESv2Request(new CreateImportJobRequestPrivate(SESv2Request::CreateImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateImportJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::CreateImportJobRequestPrivate
 * \brief The CreateImportJobRequestPrivate class provides private implementation for CreateImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateImportJobRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
CreateImportJobRequestPrivate::CreateImportJobRequestPrivate(
    const SESv2Request::Action action, CreateImportJobRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateImportJobRequest
 * class' copy constructor.
 */
CreateImportJobRequestPrivate::CreateImportJobRequestPrivate(
    const CreateImportJobRequestPrivate &other, CreateImportJobRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
