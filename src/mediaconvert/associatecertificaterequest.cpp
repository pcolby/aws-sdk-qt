// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
