// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
