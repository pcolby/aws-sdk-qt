// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetablerequest.h"
#include "deletetablerequest_p.h"
#include "deletetableresponse.h"
#include "keyspacesrequest_p.h"

namespace QtAws {
namespace Keyspaces {

/*!
 * \class QtAws::Keyspaces::DeleteTableRequest
 * \brief The DeleteTableRequest class provides an interface for Keyspaces DeleteTable requests.
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
 * \sa KeyspacesClient::deleteTable
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTableRequest::DeleteTableRequest(const DeleteTableRequest &other)
    : KeyspacesRequest(new DeleteTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTableRequest object.
 */
DeleteTableRequest::DeleteTableRequest()
    : KeyspacesRequest(new DeleteTableRequestPrivate(KeyspacesRequest::DeleteTableAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTableRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTableResponse(*this, reply);
}

/*!
 * \class QtAws::Keyspaces::DeleteTableRequestPrivate
 * \brief The DeleteTableRequestPrivate class provides private implementation for DeleteTableRequest.
 * \internal
 *
 * \inmodule QtAwsKeyspaces
 */

/*!
 * Constructs a DeleteTableRequestPrivate object for Keyspaces \a action,
 * with public implementation \a q.
 */
DeleteTableRequestPrivate::DeleteTableRequestPrivate(
    const KeyspacesRequest::Action action, DeleteTableRequest * const q)
    : KeyspacesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTableRequest
 * class' copy constructor.
 */
DeleteTableRequestPrivate::DeleteTableRequestPrivate(
    const DeleteTableRequestPrivate &other, DeleteTableRequest * const q)
    : KeyspacesRequestPrivate(other, q)
{

}

} // namespace Keyspaces
} // namespace QtAws
