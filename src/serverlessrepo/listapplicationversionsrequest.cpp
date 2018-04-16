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

#include "listapplicationversionsrequest.h"
#include "listapplicationversionsrequest_p.h"
#include "listapplicationversionsresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::ListApplicationVersionsRequest
 *
 * \brief The ListApplicationVersionsRequest class encapsulates ServerlessApplicationRepository ListApplicationVersions requests.
 *
 * \ingroup ServerlessApplicationRepository
 *
 *  The AWS Serverless Application Repository makes it easy for developers and enterprises to quickly find and deploy
 *  serverless applications in the AWS Cloud. For more information about serverless applications, see Serverless Computing
 *  and Applications on the AWS website.</p><p>The AWS Serverless Application Repository is deeply integrated with the AWS
 *  Lambda console, so that developers of all levels can get started with serverless computing without needing to learn
 *  anything new. You can use category keywords to browse for applications such as web and mobile backends, data processing
 *  applications, or chatbots. You can also search for applications by name, publisher, or event source. To use an
 *  application, you simply choose it, configure any required fields, and deploy it with a few clicks. </p><p>You can also
 *  easily publish applications, sharing them publicly with the community at large, or privately within your team or across
 *  your organization. To publish a serverless application (or app), you can use the AWS Management Console, AWS Command
 *  Line Interface (AWS CLI), or AWS SDKs to upload the code. Along with the code, you upload a simple manifest file, also
 *  known as the AWS Serverless Application Model (AWS SAM) template. For more information about AWS SAM, see AWS Serverless
 *  Application Model (AWS SAM) on the AWS Labs GitHub repository.</p><p>The AWS Serverless Application Repository Developer
 *  Guide contains more information about the two developer experiences available:</p><ul> <li>
 * 
 *  Consuming Applications – Browse for applications and view information about them, including source code and readme
 *  files. Also install, configure, and deploy applications of your choosing.
 * 
 *  </p
 * 
 *  Publishing Applications – Configure and upload applications to make them available to other developers, and publish new
 *  versions of applications.
 *
 * \sa ServerlessApplicationRepositoryClient::listApplicationVersions
 */

/*!
 * @brief  Constructs a new ListApplicationVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListApplicationVersionsRequest::ListApplicationVersionsRequest(const ListApplicationVersionsRequest &other)
    : ServerlessApplicationRepositoryRequest(new ListApplicationVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListApplicationVersionsRequest object.
 */
ListApplicationVersionsRequest::ListApplicationVersionsRequest()
    : ServerlessApplicationRepositoryRequest(new ListApplicationVersionsRequestPrivate(ServerlessApplicationRepositoryRequest::ListApplicationVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationVersionsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListApplicationVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListApplicationVersionsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServerlessApplicationRepositoryClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationVersionsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListApplicationVersionsRequestPrivate
 *
 * @brief  Private implementation for ListApplicationVersionsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListApplicationVersionsRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed.
 * @param  q       Pointer to this object's public ListApplicationVersionsRequest instance.
 */
ListApplicationVersionsRequestPrivate::ListApplicationVersionsRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, ListApplicationVersionsRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListApplicationVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListApplicationVersionsRequest instance.
 */
ListApplicationVersionsRequestPrivate::ListApplicationVersionsRequestPrivate(
    const ListApplicationVersionsRequestPrivate &other, ListApplicationVersionsRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
