// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendenvironmentresponse.h"
#include "getbackendenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::GetBackendEnvironmentResponse
 * \brief The GetBackendEnvironmentResponse class provides an interace for Amplify GetBackendEnvironment responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::getBackendEnvironment
 */

/*!
 * Constructs a GetBackendEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendEnvironmentResponse::GetBackendEnvironmentResponse(
        const GetBackendEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new GetBackendEnvironmentResponsePrivate(this), parent)
{
    setRequest(new GetBackendEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendEnvironmentRequest * GetBackendEnvironmentResponse::request() const
{
    Q_D(const GetBackendEnvironmentResponse);
    return static_cast<const GetBackendEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify GetBackendEnvironment \a response.
 */
void GetBackendEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::GetBackendEnvironmentResponsePrivate
 * \brief The GetBackendEnvironmentResponsePrivate class provides private implementation for GetBackendEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a GetBackendEnvironmentResponsePrivate object with public implementation \a q.
 */
GetBackendEnvironmentResponsePrivate::GetBackendEnvironmentResponsePrivate(
    GetBackendEnvironmentResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify GetBackendEnvironment response element from \a xml.
 */
void GetBackendEnvironmentResponsePrivate::parseGetBackendEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
