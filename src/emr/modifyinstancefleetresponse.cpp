/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "modifyinstancefleetresponse.h"
#include "modifyinstancefleetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::ModifyInstanceFleetResponse
 * \brief The ModifyInstanceFleetResponse class provides an interace for EMR ModifyInstanceFleet responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::modifyInstanceFleet
 */

/*!
 * Constructs a ModifyInstanceFleetResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyInstanceFleetResponse::ModifyInstanceFleetResponse(
        const ModifyInstanceFleetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ModifyInstanceFleetResponsePrivate(this), parent)
{
    setRequest(new ModifyInstanceFleetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyInstanceFleetRequest * ModifyInstanceFleetResponse::request() const
{
    Q_D(const ModifyInstanceFleetResponse);
    return static_cast<const ModifyInstanceFleetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR ModifyInstanceFleet \a response.
 */
void ModifyInstanceFleetResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyInstanceFleetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::ModifyInstanceFleetResponsePrivate
 * \brief The ModifyInstanceFleetResponsePrivate class provides private implementation for ModifyInstanceFleetResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a ModifyInstanceFleetResponsePrivate object with public implementation \a q.
 */
ModifyInstanceFleetResponsePrivate::ModifyInstanceFleetResponsePrivate(
    ModifyInstanceFleetResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR ModifyInstanceFleet response element from \a xml.
 */
void ModifyInstanceFleetResponsePrivate::parseModifyInstanceFleetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyInstanceFleetResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
