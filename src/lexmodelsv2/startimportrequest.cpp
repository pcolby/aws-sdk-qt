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
