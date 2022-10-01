// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetasktemplaterequest.h"
#include "updatetasktemplaterequest_p.h"
#include "updatetasktemplateresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateTaskTemplateRequest
 * \brief The UpdateTaskTemplateRequest class provides an interface for Connect UpdateTaskTemplate requests.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::updateTaskTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTaskTemplateRequest::UpdateTaskTemplateRequest(const UpdateTaskTemplateRequest &other)
    : ConnectRequest(new UpdateTaskTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTaskTemplateRequest object.
 */
UpdateTaskTemplateRequest::UpdateTaskTemplateRequest()
    : ConnectRequest(new UpdateTaskTemplateRequestPrivate(ConnectRequest::UpdateTaskTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTaskTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTaskTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTaskTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTaskTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::UpdateTaskTemplateRequestPrivate
 * \brief The UpdateTaskTemplateRequestPrivate class provides private implementation for UpdateTaskTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateTaskTemplateRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
UpdateTaskTemplateRequestPrivate::UpdateTaskTemplateRequestPrivate(
    const ConnectRequest::Action action, UpdateTaskTemplateRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTaskTemplateRequest
 * class' copy constructor.
 */
UpdateTaskTemplateRequestPrivate::UpdateTaskTemplateRequestPrivate(
    const UpdateTaskTemplateRequestPrivate &other, UpdateTaskTemplateRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
