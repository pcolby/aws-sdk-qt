/*
    Copyright 2013-2018 Paul Colby

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

#include "listinstancefleetsresponse.h"
#include "listinstancefleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ListInstanceFleetsResponse
 * \brief The ListInstanceFleetsResponse class provides an interace for EMR ListInstanceFleets responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::listInstanceFleets
 */

/*!
 * Constructs a ListInstanceFleetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInstanceFleetsResponse::ListInstanceFleetsResponse(
        const ListInstanceFleetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListInstanceFleetsResponsePrivate(this), parent)
{
    setRequest(new ListInstanceFleetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInstanceFleetsRequest * ListInstanceFleetsResponse::request() const
{
    Q_D(const ListInstanceFleetsResponse);
    return static_cast<const ListInstanceFleetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR ListInstanceFleets \a response.
 */
void ListInstanceFleetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListInstanceFleetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::ListInstanceFleetsResponsePrivate
 * \brief The ListInstanceFleetsResponsePrivate class provides private implementation for ListInstanceFleetsResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ListInstanceFleetsResponsePrivate object with public implementation \a q.
 */
ListInstanceFleetsResponsePrivate::ListInstanceFleetsResponsePrivate(
    ListInstanceFleetsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR ListInstanceFleets response element from \a xml.
 */
void ListInstanceFleetsResponsePrivate::parseListInstanceFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInstanceFleetsResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
