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

#include "deleteexportrequest.h"
#include "deleteexportrequest_p.h"
#include "deleteexportresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteExportRequest
 * \brief The DeleteExportRequest class provides an interface for LexModelsV2 DeleteExport requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteExport
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExportRequest::DeleteExportRequest(const DeleteExportRequest &other)
    : LexModelsV2Request(new DeleteExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExportRequest object.
 */
DeleteExportRequest::DeleteExportRequest()
    : LexModelsV2Request(new DeleteExportRequestPrivate(LexModelsV2Request::DeleteExportAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExportRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteExportRequestPrivate
 * \brief The DeleteExportRequestPrivate class provides private implementation for DeleteExportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteExportRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteExportRequestPrivate::DeleteExportRequestPrivate(
    const LexModelsV2Request::Action action, DeleteExportRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExportRequest
 * class' copy constructor.
 */
DeleteExportRequestPrivate::DeleteExportRequestPrivate(
    const DeleteExportRequestPrivate &other, DeleteExportRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
