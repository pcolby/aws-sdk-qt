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

#include "deleteresourcetreeresponse.h"
#include "deleteresourcetreeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteResourceTreeResponse
 * \brief The DeleteResourceTreeResponse class provides an interace for Forecast DeleteResourceTree responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteResourceTree
 */

/*!
 * Constructs a DeleteResourceTreeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourceTreeResponse::DeleteResourceTreeResponse(
        const DeleteResourceTreeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DeleteResourceTreeResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceTreeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourceTreeRequest * DeleteResourceTreeResponse::request() const
{
    Q_D(const DeleteResourceTreeResponse);
    return static_cast<const DeleteResourceTreeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DeleteResourceTree \a response.
 */
void DeleteResourceTreeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourceTreeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DeleteResourceTreeResponsePrivate
 * \brief The DeleteResourceTreeResponsePrivate class provides private implementation for DeleteResourceTreeResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteResourceTreeResponsePrivate object with public implementation \a q.
 */
DeleteResourceTreeResponsePrivate::DeleteResourceTreeResponsePrivate(
    DeleteResourceTreeResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DeleteResourceTree response element from \a xml.
 */
void DeleteResourceTreeResponsePrivate::parseDeleteResourceTreeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceTreeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
