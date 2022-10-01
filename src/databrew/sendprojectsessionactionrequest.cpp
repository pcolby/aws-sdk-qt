// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendprojectsessionactionrequest.h"
#include "sendprojectsessionactionrequest_p.h"
#include "sendprojectsessionactionresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::SendProjectSessionActionRequest
 * \brief The SendProjectSessionActionRequest class provides an interface for DataBrew SendProjectSessionAction requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::sendProjectSessionAction
 */

/*!
 * Constructs a copy of \a other.
 */
SendProjectSessionActionRequest::SendProjectSessionActionRequest(const SendProjectSessionActionRequest &other)
    : DataBrewRequest(new SendProjectSessionActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendProjectSessionActionRequest object.
 */
SendProjectSessionActionRequest::SendProjectSessionActionRequest()
    : DataBrewRequest(new SendProjectSessionActionRequestPrivate(DataBrewRequest::SendProjectSessionActionAction, this))
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
 * \class QtAws::DataBrew::SendProjectSessionActionRequestPrivate
 * \brief The SendProjectSessionActionRequestPrivate class provides private implementation for SendProjectSessionActionRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a SendProjectSessionActionRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
SendProjectSessionActionRequestPrivate::SendProjectSessionActionRequestPrivate(
    const DataBrewRequest::Action action, SendProjectSessionActionRequest * const q)
    : DataBrewRequestPrivate(action, q)
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
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
