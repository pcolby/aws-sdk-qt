/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listnamedqueriesrequest.h"
#include "listnamedqueriesrequest_p.h"
#include "listnamedqueriesresponse.h"
#include "athenarequest_p.h"

namespace QtAws {
namespace Athena {

/*!
 * \class QtAws::Athena::ListNamedQueriesRequest
 *
 * \brief The ListNamedQueriesRequest class provides an interface for Athena ListNamedQueries requests.
 *
 * \ingroup Athena
 *
 *  Amazon Athena is an interactive query service that lets you use standard SQL to analyze data directly in Amazon S3. You
 *  can point Athena at your data in Amazon S3 and run ad-hoc queries and get results in seconds. Athena is serverless, so
 *  there is no infrastructure to set up or manage. You pay only for the queries you run. Athena scales
 *  automatically—executing queries in parallel—so results are fast, even with large datasets and complex queries. For more
 *  information, see <a href="http://docs.aws.amazon.com/athena/latest/ug/what-is.html">What is Amazon Athena</a> in the
 *  <i>Amazon Athena User
 * 
 *  Guide</i>>
 * 
 *  For code samples using the AWS SDK for Java, see <a
 *  href="http://docs.aws.amazon.com/athena/latest/ug/code-samples.html">Examples and Code Samples</a> in the <i>Amazon
 *  Athena User
 *
 * \sa AthenaClient::listNamedQueries
 */

/*!
 * @brief  Constructs a new ListNamedQueriesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListNamedQueriesRequest::ListNamedQueriesRequest(const ListNamedQueriesRequest &other)
    : AthenaRequest(new ListNamedQueriesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListNamedQueriesRequest object.
 */
ListNamedQueriesRequest::ListNamedQueriesRequest()
    : AthenaRequest(new ListNamedQueriesRequestPrivate(AthenaRequest::ListNamedQueriesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNamedQueriesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListNamedQueriesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListNamedQueriesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  AthenaClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNamedQueriesRequest::response(QNetworkReply * const reply) const
{
    return new ListNamedQueriesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListNamedQueriesRequestPrivate
 *
 * @brief  Private implementation for ListNamedQueriesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListNamedQueriesRequestPrivate object.
 *
 * @param  action  Athena action being performed.
 * @param  q       Pointer to this object's public ListNamedQueriesRequest instance.
 */
ListNamedQueriesRequestPrivate::ListNamedQueriesRequestPrivate(
    const AthenaRequest::Action action, ListNamedQueriesRequest * const q)
    : AthenaRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListNamedQueriesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListNamedQueriesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListNamedQueriesRequest instance.
 */
ListNamedQueriesRequestPrivate::ListNamedQueriesRequestPrivate(
    const ListNamedQueriesRequestPrivate &other, ListNamedQueriesRequest * const q)
    : AthenaRequestPrivate(other, q)
{

}

} // namespace Athena
} // namespace QtAws
