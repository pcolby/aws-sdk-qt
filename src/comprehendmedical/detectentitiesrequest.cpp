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
