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

#include "getblueprintsrequest.h"
#include "getblueprintsrequest_p.h"
#include "getblueprintsresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetBlueprintsRequest
 *
 * \brief The GetBlueprintsRequest class encapsulates Lightsail GetBlueprints requests.
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
 * \sa LightsailClient::getBlueprints
 */

/*!
 * @brief  Constructs a new GetBlueprintsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBlueprintsRequest::GetBlueprintsRequest(const GetBlueprintsRequest &other)
    : LightsailRequest(new GetBlueprintsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetBlueprintsRequest object.
 */
GetBlueprintsRequest::GetBlueprintsRequest()
    : LightsailRequest(new GetBlueprintsRequestPrivate(LightsailRequest::GetBlueprintsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBlueprintsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetBlueprintsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBlueprintsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LightsailClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBlueprintsRequest::response(QNetworkReply * const reply) const
{
    return new GetBlueprintsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetBlueprintsRequestPrivate
 *
 * @brief  Private implementation for GetBlueprintsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetBlueprintsRequestPrivate object.
 *
 * @param  action  Lightsail action being performed.
 * @param  q       Pointer to this object's public GetBlueprintsRequest instance.
 */
GetBlueprintsRequestPrivate::GetBlueprintsRequestPrivate(
    const LightsailRequest::Action action, GetBlueprintsRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetBlueprintsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBlueprintsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBlueprintsRequest instance.
 */
GetBlueprintsRequestPrivate::GetBlueprintsRequestPrivate(
    const GetBlueprintsRequestPrivate &other, GetBlueprintsRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
