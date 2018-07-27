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

#include "addinstancefleetresponse.h"
#include "addinstancefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::AddInstanceFleetResponse
 * \brief The AddInstanceFleetResponse class provides an interace for EMR AddInstanceFleet responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::addInstanceFleet
 */

/*!
 * Constructs a AddInstanceFleetResponse object for \a reply to \a request, with parent \a parent.
 */
AddInstanceFleetResponse::AddInstanceFleetResponse(
        const AddInstanceFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new AddInstanceFleetResponsePrivate(this), parent)
{
    setRequest(new AddInstanceFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddInstanceFleetRequest * AddInstanceFleetResponse::request() const
{
    Q_D(const AddInstanceFleetResponse);
    return static_cast<const AddInstanceFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR AddInstanceFleet \a response.
 */
void AddInstanceFleetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddInstanceFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::AddInstanceFleetResponsePrivate
 * \brief The AddInstanceFleetResponsePrivate class provides private implementation for AddInstanceFleetResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a AddInstanceFleetResponsePrivate object with public implementation \a q.
 */
AddInstanceFleetResponsePrivate::AddInstanceFleetResponsePrivate(
    AddInstanceFleetResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR AddInstanceFleet response element from \a xml.
 */
void AddInstanceFleetResponsePrivate::parseAddInstanceFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddInstanceFleetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
