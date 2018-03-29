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

#include "defineanalysisschemerequest.h"
#include "defineanalysisschemerequest_p.h"
#include "defineanalysisschemeresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/**
 * @class  DefineAnalysisSchemeRequest
 *
 * @brief  Implements CloudSearch DefineAnalysisScheme requests.
 *
 * @see    CloudSearchClient::defineAnalysisScheme
 */

/**
 * @brief  Constructs a new DefineAnalysisSchemeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DefineAnalysisSchemeRequest::DefineAnalysisSchemeRequest(const DefineAnalysisSchemeRequest &other)
    : CloudSearchRequest(new DefineAnalysisSchemeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DefineAnalysisSchemeRequest object.
 */
DefineAnalysisSchemeRequest::DefineAnalysisSchemeRequest()
    : CloudSearchRequest(new DefineAnalysisSchemeRequestPrivate(CloudSearchRequest::DefineAnalysisSchemeAction, this))
{

}

bool DefineAnalysisSchemeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DefineAnalysisSchemeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DefineAnalysisSchemeResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
QtAws::Core::AwsAbstractResponse * DefineAnalysisSchemeRequest::response(QNetworkReply * const reply) const
{
    return new DefineAnalysisSchemeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DefineAnalysisSchemeRequestPrivate
 *
 * @brief  Private implementation for DefineAnalysisSchemeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DefineAnalysisSchemeRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public DefineAnalysisSchemeRequest instance.
 */
DefineAnalysisSchemeRequestPrivate::DefineAnalysisSchemeRequestPrivate(
    const CloudSearchRequest::Action action, DefineAnalysisSchemeRequest * const q)
    : DefineAnalysisSchemePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DefineAnalysisSchemeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DefineAnalysisSchemeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DefineAnalysisSchemeRequest instance.
 */
DefineAnalysisSchemeRequestPrivate::DefineAnalysisSchemeRequestPrivate(
    const DefineAnalysisSchemeRequestPrivate &other, DefineAnalysisSchemeRequest * const q)
    : DefineAnalysisSchemePrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
