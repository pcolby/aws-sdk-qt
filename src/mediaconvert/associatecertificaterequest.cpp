/*
    Copyright 2013-2018 Paul Colby

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

#include "associatecertificaterequest.h"
#include "associatecertificaterequest_p.h"
#include "associatecertificateresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::AssociateCertificateRequest
 * \brief The AssociateCertificateRequest class provides an interface for MediaConvert AssociateCertificate requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::associateCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateCertificateRequest::AssociateCertificateRequest(const AssociateCertificateRequest &other)
    : MediaConvertRequest(new AssociateCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateCertificateRequest object.
 */
AssociateCertificateRequest::AssociateCertificateRequest()
    : MediaConvertRequest(new AssociateCertificateRequestPrivate(MediaConvertRequest::AssociateCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateCertificateRequest::response(QNetworkReply * const reply) const
{
    return new AssociateCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::AssociateCertificateRequestPrivate
 * \brief The AssociateCertificateRequestPrivate class provides private implementation for AssociateCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a AssociateCertificateRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
AssociateCertificateRequestPrivate::AssociateCertificateRequestPrivate(
    const MediaConvertRequest::Action action, AssociateCertificateRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateCertificateRequest
 * class' copy constructor.
 */
AssociateCertificateRequestPrivate::AssociateCertificateRequestPrivate(
    const AssociateCertificateRequestPrivate &other, AssociateCertificateRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
