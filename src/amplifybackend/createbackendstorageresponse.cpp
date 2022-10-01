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

#include "createbackendstorageresponse.h"
#include "createbackendstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendStorageResponse
 * \brief The CreateBackendStorageResponse class provides an interace for AmplifyBackend CreateBackendStorage responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendStorage
 */

/*!
 * Constructs a CreateBackendStorageResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackendStorageResponse::CreateBackendStorageResponse(
        const CreateBackendStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CreateBackendStorageResponsePrivate(this), parent)
{
    setRequest(new CreateBackendStorageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackendStorageRequest * CreateBackendStorageResponse::request() const
{
    Q_D(const CreateBackendStorageResponse);
    return static_cast<const CreateBackendStorageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CreateBackendStorage \a response.
 */
void CreateBackendStorageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackendStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendStorageResponsePrivate
 * \brief The CreateBackendStorageResponsePrivate class provides private implementation for CreateBackendStorageResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendStorageResponsePrivate object with public implementation \a q.
 */
CreateBackendStorageResponsePrivate::CreateBackendStorageResponsePrivate(
    CreateBackendStorageResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CreateBackendStorage response element from \a xml.
 */
void CreateBackendStorageResponsePrivate::parseCreateBackendStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackendStorageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
