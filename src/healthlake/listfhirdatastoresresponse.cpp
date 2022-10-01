// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfhirdatastoresresponse.h"
#include "listfhirdatastoresresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::ListFHIRDatastoresResponse
 * \brief The ListFHIRDatastoresResponse class provides an interace for HealthLake ListFHIRDatastores responses.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::listFHIRDatastores
 */

/*!
 * Constructs a ListFHIRDatastoresResponse object for \a reply to \a request, with parent \a parent.
 */
ListFHIRDatastoresResponse::ListFHIRDatastoresResponse(
        const ListFHIRDatastoresRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : HealthLakeResponse(new ListFHIRDatastoresResponsePrivate(this), parent)
{
    setRequest(new ListFHIRDatastoresRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListFHIRDatastoresRequest * ListFHIRDatastoresResponse::request() const
{
    Q_D(const ListFHIRDatastoresResponse);
    return static_cast<const ListFHIRDatastoresRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful HealthLake ListFHIRDatastores \a response.
 */
void ListFHIRDatastoresResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListFHIRDatastoresResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::HealthLake::ListFHIRDatastoresResponsePrivate
 * \brief The ListFHIRDatastoresResponsePrivate class provides private implementation for ListFHIRDatastoresResponse.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a ListFHIRDatastoresResponsePrivate object with public implementation \a q.
 */
ListFHIRDatastoresResponsePrivate::ListFHIRDatastoresResponsePrivate(
    ListFHIRDatastoresResponse * const q) : HealthLakeResponsePrivate(q)
{

}

/*!
 * Parses a HealthLake ListFHIRDatastores response element from \a xml.
 */
void ListFHIRDatastoresResponsePrivate::parseListFHIRDatastoresResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFHIRDatastoresResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace HealthLake
} // namespace QtAws
