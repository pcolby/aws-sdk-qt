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

#include "createcloudformationchangesetrequest.h"
#include "createcloudformationchangesetrequest_p.h"
#include "createcloudformationchangesetresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::CreateCloudFormationChangeSetRequest
 *
 * \brief The CreateCloudFormationChangeSetRequest class encapsulates ServerlessApplicationRepository CreateCloudFormationChangeSet requests.
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
 * \sa ServerlessApplicationRepositoryClient::createCloudFormationChangeSet
 */

/*!
 * @brief  Constructs a new CreateCloudFormationChangeSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCloudFormationChangeSetRequest::CreateCloudFormationChangeSetRequest(const CreateCloudFormationChangeSetRequest &other)
    : ServerlessApplicationRepositoryRequest(new CreateCloudFormationChangeSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new CreateCloudFormationChangeSetRequest object.
 */
CreateCloudFormationChangeSetRequest::CreateCloudFormationChangeSetRequest()
    : ServerlessApplicationRepositoryRequest(new CreateCloudFormationChangeSetRequestPrivate(ServerlessApplicationRepositoryRequest::CreateCloudFormationChangeSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCloudFormationChangeSetRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an CreateCloudFormationChangeSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCloudFormationChangeSetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServerlessApplicationRepositoryClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCloudFormationChangeSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateCloudFormationChangeSetResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  CreateCloudFormationChangeSetRequestPrivate
 *
 * @brief  Private implementation for CreateCloudFormationChangeSetRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateCloudFormationChangeSetRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed.
 * @param  q       Pointer to this object's public CreateCloudFormationChangeSetRequest instance.
 */
CreateCloudFormationChangeSetRequestPrivate::CreateCloudFormationChangeSetRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, CreateCloudFormationChangeSetRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new CreateCloudFormationChangeSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCloudFormationChangeSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCloudFormationChangeSetRequest instance.
 */
CreateCloudFormationChangeSetRequestPrivate::CreateCloudFormationChangeSetRequestPrivate(
    const CreateCloudFormationChangeSetRequestPrivate &other, CreateCloudFormationChangeSetRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
