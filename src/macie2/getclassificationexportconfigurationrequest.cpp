// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getclassificationexportconfigurationrequest.h"
#include "getclassificationexportconfigurationrequest_p.h"
#include "getclassificationexportconfigurationresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetClassificationExportConfigurationRequest
 * \brief The GetClassificationExportConfigurationRequest class provides an interface for Macie2 GetClassificationExportConfiguration requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getClassificationExportConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetClassificationExportConfigurationRequest::GetClassificationExportConfigurationRequest(const GetClassificationExportConfigurationRequest &other)
    : Macie2Request(new GetClassificationExportConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetClassificationExportConfigurationRequest object.
 */
GetClassificationExportConfigurationRequest::GetClassificationExportConfigurationRequest()
    : Macie2Request(new GetClassificationExportConfigurationRequestPrivate(Macie2Request::GetClassificationExportConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetClassificationExportConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetClassificationExportConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetClassificationExportConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetClassificationExportConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetClassificationExportConfigurationRequestPrivate
 * \brief The GetClassificationExportConfigurationRequestPrivate class provides private implementation for GetClassificationExportConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetClassificationExportConfigurationRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetClassificationExportConfigurationRequestPrivate::GetClassificationExportConfigurationRequestPrivate(
    const Macie2Request::Action action, GetClassificationExportConfigurationRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetClassificationExportConfigurationRequest
 * class' copy constructor.
 */
GetClassificationExportConfigurationRequestPrivate::GetClassificationExportConfigurationRequestPrivate(
    const GetClassificationExportConfigurationRequestPrivate &other, GetClassificationExportConfigurationRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
