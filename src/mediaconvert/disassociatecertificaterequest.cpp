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

#include "disassociatecertificaterequest.h"
#include "disassociatecertificaterequest_p.h"
#include "disassociatecertificateresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DisassociateCertificateRequest
 * \brief The DisassociateCertificateRequest class provides an interface for MediaConvert DisassociateCertificate requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::disassociateCertificate
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateCertificateRequest::DisassociateCertificateRequest(const DisassociateCertificateRequest &other)
    : MediaConvertRequest(new DisassociateCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateCertificateRequest object.
 */
DisassociateCertificateRequest::DisassociateCertificateRequest()
    : MediaConvertRequest(new DisassociateCertificateRequestPrivate(MediaConvertRequest::DisassociateCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateCertificateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateCertificateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateCertificateResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::DisassociateCertificateRequestPrivate
 * \brief The DisassociateCertificateRequestPrivate class provides private implementation for DisassociateCertificateRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a DisassociateCertificateRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
DisassociateCertificateRequestPrivate::DisassociateCertificateRequestPrivate(
    const MediaConvertRequest::Action action, DisassociateCertificateRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateCertificateRequest
 * class' copy constructor.
 */
DisassociateCertificateRequestPrivate::DisassociateCertificateRequestPrivate(
    const DisassociateCertificateRequestPrivate &other, DisassociateCertificateRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
