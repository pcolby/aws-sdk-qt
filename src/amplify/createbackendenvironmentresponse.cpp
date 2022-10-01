// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackendenvironmentresponse.h"
#include "createbackendenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::CreateBackendEnvironmentResponse
 * \brief The CreateBackendEnvironmentResponse class provides an interace for Amplify CreateBackendEnvironment responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::createBackendEnvironment
 */

/*!
 * Constructs a CreateBackendEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackendEnvironmentResponse::CreateBackendEnvironmentResponse(
        const CreateBackendEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new CreateBackendEnvironmentResponsePrivate(this), parent)
{
    setRequest(new CreateBackendEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackendEnvironmentRequest * CreateBackendEnvironmentResponse::request() const
{
    Q_D(const CreateBackendEnvironmentResponse);
    return static_cast<const CreateBackendEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify CreateBackendEnvironment \a response.
 */
void CreateBackendEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackendEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::CreateBackendEnvironmentResponsePrivate
 * \brief The CreateBackendEnvironmentResponsePrivate class provides private implementation for CreateBackendEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a CreateBackendEnvironmentResponsePrivate object with public implementation \a q.
 */
CreateBackendEnvironmentResponsePrivate::CreateBackendEnvironmentResponsePrivate(
    CreateBackendEnvironmentResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify CreateBackendEnvironment response element from \a xml.
 */
void CreateBackendEnvironmentResponsePrivate::parseCreateBackendEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackendEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
