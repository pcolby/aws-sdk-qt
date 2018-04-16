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

#include "closeinstancepublicportsrequest.h"
#include "closeinstancepublicportsrequest_p.h"
#include "closeinstancepublicportsresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::CloseInstancePublicPortsRequest
 *
 * \brief The CloseInstancePublicPortsRequest class provides an interface for Lightsail CloseInstancePublicPorts requests.
 *
 * \ingroup Lightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, SSD-based storage, data
 *  transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail servers through the
 *  Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 *
 * \sa LightsailClient::closeInstancePublicPorts
 */

/*!
 * @brief  Constructs a new CloseInstancePublicPortsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CloseInstancePublicPortsRequest::CloseInstancePublicPortsRequest(const CloseInstancePublicPortsRequest &other)
    : LightsailRequest(new CloseInstancePublicPortsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CloseInstancePublicPortsRequest object.
 */
CloseInstancePublicPortsRequest::CloseInstancePublicPortsRequest()
    : LightsailRequest(new CloseInstancePublicPortsRequestPrivate(LightsailRequest::CloseInstancePublicPortsAction, this))
{

}

/*!
 * \reimp
 */
bool CloseInstancePublicPortsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CloseInstancePublicPortsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CloseInstancePublicPortsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * CloseInstancePublicPortsRequest::response(QNetworkReply * const reply) const
{
    return new CloseInstancePublicPortsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CloseInstancePublicPortsRequestPrivate
 *
 * @brief  Private implementation for CloseInstancePublicPortsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CloseInstancePublicPortsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public CloseInstancePublicPortsRequest instance.
 */
CloseInstancePublicPortsRequestPrivate::CloseInstancePublicPortsRequestPrivate(
    const LightsailRequest::Action action, CloseInstancePublicPortsRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CloseInstancePublicPortsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CloseInstancePublicPortsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CloseInstancePublicPortsRequest instance.
 */
CloseInstancePublicPortsRequestPrivate::CloseInstancePublicPortsRequestPrivate(
    const CloseInstancePublicPortsRequestPrivate &other, CloseInstancePublicPortsRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
