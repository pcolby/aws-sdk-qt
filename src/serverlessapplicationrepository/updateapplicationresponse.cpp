// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationresponse.h"
#include "updateapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServerlessApplicationRepository {

/*!
 * \class QtAws::ServerlessApplicationRepository::UpdateApplicationResponse
 * \brief The UpdateApplicationResponse class provides an interace for ServerlessApplicationRepository UpdateApplication responses.
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
 * \sa ServerlessApplicationRepositoryClient::updateApplication
 */

/*!
 * Constructs a UpdateApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApplicationResponse::UpdateApplicationResponse(
        const UpdateApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServerlessApplicationRepositoryResponse(new UpdateApplicationResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApplicationRequest * UpdateApplicationResponse::request() const
{
    Q_D(const UpdateApplicationResponse);
    return static_cast<const UpdateApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ServerlessApplicationRepository UpdateApplication \a response.
 */
void UpdateApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ServerlessApplicationRepository::UpdateApplicationResponsePrivate
 * \brief The UpdateApplicationResponsePrivate class provides private implementation for UpdateApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsServerlessApplicationRepository
 */

/*!
 * Constructs a UpdateApplicationResponsePrivate object with public implementation \a q.
 */
UpdateApplicationResponsePrivate::UpdateApplicationResponsePrivate(
    UpdateApplicationResponse * const q) : ServerlessApplicationRepositoryResponsePrivate(q)
{

}

/*!
 * Parses a ServerlessApplicationRepository UpdateApplication response element from \a xml.
 */
void UpdateApplicationResponsePrivate::parseUpdateApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ServerlessApplicationRepository
} // namespace QtAws
