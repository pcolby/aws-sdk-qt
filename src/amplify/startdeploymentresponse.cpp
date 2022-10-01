// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdeploymentresponse.h"
#include "startdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::StartDeploymentResponse
 * \brief The StartDeploymentResponse class provides an interace for Amplify StartDeployment responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::startDeployment
 */

/*!
 * Constructs a StartDeploymentResponse object for \a reply to \a request, with parent \a parent.
 */
StartDeploymentResponse::StartDeploymentResponse(
        const StartDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new StartDeploymentResponsePrivate(this), parent)
{
    setRequest(new StartDeploymentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDeploymentRequest * StartDeploymentResponse::request() const
{
    Q_D(const StartDeploymentResponse);
    return static_cast<const StartDeploymentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify StartDeployment \a response.
 */
void StartDeploymentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::StartDeploymentResponsePrivate
 * \brief The StartDeploymentResponsePrivate class provides private implementation for StartDeploymentResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a StartDeploymentResponsePrivate object with public implementation \a q.
 */
StartDeploymentResponsePrivate::StartDeploymentResponsePrivate(
    StartDeploymentResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify StartDeployment response element from \a xml.
 */
void StartDeploymentResponsePrivate::parseStartDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDeploymentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
