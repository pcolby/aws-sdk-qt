// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeenginedefaultclusterparametersrequest.h"
#include "describeenginedefaultclusterparametersrequest_p.h"
#include "describeenginedefaultclusterparametersresponse.h"
#include "docdbrequest_p.h"

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeEngineDefaultClusterParametersRequest
 * \brief The DescribeEngineDefaultClusterParametersRequest class provides an interface for DocDb DescribeEngineDefaultClusterParameters requests.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeEngineDefaultClusterParameters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEngineDefaultClusterParametersRequest::DescribeEngineDefaultClusterParametersRequest(const DescribeEngineDefaultClusterParametersRequest &other)
    : DocDbRequest(new DescribeEngineDefaultClusterParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEngineDefaultClusterParametersRequest object.
 */
DescribeEngineDefaultClusterParametersRequest::DescribeEngineDefaultClusterParametersRequest()
    : DocDbRequest(new DescribeEngineDefaultClusterParametersRequestPrivate(DocDbRequest::DescribeEngineDefaultClusterParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEngineDefaultClusterParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEngineDefaultClusterParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEngineDefaultClusterParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEngineDefaultClusterParametersResponse(*this, reply);
}

/*!
 * \class QtAws::DocDb::DescribeEngineDefaultClusterParametersRequestPrivate
 * \brief The DescribeEngineDefaultClusterParametersRequestPrivate class provides private implementation for DescribeEngineDefaultClusterParametersRequest.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeEngineDefaultClusterParametersRequestPrivate object for DocDb \a action,
 * with public implementation \a q.
 */
DescribeEngineDefaultClusterParametersRequestPrivate::DescribeEngineDefaultClusterParametersRequestPrivate(
    const DocDbRequest::Action action, DescribeEngineDefaultClusterParametersRequest * const q)
    : DocDbRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEngineDefaultClusterParametersRequest
 * class' copy constructor.
 */
DescribeEngineDefaultClusterParametersRequestPrivate::DescribeEngineDefaultClusterParametersRequestPrivate(
    const DescribeEngineDefaultClusterParametersRequestPrivate &other, DescribeEngineDefaultClusterParametersRequest * const q)
    : DocDbRequestPrivate(other, q)
{

}

} // namespace DocDb
} // namespace QtAws
