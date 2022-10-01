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

#include "importbackendauthresponse.h"
#include "importbackendauthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ImportBackendAuthResponse
 * \brief The ImportBackendAuthResponse class provides an interace for AmplifyBackend ImportBackendAuth responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::importBackendAuth
 */

/*!
 * Constructs a ImportBackendAuthResponse object for \a reply to \a request, with parent \a parent.
 */
ImportBackendAuthResponse::ImportBackendAuthResponse(
        const ImportBackendAuthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new ImportBackendAuthResponsePrivate(this), parent)
{
    setRequest(new ImportBackendAuthRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportBackendAuthRequest * ImportBackendAuthResponse::request() const
{
    Q_D(const ImportBackendAuthResponse);
    return static_cast<const ImportBackendAuthRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend ImportBackendAuth \a response.
 */
void ImportBackendAuthResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportBackendAuthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::ImportBackendAuthResponsePrivate
 * \brief The ImportBackendAuthResponsePrivate class provides private implementation for ImportBackendAuthResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ImportBackendAuthResponsePrivate object with public implementation \a q.
 */
ImportBackendAuthResponsePrivate::ImportBackendAuthResponsePrivate(
    ImportBackendAuthResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend ImportBackendAuth response element from \a xml.
 */
void ImportBackendAuthResponsePrivate::parseImportBackendAuthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportBackendAuthResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
