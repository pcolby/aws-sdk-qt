// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesscontrolconfigurationrequest.h"
#include "createaccesscontrolconfigurationrequest_p.h"
#include "createaccesscontrolconfigurationresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateAccessControlConfigurationRequest
 * \brief The CreateAccessControlConfigurationRequest class provides an interface for Kendra CreateAccessControlConfiguration requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createAccessControlConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAccessControlConfigurationRequest::CreateAccessControlConfigurationRequest(const CreateAccessControlConfigurationRequest &other)
    : KendraRequest(new CreateAccessControlConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAccessControlConfigurationRequest object.
 */
CreateAccessControlConfigurationRequest::CreateAccessControlConfigurationRequest()
    : KendraRequest(new CreateAccessControlConfigurationRequestPrivate(KendraRequest::CreateAccessControlConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAccessControlConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAccessControlConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAccessControlConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccessControlConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateAccessControlConfigurationRequestPrivate
 * \brief The CreateAccessControlConfigurationRequestPrivate class provides private implementation for CreateAccessControlConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateAccessControlConfigurationRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateAccessControlConfigurationRequestPrivate::CreateAccessControlConfigurationRequestPrivate(
    const KendraRequest::Action action, CreateAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAccessControlConfigurationRequest
 * class' copy constructor.
 */
CreateAccessControlConfigurationRequestPrivate::CreateAccessControlConfigurationRequestPrivate(
    const CreateAccessControlConfigurationRequestPrivate &other, CreateAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
