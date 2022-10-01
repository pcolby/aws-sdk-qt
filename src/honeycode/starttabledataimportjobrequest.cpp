// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttabledataimportjobrequest.h"
#include "starttabledataimportjobrequest_p.h"
#include "starttabledataimportjobresponse.h"
#include "honeycoderequest_p.h"

namespace QtAws {
namespace Honeycode {

/*!
 * \class QtAws::Honeycode::StartTableDataImportJobRequest
 * \brief The StartTableDataImportJobRequest class provides an interface for Honeycode StartTableDataImportJob requests.
 *
 * \inmodule QtAwsHoneycode
 *
 *  Amazon Honeycode is a fully managed service that allows you to quickly build mobile and web apps for teams—without
 *  programming. Build Honeycode apps for managing almost anything, like projects, customers, operations, approvals,
 *  resources, and even your team.
 *
 * \sa HoneycodeClient::startTableDataImportJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartTableDataImportJobRequest::StartTableDataImportJobRequest(const StartTableDataImportJobRequest &other)
    : HoneycodeRequest(new StartTableDataImportJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTableDataImportJobRequest object.
 */
StartTableDataImportJobRequest::StartTableDataImportJobRequest()
    : HoneycodeRequest(new StartTableDataImportJobRequestPrivate(HoneycodeRequest::StartTableDataImportJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartTableDataImportJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTableDataImportJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTableDataImportJobRequest::response(QNetworkReply * const reply) const
{
    return new StartTableDataImportJobResponse(*this, reply);
}

/*!
 * \class QtAws::Honeycode::StartTableDataImportJobRequestPrivate
 * \brief The StartTableDataImportJobRequestPrivate class provides private implementation for StartTableDataImportJobRequest.
 * \internal
 *
 * \inmodule QtAwsHoneycode
 */

/*!
 * Constructs a StartTableDataImportJobRequestPrivate object for Honeycode \a action,
 * with public implementation \a q.
 */
StartTableDataImportJobRequestPrivate::StartTableDataImportJobRequestPrivate(
    const HoneycodeRequest::Action action, StartTableDataImportJobRequest * const q)
    : HoneycodeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTableDataImportJobRequest
 * class' copy constructor.
 */
StartTableDataImportJobRequestPrivate::StartTableDataImportJobRequestPrivate(
    const StartTableDataImportJobRequestPrivate &other, StartTableDataImportJobRequest * const q)
    : HoneycodeRequestPrivate(other, q)
{

}

} // namespace Honeycode
} // namespace QtAws
