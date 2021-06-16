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

#include "exportjournaltos3request.h"
#include "exportjournaltos3request_p.h"
#include "exportjournaltos3response.h"
#include "qldbrequest_p.h"

namespace QtAws {
namespace QLDB {

/*!
 * \class QtAws::QLDB::ExportJournalToS3Request
 * \brief The ExportJournalToS3Request class provides an interface for QLDB ExportJournalToS3 requests.
 *
 * \inmodule QtAwsQLDB
 *
 *  The control plane for Amazon
 *
 * \sa QldbClient::exportJournalToS3
 */

/*!
 * Constructs a copy of \a other.
 */
ExportJournalToS3Request::ExportJournalToS3Request(const ExportJournalToS3Request &other)
    : QldbRequest(new ExportJournalToS3RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportJournalToS3Request object.
 */
ExportJournalToS3Request::ExportJournalToS3Request()
    : QldbRequest(new ExportJournalToS3RequestPrivate(QldbRequest::ExportJournalToS3Action, this))
{

}

/*!
 * \reimp
 */
bool ExportJournalToS3Request::isValid() const
{
    return false;
}


/*!
 * Returns a ExportJournalToS3Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportJournalToS3Request::response(QNetworkReply * const reply) const
{
    return new ExportJournalToS3Response(*this, reply);
}

/*!
 * \class QtAws::QLDB::ExportJournalToS3RequestPrivate
 * \brief The ExportJournalToS3RequestPrivate class provides private implementation for ExportJournalToS3Request.
 * \internal
 *
 * \inmodule QtAwsQLDB
 */

/*!
 * Constructs a ExportJournalToS3RequestPrivate object for Qldb \a action,
 * with public implementation \a q.
 */
ExportJournalToS3RequestPrivate::ExportJournalToS3RequestPrivate(
    const QldbRequest::Action action, ExportJournalToS3Request * const q)
    : QldbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportJournalToS3Request
 * class' copy constructor.
 */
ExportJournalToS3RequestPrivate::ExportJournalToS3RequestPrivate(
    const ExportJournalToS3RequestPrivate &other, ExportJournalToS3Request * const q)
    : QldbRequestPrivate(other, q)
{

}

} // namespace QLDB
} // namespace QtAws
