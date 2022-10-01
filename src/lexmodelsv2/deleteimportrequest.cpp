// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteimportrequest.h"
#include "deleteimportrequest_p.h"
#include "deleteimportresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteImportRequest
 * \brief The DeleteImportRequest class provides an interface for LexModelsV2 DeleteImport requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteImport
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteImportRequest::DeleteImportRequest(const DeleteImportRequest &other)
    : LexModelsV2Request(new DeleteImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteImportRequest object.
 */
DeleteImportRequest::DeleteImportRequest()
    : LexModelsV2Request(new DeleteImportRequestPrivate(LexModelsV2Request::DeleteImportAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteImportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteImportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteImportRequest::response(QNetworkReply * const reply) const
{
    return new DeleteImportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::DeleteImportRequestPrivate
 * \brief The DeleteImportRequestPrivate class provides private implementation for DeleteImportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteImportRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
DeleteImportRequestPrivate::DeleteImportRequestPrivate(
    const LexModelsV2Request::Action action, DeleteImportRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteImportRequest
 * class' copy constructor.
 */
DeleteImportRequestPrivate::DeleteImportRequestPrivate(
    const DeleteImportRequestPrivate &other, DeleteImportRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
