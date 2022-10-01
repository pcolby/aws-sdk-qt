// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeploymentresponse.h"
#include "createdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateDeploymentResponse
 * \brief The CreateDeploymentResponse class provides an interace for Amplify CreateDeployment responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::createDeployment
 */

/*!
 * Constructs a CreateDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeploymentResponse::CreateDeploymentResponse(
        const CreateDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new CreateDeploymentResponsePrivate(this), parent)
{
    setRequest(new CreateDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeploymentRequest * CreateDeploymentResponse::request() const
{
    Q_D(const CreateDeploymentResponse);
    return static_cast<const CreateDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify CreateDeployment \a response.
 */
void CreateDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::CreateDeploymentResponsePrivate
 * \brief The CreateDeploymentResponsePrivate class provides private implementation for CreateDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateDeploymentResponsePrivate object with public implementation \a q.
 */
CreateDeploymentResponsePrivate::CreateDeploymentResponsePrivate(
    CreateDeploymentResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify CreateDeployment response element from \a xml.
 */
void CreateDeploymentResponsePrivate::parseCreateDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
