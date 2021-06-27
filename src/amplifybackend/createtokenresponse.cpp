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

#include "createtokenresponse.h"
#include "createtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateTokenResponse
 * \brief The CreateTokenResponse class provides an interace for AmplifyBackend CreateToken responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createToken
 */

/*!
 * Constructs a CreateTokenResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTokenResponse::CreateTokenResponse(
        const CreateTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CreateTokenResponsePrivate(this), parent)
{
    setRequest(new CreateTokenRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTokenRequest * CreateTokenResponse::request() const
{
    return static_cast<const CreateTokenRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CreateToken \a response.
 */
void CreateTokenResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CreateTokenResponsePrivate
 * \brief The CreateTokenResponsePrivate class provides private implementation for CreateTokenResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateTokenResponsePrivate object with public implementation \a q.
 */
CreateTokenResponsePrivate::CreateTokenResponsePrivate(
    CreateTokenResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CreateToken response element from \a xml.
 */
void CreateTokenResponsePrivate::parseCreateTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTokenResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
