// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesecurityconfigurationrequest.h"
#include "deletesecurityconfigurationrequest_p.h"
#include "deletesecurityconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DeleteSecurityConfigurationRequest
 * \brief The DeleteSecurityConfigurationRequest class provides an interface for Emr DeleteSecurityConfiguration requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::deleteSecurityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSecurityConfigurationRequest::DeleteSecurityConfigurationRequest(const DeleteSecurityConfigurationRequest &other)
    : EmrRequest(new DeleteSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSecurityConfigurationRequest object.
 */
DeleteSecurityConfigurationRequest::DeleteSecurityConfigurationRequest()
    : EmrRequest(new DeleteSecurityConfigurationRequestPrivate(EmrRequest::DeleteSecurityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSecurityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSecurityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSecurityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DeleteSecurityConfigurationRequestPrivate
 * \brief The DeleteSecurityConfigurationRequestPrivate class provides private implementation for DeleteSecurityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DeleteSecurityConfigurationRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DeleteSecurityConfigurationRequestPrivate::DeleteSecurityConfigurationRequestPrivate(
    const EmrRequest::Action action, DeleteSecurityConfigurationRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSecurityConfigurationRequest
 * class' copy constructor.
 */
DeleteSecurityConfigurationRequestPrivate::DeleteSecurityConfigurationRequestPrivate(
    const DeleteSecurityConfigurationRequestPrivate &other, DeleteSecurityConfigurationRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
