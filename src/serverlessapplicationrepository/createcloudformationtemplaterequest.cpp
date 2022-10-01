// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcloudformationtemplaterequest.h"
#include "createcloudformationtemplaterequest_p.h"
#include "createcloudformationtemplateresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::CreateCloudFormationTemplateRequest
 * \brief The CreateCloudFormationTemplateRequest class provides an interface for ServerlessApplicationRepository CreateCloudFormationTemplate requests.
 *
 * \inmodule QtAwsServerlessApplicationRepository
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
 * \sa ServerlessApplicationRepositoryClient::createCloudFormationTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCloudFormationTemplateRequest::CreateCloudFormationTemplateRequest(const CreateCloudFormationTemplateRequest &other)
    : ServerlessApplicationRepositoryRequest(new CreateCloudFormationTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCloudFormationTemplateRequest object.
 */
CreateCloudFormationTemplateRequest::CreateCloudFormationTemplateRequest()
    : ServerlessApplicationRepositoryRequest(new CreateCloudFormationTemplateRequestPrivate(ServerlessApplicationRepositoryRequest::CreateCloudFormationTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCloudFormationTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCloudFormationTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCloudFormationTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateCloudFormationTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::ServerlessApplicationRepository::CreateCloudFormationTemplateRequestPrivate
 * \brief The CreateCloudFormationTemplateRequestPrivate class provides private implementation for CreateCloudFormationTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * Constructs a CreateCloudFormationTemplateRequestPrivate object for ServerlessApplicationRepository \a action,
 * with public implementation \a q.
 */
CreateCloudFormationTemplateRequestPrivate::CreateCloudFormationTemplateRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, CreateCloudFormationTemplateRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCloudFormationTemplateRequest
 * class' copy constructor.
 */
CreateCloudFormationTemplateRequestPrivate::CreateCloudFormationTemplateRequestPrivate(
    const CreateCloudFormationTemplateRequestPrivate &other, CreateCloudFormationTemplateRequest * const q)
    : ServerlessApplicationRepositoryRequestPrivate(other, q)
{

}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
