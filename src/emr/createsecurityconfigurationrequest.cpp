// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsecurityconfigurationrequest.h"
#include "createsecurityconfigurationrequest_p.h"
#include "createsecurityconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::CreateSecurityConfigurationRequest
 * \brief The CreateSecurityConfigurationRequest class provides an interface for Emr CreateSecurityConfiguration requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::createSecurityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSecurityConfigurationRequest::CreateSecurityConfigurationRequest(const CreateSecurityConfigurationRequest &other)
    : EmrRequest(new CreateSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSecurityConfigurationRequest object.
 */
CreateSecurityConfigurationRequest::CreateSecurityConfigurationRequest()
    : EmrRequest(new CreateSecurityConfigurationRequestPrivate(EmrRequest::CreateSecurityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSecurityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSecurityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateSecurityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::CreateSecurityConfigurationRequestPrivate
 * \brief The CreateSecurityConfigurationRequestPrivate class provides private implementation for CreateSecurityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a CreateSecurityConfigurationRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
CreateSecurityConfigurationRequestPrivate::CreateSecurityConfigurationRequestPrivate(
    const EmrRequest::Action action, CreateSecurityConfigurationRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSecurityConfigurationRequest
 * class' copy constructor.
 */
CreateSecurityConfigurationRequestPrivate::CreateSecurityConfigurationRequestPrivate(
    const CreateSecurityConfigurationRequestPrivate &other, CreateSecurityConfigurationRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
