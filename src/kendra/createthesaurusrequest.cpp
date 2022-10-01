// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createthesaurusrequest.h"
#include "createthesaurusrequest_p.h"
#include "createthesaurusresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateThesaurusRequest
 * \brief The CreateThesaurusRequest class provides an interface for Kendra CreateThesaurus requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createThesaurus
 */

/*!
 * Constructs a copy of \a other.
 */
CreateThesaurusRequest::CreateThesaurusRequest(const CreateThesaurusRequest &other)
    : KendraRequest(new CreateThesaurusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateThesaurusRequest object.
 */
CreateThesaurusRequest::CreateThesaurusRequest()
    : KendraRequest(new CreateThesaurusRequestPrivate(KendraRequest::CreateThesaurusAction, this))
{

}

/*!
 * \reimp
 */
bool CreateThesaurusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateThesaurusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateThesaurusRequest::response(QNetworkReply * const reply) const
{
    return new CreateThesaurusResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateThesaurusRequestPrivate
 * \brief The CreateThesaurusRequestPrivate class provides private implementation for CreateThesaurusRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateThesaurusRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateThesaurusRequestPrivate::CreateThesaurusRequestPrivate(
    const KendraRequest::Action action, CreateThesaurusRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateThesaurusRequest
 * class' copy constructor.
 */
CreateThesaurusRequestPrivate::CreateThesaurusRequestPrivate(
    const CreateThesaurusRequestPrivate &other, CreateThesaurusRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
