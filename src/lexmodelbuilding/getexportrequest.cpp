// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexportrequest.h"
#include "getexportrequest_p.h"
#include "getexportresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetExportRequest
 * \brief The GetExportRequest class provides an interface for LexModelBuilding GetExport requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getExport
 */

/*!
 * Constructs a copy of \a other.
 */
GetExportRequest::GetExportRequest(const GetExportRequest &other)
    : LexModelBuildingRequest(new GetExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExportRequest object.
 */
GetExportRequest::GetExportRequest()
    : LexModelBuildingRequest(new GetExportRequestPrivate(LexModelBuildingRequest::GetExportAction, this))
{

}

/*!
 * \reimp
 */
bool GetExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExportRequest::response(QNetworkReply * const reply) const
{
    return new GetExportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetExportRequestPrivate
 * \brief The GetExportRequestPrivate class provides private implementation for GetExportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetExportRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetExportRequestPrivate::GetExportRequestPrivate(
    const LexModelBuildingRequest::Action action, GetExportRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExportRequest
 * class' copy constructor.
 */
GetExportRequestPrivate::GetExportRequestPrivate(
    const GetExportRequestPrivate &other, GetExportRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
