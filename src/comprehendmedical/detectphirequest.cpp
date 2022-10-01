// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectphirequest.h"
#include "detectphirequest_p.h"
#include "detectphiresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DetectPHIRequest
 * \brief The DetectPHIRequest class provides an interface for ComprehendMedical DetectPHI requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::detectPHI
 */

/*!
 * Constructs a copy of \a other.
 */
DetectPHIRequest::DetectPHIRequest(const DetectPHIRequest &other)
    : ComprehendMedicalRequest(new DetectPHIRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectPHIRequest object.
 */
DetectPHIRequest::DetectPHIRequest()
    : ComprehendMedicalRequest(new DetectPHIRequestPrivate(ComprehendMedicalRequest::DetectPHIAction, this))
{

}

/*!
 * \reimp
 */
bool DetectPHIRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectPHIResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectPHIRequest::response(QNetworkReply * const reply) const
{
    return new DetectPHIResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::DetectPHIRequestPrivate
 * \brief The DetectPHIRequestPrivate class provides private implementation for DetectPHIRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DetectPHIRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
DetectPHIRequestPrivate::DetectPHIRequestPrivate(
    const ComprehendMedicalRequest::Action action, DetectPHIRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectPHIRequest
 * class' copy constructor.
 */
DetectPHIRequestPrivate::DetectPHIRequestPrivate(
    const DetectPHIRequestPrivate &other, DetectPHIRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
