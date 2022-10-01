// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectentitiesrequest.h"
#include "detectentitiesrequest_p.h"
#include "detectentitiesresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DetectEntitiesRequest
 * \brief The DetectEntitiesRequest class provides an interface for ComprehendMedical DetectEntities requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::detectEntities
 */

/*!
 * Constructs a copy of \a other.
 */
DetectEntitiesRequest::DetectEntitiesRequest(const DetectEntitiesRequest &other)
    : ComprehendMedicalRequest(new DetectEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectEntitiesRequest object.
 */
DetectEntitiesRequest::DetectEntitiesRequest()
    : ComprehendMedicalRequest(new DetectEntitiesRequestPrivate(ComprehendMedicalRequest::DetectEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool DetectEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new DetectEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::DetectEntitiesRequestPrivate
 * \brief The DetectEntitiesRequestPrivate class provides private implementation for DetectEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DetectEntitiesRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
DetectEntitiesRequestPrivate::DetectEntitiesRequestPrivate(
    const ComprehendMedicalRequest::Action action, DetectEntitiesRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectEntitiesRequest
 * class' copy constructor.
 */
DetectEntitiesRequestPrivate::DetectEntitiesRequestPrivate(
    const DetectEntitiesRequestPrivate &other, DetectEntitiesRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
