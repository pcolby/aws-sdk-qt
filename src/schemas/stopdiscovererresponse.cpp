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

#include "stopdiscovererresponse.h"
#include "stopdiscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::StopDiscovererResponse
 * \brief The StopDiscovererResponse class provides an interace for Schemas StopDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::stopDiscoverer
 */

/*!
 * Constructs a StopDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
StopDiscovererResponse::StopDiscovererResponse(
        const StopDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new StopDiscovererResponsePrivate(this), parent)
{
    setRequest(new StopDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopDiscovererRequest * StopDiscovererResponse::request() const
{
    return static_cast<const StopDiscovererRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas StopDiscoverer \a response.
 */
void StopDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::StopDiscovererResponsePrivate
 * \brief The StopDiscovererResponsePrivate class provides private implementation for StopDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a StopDiscovererResponsePrivate object with public implementation \a q.
 */
StopDiscovererResponsePrivate::StopDiscovererResponsePrivate(
    StopDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas StopDiscoverer response element from \a xml.
 */
void StopDiscovererResponsePrivate::parseStopDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
