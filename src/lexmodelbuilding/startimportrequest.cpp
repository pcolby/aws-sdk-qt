// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startimportrequest.h"
#include "startimportrequest_p.h"
#include "startimportresponse.h"
#include "lexmodelbuildingrequest_p.h"

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::StartImportRequest
 * \brief The StartImportRequest class provides an interface for LexModelBuilding StartImport requests.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::startImport
 */

/*!
 * Constructs a copy of \a other.
 */
StartImportRequest::StartImportRequest(const StartImportRequest &other)
    : LexModelBuildingRequest(new StartImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartImportRequest object.
 */
StartImportRequest::StartImportRequest()
    : LexModelBuildingRequest(new StartImportRequestPrivate(LexModelBuildingRequest::StartImportAction, this))
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
 * \class QtAws::LexModelBuilding::StartImportRequestPrivate
 * \brief The StartImportRequestPrivate class provides private implementation for StartImportRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a StartImportRequestPrivate object for LexModelBuilding \a action,
 * with public implementation \a q.
 */
StartImportRequestPrivate::StartImportRequestPrivate(
    const LexModelBuildingRequest::Action action, StartImportRequest * const q)
    : LexModelBuildingRequestPrivate(action, q)
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
    : LexModelBuildingRequestPrivate(other, q)
{

}

} // namespace LexModelBuilding
} // namespace QtAws
