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

#include "createbackendapiresponse.h"
#include "createbackendapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAPIResponse
 * \brief The CreateBackendAPIResponse class provides an interace for AmplifyBackend CreateBackendAPI responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendAPI
 */

/*!
 * Constructs a CreateBackendAPIResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackendAPIResponse::CreateBackendAPIResponse(
        const CreateBackendAPIRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CreateBackendAPIResponsePrivate(this), parent)
{
    setRequest(new CreateBackendAPIRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackendAPIRequest * CreateBackendAPIResponse::request() const
{
    return static_cast<const CreateBackendAPIRequest *>(AmplifyBackendResponse::request());
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CreateBackendAPI \a response.
 */
void CreateBackendAPIResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackendAPIResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAPIResponsePrivate
 * \brief The CreateBackendAPIResponsePrivate class provides private implementation for CreateBackendAPIResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendAPIResponsePrivate object with public implementation \a q.
 */
CreateBackendAPIResponsePrivate::CreateBackendAPIResponsePrivate(
    CreateBackendAPIResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CreateBackendAPI response element from \a xml.
 */
void CreateBackendAPIResponsePrivate::parseCreateBackendAPIResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackendAPIResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
