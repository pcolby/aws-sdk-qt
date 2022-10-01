// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
