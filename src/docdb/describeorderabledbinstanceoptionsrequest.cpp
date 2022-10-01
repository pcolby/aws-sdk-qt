// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeorderabledbinstanceoptionsrequest.h"
#include "describeorderabledbinstanceoptionsrequest_p.h"
#include "describeorderabledbinstanceoptionsresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeOrderableDBInstanceOptionsRequest
 * \brief The DescribeOrderableDBInstanceOptionsRequest class provides an interface for DocDb DescribeOrderableDBInstanceOptions requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeOrderableDBInstanceOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeOrderableDBInstanceOptionsRequest::DescribeOrderableDBInstanceOptionsRequest(const DescribeOrderableDBInstanceOptionsRequest &other)
    : DocDbRequest(new DescribeOrderableDBInstanceOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeOrderableDBInstanceOptionsRequest object.
 */
DescribeOrderableDBInstanceOptionsRequest::DescribeOrderableDBInstanceOptionsRequest()
    : DocDbRequest(new DescribeOrderableDBInstanceOptionsRequestPrivate(DocDbRequest::DescribeOrderableDBInstanceOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeOrderableDBInstanceOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeOrderableDBInstanceOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOrderableDBInstanceOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOrderableDBInstanceOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeOrderableDBInstanceOptionsRequestPrivate
 * \brief The DescribeOrderableDBInstanceOptionsRequestPrivate class provides private implementation for DescribeOrderableDBInstanceOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeOrderableDBInstanceOptionsRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeOrderableDBInstanceOptionsRequestPrivate::DescribeOrderableDBInstanceOptionsRequestPrivate(
    const DocDbRequest::Action action, DescribeOrderableDBInstanceOptionsRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeOrderableDBInstanceOptionsRequest
 * class' copy constructor.
 */
DescribeOrderableDBInstanceOptionsRequestPrivate::DescribeOrderableDBInstanceOptionsRequestPrivate(
    const DescribeOrderableDBInstanceOptionsRequestPrivate &other, DescribeOrderableDBInstanceOptionsRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
