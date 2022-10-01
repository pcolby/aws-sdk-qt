// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationconfigurationtemplaterequest.h"
#include "deletereplicationconfigurationtemplaterequest_p.h"
#include "deletereplicationconfigurationtemplateresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DeleteReplicationConfigurationTemplateRequest
 * \brief The DeleteReplicationConfigurationTemplateRequest class provides an interface for Mgn DeleteReplicationConfigurationTemplate requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::deleteReplicationConfigurationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationConfigurationTemplateRequest::DeleteReplicationConfigurationTemplateRequest(const DeleteReplicationConfigurationTemplateRequest &other)
    : MgnRequest(new DeleteReplicationConfigurationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationConfigurationTemplateRequest object.
 */
DeleteReplicationConfigurationTemplateRequest::DeleteReplicationConfigurationTemplateRequest()
    : MgnRequest(new DeleteReplicationConfigurationTemplateRequestPrivate(MgnRequest::DeleteReplicationConfigurationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationConfigurationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationConfigurationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationConfigurationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationConfigurationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::DeleteReplicationConfigurationTemplateRequestPrivate
 * \brief The DeleteReplicationConfigurationTemplateRequestPrivate class provides private implementation for DeleteReplicationConfigurationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DeleteReplicationConfigurationTemplateRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
DeleteReplicationConfigurationTemplateRequestPrivate::DeleteReplicationConfigurationTemplateRequestPrivate(
    const MgnRequest::Action action, DeleteReplicationConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationConfigurationTemplateRequest
 * class' copy constructor.
 */
DeleteReplicationConfigurationTemplateRequestPrivate::DeleteReplicationConfigurationTemplateRequestPrivate(
    const DeleteReplicationConfigurationTemplateRequestPrivate &other, DeleteReplicationConfigurationTemplateRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
