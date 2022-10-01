// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefhirdatastoreresponse.h"
#include "describefhirdatastoreresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::DescribeFHIRDatastoreResponse
 * \brief The DescribeFHIRDatastoreResponse class provides an interace for HealthLake DescribeFHIRDatastore responses.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::describeFHIRDatastore
 */

/*!
 * Constructs a DescribeFHIRDatastoreResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFHIRDatastoreResponse::DescribeFHIRDatastoreResponse(
        const DescribeFHIRDatastoreRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthLakeResponse(new DescribeFHIRDatastoreResponsePrivate(this), parent)
{
    setRequest(new DescribeFHIRDatastoreRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFHIRDatastoreRequest * DescribeFHIRDatastoreResponse::request() const
{
    Q_D(const DescribeFHIRDatastoreResponse);
    return static_cast<const DescribeFHIRDatastoreRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful HealthLake DescribeFHIRDatastore \a response.
 */
void DescribeFHIRDatastoreResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFHIRDatastoreResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::HealthLake::DescribeFHIRDatastoreResponsePrivate
 * \brief The DescribeFHIRDatastoreResponsePrivate class provides private implementation for DescribeFHIRDatastoreResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a DescribeFHIRDatastoreResponsePrivate object with public implementation \a q.
 */
DescribeFHIRDatastoreResponsePrivate::DescribeFHIRDatastoreResponsePrivate(
    DescribeFHIRDatastoreResponse * const q) : HealthLakeResponsePrivate(q)
{

}

/*!
 * Parses a HealthLake DescribeFHIRDatastore response element from \a xml.
 */
void DescribeFHIRDatastoreResponsePrivate::parseDescribeFHIRDatastoreResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFHIRDatastoreResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace HealthLake
} // namespace QtAws
