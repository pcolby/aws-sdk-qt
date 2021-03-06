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

#include "sendprojectsessionactionrequest.h"
#include "sendprojectsessionactionrequest_p.h"
#include "sendprojectsessionactionresponse.h"
#include "gluedatabrewrequest_p.h"

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::SendProjectSessionActionRequest
 * \brief The SendProjectSessionActionRequest class provides an interface for GlueDataBrew SendProjectSessionAction requests.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 *
 * \sa GlueDataBrewClient::sendProjectSessionAction
 */

/*!
 * Constructs a copy of \a other.
 */
SendProjectSessionActionRequest::SendProjectSessionActionRequest(const SendProjectSessionActionRequest &other)
    : GlueDataBrewRequest(new SendProjectSessionActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendProjectSessionActionRequest object.
 */
SendProjectSessionActionRequest::SendProjectSessionActionRequest()
    : GlueDataBrewRequest(new SendProjectSessionActionRequestPrivate(GlueDataBrewRequest::SendProjectSessionActionAction, this))
{

}

/*!
 * \reimp
 */
bool SendProjectSessionActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendProjectSessionActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendProjectSessionActionRequest::response(QNetworkReply * const reply) const
{
    return new SendProjectSessionActionResponse(*this, reply);
}

/*!
 * \class QtAws::GlueDataBrew::SendProjectSessionActionRequestPrivate
 * \brief The SendProjectSessionActionRequestPrivate class provides private implementation for SendProjectSessionActionRequest.
 * \internal
 *
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a SendProjectSessionActionRequestPrivate object for GlueDataBrew \a action,
 * with public implementation \a q.
 */
SendProjectSessionActionRequestPrivate::SendProjectSessionActionRequestPrivate(
    const GlueDataBrewRequest::Action action, SendProjectSessionActionRequest * const q)
    : GlueDataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendProjectSessionActionRequest
 * class' copy constructor.
 */
SendProjectSessionActionRequestPrivate::SendProjectSessionActionRequestPrivate(
    const SendProjectSessionActionRequestPrivate &other, SendProjectSessionActionRequest * const q)
    : GlueDataBrewRequestPrivate(other, q)
{

}

} // namespace GlueDataBrew
} // namespace QtAws
