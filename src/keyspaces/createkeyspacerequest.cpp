// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createkeyspacerequest.h"
#include "createkeyspacerequest_p.h"
#include "createkeyspaceresponse.h"
#include "keyspacesrequest_p.h"

namespace QtAws {
namespace Keyspaces {

/*!
 * \class QtAws::Keyspaces::CreateKeyspaceRequest
 * \brief The CreateKeyspaceRequest class provides an interface for Keyspaces CreateKeyspace requests.
 *
 * \inmodule QtAwsKeyspaces
 *
 *  Amazon Keyspaces (for Apache Cassandra) is a scalable, highly available, and managed Apache Cassandra-compatible
 *  database service. Amazon Keyspaces makes it easy to migrate, run, and scale Cassandra workloads in the Amazon Web
 *  Services Cloud. With just a few clicks on the Amazon Web Services Management Console or a few lines of code, you can
 *  create keyspaces and tables in Amazon Keyspaces, without deploying any infrastructure or installing software.
 * 
 *  </p
 * 
 *  In addition to supporting Cassandra Query Language (CQL) requests via open-source Cassandra drivers, Amazon Keyspaces
 *  supports data definition language (DDL) operations to manage keyspaces and tables using the Amazon Web Services SDK and
 *  CLI. This API reference describes the supported DDL operations in
 * 
 *  detail>
 * 
 *  For the list of all supported CQL APIs, see <a
 *  href="https://docs.aws.amazon.com/keyspaces/latest/devguide/cassandra-apis.html">Supported Cassandra APIs, operations,
 *  and data types in Amazon Keyspaces</a> in the <i>Amazon Keyspaces Developer
 * 
 *  Guide</i>>
 * 
 *  To learn how Amazon Keyspaces API actions are recorded with CloudTrail, see <a
 *  href="https://docs.aws.amazon.com/keyspaces/latest/devguide/logging-using-cloudtrail.html#service-name-info-in-cloudtrail">Amazon
 *  Keyspaces information in CloudTrail</a> in the <i>Amazon Keyspaces Developer
 * 
 *  Guide</i>>
 * 
 *  For more information about Amazon Web Services APIs, for example how to implement retry logic or how to sign Amazon Web
 *  Services API requests, see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">Amazon Web Services
 *  APIs</a> in the <i>General
 *
 * \sa KeyspacesClient::createKeyspace
 */

/*!
 * Constructs a copy of \a other.
 */
CreateKeyspaceRequest::CreateKeyspaceRequest(const CreateKeyspaceRequest &other)
    : KeyspacesRequest(new CreateKeyspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateKeyspaceRequest object.
 */
CreateKeyspaceRequest::CreateKeyspaceRequest()
    : KeyspacesRequest(new CreateKeyspaceRequestPrivate(KeyspacesRequest::CreateKeyspaceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateKeyspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateKeyspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateKeyspaceRequest::response(QNetworkReply * const reply) const
{
    return new CreateKeyspaceResponse(*this, reply);
}

/*!
 * \class QtAws::Keyspaces::CreateKeyspaceRequestPrivate
 * \brief The CreateKeyspaceRequestPrivate class provides private implementation for CreateKeyspaceRequest.
 * \internal
 *
 * \inmodule QtAwsKeyspaces
 */

/*!
 * Constructs a CreateKeyspaceRequestPrivate object for Keyspaces \a action,
 * with public implementation \a q.
 */
CreateKeyspaceRequestPrivate::CreateKeyspaceRequestPrivate(
    const KeyspacesRequest::Action action, CreateKeyspaceRequest * const q)
    : KeyspacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateKeyspaceRequest
 * class' copy constructor.
 */
CreateKeyspaceRequestPrivate::CreateKeyspaceRequestPrivate(
    const CreateKeyspaceRequestPrivate &other, CreateKeyspaceRequest * const q)
    : KeyspacesRequestPrivate(other, q)
{

}

} // namespace Keyspaces
} // namespace QtAws
