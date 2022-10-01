// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DeleteFHIRDatastoreResponse);
    return static_cast<const DeleteFHIRDatastoreRequest *>(d->request);
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
