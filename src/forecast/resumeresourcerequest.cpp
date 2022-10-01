// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resumeresourcerequest.h"
#include "resumeresourcerequest_p.h"
#include "resumeresourceresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ResumeResourceRequest
 * \brief The ResumeResourceRequest class provides an interface for Forecast ResumeResource requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::resumeResource
 */

/*!
 * Constructs a copy of \a other.
 */
ResumeResourceRequest::ResumeResourceRequest(const ResumeResourceRequest &other)
    : ForecastRequest(new ResumeResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResumeResourceRequest object.
 */
ResumeResourceRequest::ResumeResourceRequest()
    : ForecastRequest(new ResumeResourceRequestPrivate(ForecastRequest::ResumeResourceAction, this))
{

}

/*!
 * \reimp
 */
bool ResumeResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResumeResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResumeResourceRequest::response(QNetworkReply * const reply) const
{
    return new ResumeResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ResumeResourceRequestPrivate
 * \brief The ResumeResourceRequestPrivate class provides private implementation for ResumeResourceRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ResumeResourceRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ResumeResourceRequestPrivate::ResumeResourceRequestPrivate(
    const ForecastRequest::Action action, ResumeResourceRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResumeResourceRequest
 * class' copy constructor.
 */
ResumeResourceRequestPrivate::ResumeResourceRequestPrivate(
    const ResumeResourceRequestPrivate &other, ResumeResourceRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
