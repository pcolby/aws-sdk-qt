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

#include "createdistributionrequest.h"
#include "createdistributionrequest_p.h"
#include "createdistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::CreateDistributionRequest
 *
 * \brief The CreateDistributionRequest class encapsulates CloudFront CreateDistribution requests.
 *
 * \ingroup CloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::createDistribution
 */

/*!
 * @brief  Constructs a new CreateDistributionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDistributionRequest::CreateDistributionRequest(const CreateDistributionRequest &other)
    : CloudFrontRequest(new CreateDistributionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateDistributionRequest object.
 */
CreateDistributionRequest::CreateDistributionRequest()
    : CloudFrontRequest(new CreateDistributionRequestPrivate(CloudFrontRequest::CreateDistributionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDistributionRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateDistributionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDistributionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDistributionRequest::response(QNetworkReply * const reply) const
{
    return new CreateDistributionResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateDistributionRequestPrivate
 *
 * @brief  Private implementation for CreateDistributionRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDistributionRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public CreateDistributionRequest instance.
 */
CreateDistributionRequestPrivate::CreateDistributionRequestPrivate(
    const CloudFrontRequest::Action action, CreateDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateDistributionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDistributionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDistributionRequest instance.
 */
CreateDistributionRequestPrivate::CreateDistributionRequestPrivate(
    const CreateDistributionRequestPrivate &other, CreateDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
