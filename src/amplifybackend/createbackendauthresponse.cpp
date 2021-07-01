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
