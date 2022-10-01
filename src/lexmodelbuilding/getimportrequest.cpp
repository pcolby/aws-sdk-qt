// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getimportrequest.h"
#include "getimportrequest_p.h"
#include "getimportresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetImportRequest
 * \brief The GetImportRequest class provides an interface for LexModelBuilding GetImport requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getImport
 */

/*!
 * Constructs a copy of \a other.
 */
GetImportRequest::GetImportRequest(const GetImportRequest &other)
    : LexModelBuildingRequest(new GetImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImportRequest object.
 */
GetImportRequest::GetImportRequest()
    : LexModelBuildingRequest(new GetImportRequestPrivate(LexModelBuildingRequest::GetImportAction, this))
{

}

/*!
 * \reimp
 */
bool GetImportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImportRequest::response(QNetworkReply * const reply) const
{
    return new GetImportResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelBuilding::GetImportRequestPrivate
 * \brief The GetImportRequestPrivate class provides private implementation for GetImportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetImportRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
GetImportRequestPrivate::GetImportRequestPrivate(
    const LexModelBuildingRequest::Action action, GetImportRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImportRequest
 * class' copy constructor.
 */
GetImportRequestPrivate::GetImportRequestPrivate(
    const GetImportRequestPrivate &other, GetImportRequest * const q)
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
