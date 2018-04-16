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

#include "describereportdefinitionsrequest.h"
#include "describereportdefinitionsrequest_p.h"
#include "describereportdefinitionsresponse.h"
#include "costandusagereportservicerequest_p.h"

namespace QtAws {
namespace CostandUsageReportService {

/*!
 * \class QtAws::CostandUsageReportService::DescribeReportDefinitionsRequest
 *
 * \brief The DescribeReportDefinitionsRequest class provides an interface for CostandUsageReportService DescribeReportDefinitions requests.
 *
 * \ingroup CostandUsageReportService
 *
 *
 * \sa CostandUsageReportServiceClient::describeReportDefinitions
 */

/*!
 * @brief  Constructs a new DescribeReportDefinitionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeReportDefinitionsRequest::DescribeReportDefinitionsRequest(const DescribeReportDefinitionsRequest &other)
    : CostandUsageReportServiceRequest(new DescribeReportDefinitionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeReportDefinitionsRequest object.
 */
DescribeReportDefinitionsRequest::DescribeReportDefinitionsRequest()
    : CostandUsageReportServiceRequest(new DescribeReportDefinitionsRequestPrivate(CostandUsageReportServiceRequest::DescribeReportDefinitionsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReportDefinitionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeReportDefinitionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeReportDefinitionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CostandUsageReportServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReportDefinitionsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReportDefinitionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeReportDefinitionsRequestPrivate
 *
 * @brief  Private implementation for DescribeReportDefinitionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeReportDefinitionsRequestPrivate object.
 *
 * @param  action  CostandUsageReportService action being performed.
 * @param  q       Pointer to this object's public DescribeReportDefinitionsRequest instance.
 */
DescribeReportDefinitionsRequestPrivate::DescribeReportDefinitionsRequestPrivate(
    const CostandUsageReportServiceRequest::Action action, DescribeReportDefinitionsRequest * const q)
    : CostandUsageReportServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeReportDefinitionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeReportDefinitionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeReportDefinitionsRequest instance.
 */
DescribeReportDefinitionsRequestPrivate::DescribeReportDefinitionsRequestPrivate(
    const DescribeReportDefinitionsRequestPrivate &other, DescribeReportDefinitionsRequest * const q)
    : CostandUsageReportServiceRequestPrivate(other, q)
{

}

} // namespace CostandUsageReportService
} // namespace QtAws
