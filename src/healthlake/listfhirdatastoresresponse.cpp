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
