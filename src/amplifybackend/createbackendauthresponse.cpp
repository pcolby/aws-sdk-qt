// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackendauthresponse.h"
#include "createbackendauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAuthResponse
 * \brief The CreateBackendAuthResponse class provides an interace for AmplifyBackend CreateBackendAuth responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendAuth
 */

/*!
 * Constructs a CreateBackendAuthResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackendAuthResponse::CreateBackendAuthResponse(
        const CreateBackendAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CreateBackendAuthResponsePrivate(this), parent)
{
    setRequest(new CreateBackendAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackendAuthRequest * CreateBackendAuthResponse::request() const
{
    Q_D(const CreateBackendAuthResponse);
    return static_cast<const CreateBackendAuthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CreateBackendAuth \a response.
 */
void CreateBackendAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackendAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAuthResponsePrivate
 * \brief The CreateBackendAuthResponsePrivate class provides private implementation for CreateBackendAuthResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendAuthResponsePrivate object with public implementation \a q.
 */
CreateBackendAuthResponsePrivate::CreateBackendAuthResponsePrivate(
    CreateBackendAuthResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CreateBackendAuth response element from \a xml.
 */
void CreateBackendAuthResponsePrivate::parseCreateBackendAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackendAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
