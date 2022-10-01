// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putblockpublicaccessconfigurationrequest.h"
#include "putblockpublicaccessconfigurationrequest_p.h"
#include "putblockpublicaccessconfigurationresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::PutBlockPublicAccessConfigurationRequest
 * \brief The PutBlockPublicAccessConfigurationRequest class provides an interface for Emr PutBlockPublicAccessConfiguration requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putBlockPublicAccessConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutBlockPublicAccessConfigurationRequest::PutBlockPublicAccessConfigurationRequest(const PutBlockPublicAccessConfigurationRequest &other)
    : EmrRequest(new PutBlockPublicAccessConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBlockPublicAccessConfigurationRequest object.
 */
PutBlockPublicAccessConfigurationRequest::PutBlockPublicAccessConfigurationRequest()
    : EmrRequest(new PutBlockPublicAccessConfigurationRequestPrivate(EmrRequest::PutBlockPublicAccessConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutBlockPublicAccessConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBlockPublicAccessConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBlockPublicAccessConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBlockPublicAccessConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::PutBlockPublicAccessConfigurationRequestPrivate
 * \brief The PutBlockPublicAccessConfigurationRequestPrivate class provides private implementation for PutBlockPublicAccessConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a PutBlockPublicAccessConfigurationRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
PutBlockPublicAccessConfigurationRequestPrivate::PutBlockPublicAccessConfigurationRequestPrivate(
    const EmrRequest::Action action, PutBlockPublicAccessConfigurationRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBlockPublicAccessConfigurationRequest
 * class' copy constructor.
 */
PutBlockPublicAccessConfigurationRequestPrivate::PutBlockPublicAccessConfigurationRequestPrivate(
    const PutBlockPublicAccessConfigurationRequestPrivate &other, PutBlockPublicAccessConfigurationRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
