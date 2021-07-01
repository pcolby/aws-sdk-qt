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

#include "createbackendresponse.h"
#include "createbackendresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendResponse
 * \brief The CreateBackendResponse class provides an interace for AmplifyBackend CreateBackend responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackend
 */

/*!
 * Constructs a CreateBackendResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackendResponse::CreateBackendResponse(
        const CreateBackendRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CreateBackendResponsePrivate(this), parent)
{
    setRequest(new CreateBackendRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackendRequest * CreateBackendResponse::request() const
{
    Q_D(const CreateBackendResponse);
    return static_cast<const CreateBackendRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CreateBackend \a response.
 */
void CreateBackendResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackendResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendResponsePrivate
 * \brief The CreateBackendResponsePrivate class provides private implementation for CreateBackendResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendResponsePrivate object with public implementation \a q.
 */
CreateBackendResponsePrivate::CreateBackendResponsePrivate(
    CreateBackendResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CreateBackend response element from \a xml.
 */
void CreateBackendResponsePrivate::parseCreateBackendResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackendResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
