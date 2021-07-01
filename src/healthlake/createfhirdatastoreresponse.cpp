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

#include "createfhirdatastoreresponse.h"
#include "createfhirdatastoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::CreateFHIRDatastoreResponse
 * \brief The CreateFHIRDatastoreResponse class provides an interace for HealthLake CreateFHIRDatastore responses.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::createFHIRDatastore
 */

/*!
 * Constructs a CreateFHIRDatastoreResponse object for \a reply to \a request, with parent \a parent.
 */
CreateFHIRDatastoreResponse::CreateFHIRDatastoreResponse(
        const CreateFHIRDatastoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthLakeResponse(new CreateFHIRDatastoreResponsePrivate(this), parent)
{
    setRequest(new CreateFHIRDatastoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateFHIRDatastoreRequest * CreateFHIRDatastoreResponse::request() const
{
    Q_D(const CreateFHIRDatastoreResponse);
    return static_cast<const CreateFHIRDatastoreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful HealthLake CreateFHIRDatastore \a response.
 */
void CreateFHIRDatastoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateFHIRDatastoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::HealthLake::CreateFHIRDatastoreResponsePrivate
 * \brief The CreateFHIRDatastoreResponsePrivate class provides private implementation for CreateFHIRDatastoreResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a CreateFHIRDatastoreResponsePrivate object with public implementation \a q.
 */
CreateFHIRDatastoreResponsePrivate::CreateFHIRDatastoreResponsePrivate(
    CreateFHIRDatastoreResponse * const q) : HealthLakeResponsePrivate(q)
{

}

/*!
 * Parses a HealthLake CreateFHIRDatastore response element from \a xml.
 */
void CreateFHIRDatastoreResponsePrivate::parseCreateFHIRDatastoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFHIRDatastoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace HealthLake
} // namespace QtAws
