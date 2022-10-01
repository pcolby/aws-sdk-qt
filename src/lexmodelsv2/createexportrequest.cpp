// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
