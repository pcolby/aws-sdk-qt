// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createintegrationassociationrequest.h"
#include "createintegrationassociationrequest_p.h"
#include "createintegrationassociationresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::CreateIntegrationAssociationRequest
 * \brief The CreateIntegrationAssociationRequest class provides an interface for Connect CreateIntegrationAssociation requests.
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
 * \sa ConnectClient::createIntegrationAssociation
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIntegrationAssociationRequest::CreateIntegrationAssociationRequest(const CreateIntegrationAssociationRequest &other)
    : ConnectRequest(new CreateIntegrationAssociationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIntegrationAssociationRequest object.
 */
CreateIntegrationAssociationRequest::CreateIntegrationAssociationRequest()
    : ConnectRequest(new CreateIntegrationAssociationRequestPrivate(ConnectRequest::CreateIntegrationAssociationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIntegrationAssociationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIntegrationAssociationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIntegrationAssociationRequest::response(QNetworkReply * const reply) const
{
    return new CreateIntegrationAssociationResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::CreateIntegrationAssociationRequestPrivate
 * \brief The CreateIntegrationAssociationRequestPrivate class provides private implementation for CreateIntegrationAssociationRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a CreateIntegrationAssociationRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
CreateIntegrationAssociationRequestPrivate::CreateIntegrationAssociationRequestPrivate(
    const ConnectRequest::Action action, CreateIntegrationAssociationRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIntegrationAssociationRequest
 * class' copy constructor.
 */
CreateIntegrationAssociationRequestPrivate::CreateIntegrationAssociationRequestPrivate(
    const CreateIntegrationAssociationRequestPrivate &other, CreateIntegrationAssociationRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
