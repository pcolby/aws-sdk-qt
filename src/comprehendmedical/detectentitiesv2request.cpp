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

#include "detectentitiesv2request.h"
#include "detectentitiesv2request_p.h"
#include "detectentitiesv2response.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DetectEntitiesV2Request
 * \brief The DetectEntitiesV2Request class provides an interface for ComprehendMedical DetectEntitiesV2 requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::detectEntitiesV2
 */

/*!
 * Constructs a copy of \a other.
 */
DetectEntitiesV2Request::DetectEntitiesV2Request(const DetectEntitiesV2Request &other)
    : ComprehendMedicalRequest(new DetectEntitiesV2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectEntitiesV2Request object.
 */
DetectEntitiesV2Request::DetectEntitiesV2Request()
    : ComprehendMedicalRequest(new DetectEntitiesV2RequestPrivate(ComprehendMedicalRequest::DetectEntitiesV2Action, this))
{

}

/*!
 * \reimp
 */
bool DetectEntitiesV2Request::isValid() const
{
    return false;
}


/*!
 * Returns a DetectEntitiesV2Response object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectEntitiesV2Request::response(QNetworkReply * const reply) const
{
    return new DetectEntitiesV2Response(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::DetectEntitiesV2RequestPrivate
 * \brief The DetectEntitiesV2RequestPrivate class provides private implementation for DetectEntitiesV2Request.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DetectEntitiesV2RequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
DetectEntitiesV2RequestPrivate::DetectEntitiesV2RequestPrivate(
    const ComprehendMedicalRequest::Action action, DetectEntitiesV2Request * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectEntitiesV2Request
 * class' copy constructor.
 */
DetectEntitiesV2RequestPrivate::DetectEntitiesV2RequestPrivate(
    const DetectEntitiesV2RequestPrivate &other, DetectEntitiesV2Request * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
