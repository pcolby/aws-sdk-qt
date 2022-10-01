// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackendenvironmentresponse.h"
#include "deletebackendenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::DeleteBackendEnvironmentResponse
 * \brief The DeleteBackendEnvironmentResponse class provides an interace for Amplify DeleteBackendEnvironment responses.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 *
 * \sa AmplifyClient::deleteBackendEnvironment
 */

/*!
 * Constructs a DeleteBackendEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackendEnvironmentResponse::DeleteBackendEnvironmentResponse(
        const DeleteBackendEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyResponse(new DeleteBackendEnvironmentResponsePrivate(this), parent)
{
    setRequest(new DeleteBackendEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackendEnvironmentRequest * DeleteBackendEnvironmentResponse::request() const
{
    Q_D(const DeleteBackendEnvironmentResponse);
    return static_cast<const DeleteBackendEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amplify DeleteBackendEnvironment \a response.
 */
void DeleteBackendEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackendEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amplify::DeleteBackendEnvironmentResponsePrivate
 * \brief The DeleteBackendEnvironmentResponsePrivate class provides private implementation for DeleteBackendEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a DeleteBackendEnvironmentResponsePrivate object with public implementation \a q.
 */
DeleteBackendEnvironmentResponsePrivate::DeleteBackendEnvironmentResponsePrivate(
    DeleteBackendEnvironmentResponse * const q) : AmplifyResponsePrivate(q)
{

}

/*!
 * Parses a Amplify DeleteBackendEnvironment response element from \a xml.
 */
void DeleteBackendEnvironmentResponsePrivate::parseDeleteBackendEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackendEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amplify
} // namespace QtAws
