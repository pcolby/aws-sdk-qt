// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putclassificationexportconfigurationrequest.h"
#include "putclassificationexportconfigurationrequest_p.h"
#include "putclassificationexportconfigurationresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::PutClassificationExportConfigurationRequest
 * \brief The PutClassificationExportConfigurationRequest class provides an interface for Macie2 PutClassificationExportConfiguration requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::putClassificationExportConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutClassificationExportConfigurationRequest::PutClassificationExportConfigurationRequest(const PutClassificationExportConfigurationRequest &other)
    : Macie2Request(new PutClassificationExportConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutClassificationExportConfigurationRequest object.
 */
PutClassificationExportConfigurationRequest::PutClassificationExportConfigurationRequest()
    : Macie2Request(new PutClassificationExportConfigurationRequestPrivate(Macie2Request::PutClassificationExportConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutClassificationExportConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutClassificationExportConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutClassificationExportConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutClassificationExportConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::PutClassificationExportConfigurationRequestPrivate
 * \brief The PutClassificationExportConfigurationRequestPrivate class provides private implementation for PutClassificationExportConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a PutClassificationExportConfigurationRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
PutClassificationExportConfigurationRequestPrivate::PutClassificationExportConfigurationRequestPrivate(
    const Macie2Request::Action action, PutClassificationExportConfigurationRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutClassificationExportConfigurationRequest
 * class' copy constructor.
 */
PutClassificationExportConfigurationRequestPrivate::PutClassificationExportConfigurationRequestPrivate(
    const PutClassificationExportConfigurationRequestPrivate &other, PutClassificationExportConfigurationRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
