// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclassificationjobrequest.h"
#include "updateclassificationjobrequest_p.h"
#include "updateclassificationjobresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::UpdateClassificationJobRequest
 * \brief The UpdateClassificationJobRequest class provides an interface for Macie2 UpdateClassificationJob requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::updateClassificationJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClassificationJobRequest::UpdateClassificationJobRequest(const UpdateClassificationJobRequest &other)
    : Macie2Request(new UpdateClassificationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClassificationJobRequest object.
 */
UpdateClassificationJobRequest::UpdateClassificationJobRequest()
    : Macie2Request(new UpdateClassificationJobRequestPrivate(Macie2Request::UpdateClassificationJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClassificationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClassificationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClassificationJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClassificationJobResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::UpdateClassificationJobRequestPrivate
 * \brief The UpdateClassificationJobRequestPrivate class provides private implementation for UpdateClassificationJobRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a UpdateClassificationJobRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
UpdateClassificationJobRequestPrivate::UpdateClassificationJobRequestPrivate(
    const Macie2Request::Action action, UpdateClassificationJobRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClassificationJobRequest
 * class' copy constructor.
 */
UpdateClassificationJobRequestPrivate::UpdateClassificationJobRequestPrivate(
    const UpdateClassificationJobRequestPrivate &other, UpdateClassificationJobRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
