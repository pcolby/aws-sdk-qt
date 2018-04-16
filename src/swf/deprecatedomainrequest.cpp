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

#include "deprecatedomainrequest.h"
#include "deprecatedomainrequest_p.h"
#include "deprecatedomainresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace SWF {

/*!
 * \class QtAws::SWF::DeprecateDomainRequest
 *
 * \brief The DeprecateDomainRequest class provides an interface for SWF DeprecateDomain requests.
 *
 * \ingroup SWF
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="http://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SWFClient::deprecateDomain
 */

/*!
 * @brief  Constructs a new DeprecateDomainRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeprecateDomainRequest::DeprecateDomainRequest(const DeprecateDomainRequest &other)
    : SWFRequest(new DeprecateDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeprecateDomainRequest object.
 */
DeprecateDomainRequest::DeprecateDomainRequest()
    : SWFRequest(new DeprecateDomainRequestPrivate(SWFRequest::DeprecateDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DeprecateDomainRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeprecateDomainResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeprecateDomainResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SWFClient::send
 */
QtAws::Core::AwsAbstractResponse * DeprecateDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeprecateDomainResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeprecateDomainRequestPrivate
 *
 * @brief  Private implementation for DeprecateDomainRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeprecateDomainRequestPrivate object.
 *
 * @param  action  SWF action being performed.
 * @param  q       Pointer to this object's public DeprecateDomainRequest instance.
 */
DeprecateDomainRequestPrivate::DeprecateDomainRequestPrivate(
    const SWFRequest::Action action, DeprecateDomainRequest * const q)
    : SWFRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeprecateDomainRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeprecateDomainRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeprecateDomainRequest instance.
 */
DeprecateDomainRequestPrivate::DeprecateDomainRequestPrivate(
    const DeprecateDomainRequestPrivate &other, DeprecateDomainRequest * const q)
    : SWFRequestPrivate(other, q)
{

}

} // namespace SWF
} // namespace QtAws
