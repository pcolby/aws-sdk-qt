/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
