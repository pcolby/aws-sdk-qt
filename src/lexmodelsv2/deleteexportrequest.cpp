// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
