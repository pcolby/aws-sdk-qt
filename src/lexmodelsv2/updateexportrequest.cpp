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

#include "updateexportrequest.h"
#include "updateexportrequest_p.h"
#include "updateexportresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateExportRequest
 * \brief The UpdateExportRequest class provides an interface for LexModelsV2 UpdateExport requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateExport
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateExportRequest::UpdateExportRequest(const UpdateExportRequest &other)
    : LexModelsV2Request(new UpdateExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateExportRequest object.
 */
UpdateExportRequest::UpdateExportRequest()
    : LexModelsV2Request(new UpdateExportRequestPrivate(LexModelsV2Request::UpdateExportAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateExportRequest::response(QNetworkReply * const reply) const
{
    return new UpdateExportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::UpdateExportRequestPrivate
 * \brief The UpdateExportRequestPrivate class provides private implementation for UpdateExportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateExportRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
UpdateExportRequestPrivate::UpdateExportRequestPrivate(
    const LexModelsV2Request::Action action, UpdateExportRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateExportRequest
 * class' copy constructor.
 */
UpdateExportRequestPrivate::UpdateExportRequestPrivate(
    const UpdateExportRequestPrivate &other, UpdateExportRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
