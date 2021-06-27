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

#include "deletefhirdatastoreresponse.h"
#include "deletefhirdatastoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::DeleteFHIRDatastoreResponse
 * \brief The DeleteFHIRDatastoreResponse class provides an interace for HealthLake DeleteFHIRDatastore responses.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::deleteFHIRDatastore
 */

/*!
 * Constructs a DeleteFHIRDatastoreResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFHIRDatastoreResponse::DeleteFHIRDatastoreResponse(
        const DeleteFHIRDatastoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthLakeResponse(new DeleteFHIRDatastoreResponsePrivate(this), parent)
{
    setRequest(new DeleteFHIRDatastoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFHIRDatastoreRequest * DeleteFHIRDatastoreResponse::request() const
{
    return static_cast<const DeleteFHIRDatastoreRequest *>(HealthLakeResponse::request());
}

/*!
 * \reimp
 * Parses a successful HealthLake DeleteFHIRDatastore \a response.
 */
void DeleteFHIRDatastoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFHIRDatastoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::HealthLake::DeleteFHIRDatastoreResponsePrivate
 * \brief The DeleteFHIRDatastoreResponsePrivate class provides private implementation for DeleteFHIRDatastoreResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a DeleteFHIRDatastoreResponsePrivate object with public implementation \a q.
 */
DeleteFHIRDatastoreResponsePrivate::DeleteFHIRDatastoreResponsePrivate(
    DeleteFHIRDatastoreResponse * const q) : HealthLakeResponsePrivate(q)
{

}

/*!
 * Parses a HealthLake DeleteFHIRDatastore response element from \a xml.
 */
void DeleteFHIRDatastoreResponsePrivate::parseDeleteFHIRDatastoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFHIRDatastoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace HealthLake
} // namespace QtAws
