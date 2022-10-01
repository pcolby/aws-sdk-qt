// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startimportrequest.h"
#include "startimportrequest_p.h"
#include "startimportresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::StartImportRequest
 * \brief The StartImportRequest class provides an interface for LexModelsV2 StartImport requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::startImport
 */

/*!
 * Constructs a copy of \a other.
 */
StartImportRequest::StartImportRequest(const StartImportRequest &other)
    : LexModelsV2Request(new StartImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartImportRequest object.
 */
StartImportRequest::StartImportRequest()
    : LexModelsV2Request(new StartImportRequestPrivate(LexModelsV2Request::StartImportAction, this))
{

}

/*!
 * \reimp
 */
bool StartImportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartImportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartImportRequest::response(QNetworkReply * const reply) const
{
    return new StartImportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::StartImportRequestPrivate
 * \brief The StartImportRequestPrivate class provides private implementation for StartImportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a StartImportRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
StartImportRequestPrivate::StartImportRequestPrivate(
    const LexModelsV2Request::Action action, StartImportRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartImportRequest
 * class' copy constructor.
 */
StartImportRequestPrivate::StartImportRequestPrivate(
    const StartImportRequestPrivate &other, StartImportRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
