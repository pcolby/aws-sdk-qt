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

#include "createexportrequest.h"
#include "createexportrequest_p.h"
#include "createexportresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateExportRequest
 * \brief The CreateExportRequest class provides an interface for LexModelsV2 CreateExport requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createExport
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExportRequest::CreateExportRequest(const CreateExportRequest &other)
    : LexModelsV2Request(new CreateExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExportRequest object.
 */
CreateExportRequest::CreateExportRequest()
    : LexModelsV2Request(new CreateExportRequestPrivate(LexModelsV2Request::CreateExportAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExportRequest::response(QNetworkReply * const reply) const
{
    return new CreateExportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateExportRequestPrivate
 * \brief The CreateExportRequestPrivate class provides private implementation for CreateExportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateExportRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateExportRequestPrivate::CreateExportRequestPrivate(
    const LexModelsV2Request::Action action, CreateExportRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExportRequest
 * class' copy constructor.
 */
CreateExportRequestPrivate::CreateExportRequestPrivate(
    const CreateExportRequestPrivate &other, CreateExportRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
