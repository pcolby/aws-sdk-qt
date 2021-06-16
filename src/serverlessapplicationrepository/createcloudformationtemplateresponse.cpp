/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createcloudformationtemplateresponse.h"
#include "createcloudformationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::CreateCloudFormationTemplateResponse
 * \brief The CreateCloudFormationTemplateResponse class provides an interace for ServerlessApplicationRepository CreateCloudFormationTemplate responses.
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
 * Constructs a CreateCloudFormationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCloudFormationTemplateResponse::CreateCloudFormationTemplateResponse(
        const CreateCloudFormationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServerlessApplicationRepositoryResponse(new CreateCloudFormationTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateCloudFormationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCloudFormationTemplateRequest * CreateCloudFormationTemplateResponse::request() const
{
    Q_D(const CreateCloudFormationTemplateResponse);
    return static_cast<const CreateCloudFormationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServerlessApplicationRepository CreateCloudFormationTemplate \a response.
 */
void CreateCloudFormationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCloudFormationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServerlessApplicationRepository::CreateCloudFormationTemplateResponsePrivate
 * \brief The CreateCloudFormationTemplateResponsePrivate class provides private implementation for CreateCloudFormationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * Constructs a CreateCloudFormationTemplateResponsePrivate object with public implementation \a q.
 */
CreateCloudFormationTemplateResponsePrivate::CreateCloudFormationTemplateResponsePrivate(
    CreateCloudFormationTemplateResponse * const q) : ServerlessApplicationRepositoryResponsePrivate(q)
{

}

/*!
 * Parses a ServerlessApplicationRepository CreateCloudFormationTemplate response element from \a xml.
 */
void CreateCloudFormationTemplateResponsePrivate::parseCreateCloudFormationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCloudFormationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
