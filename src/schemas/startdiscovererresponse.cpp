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

#include "startdiscovererresponse.h"
#include "startdiscovererresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::StartDiscovererResponse
 * \brief The StartDiscovererResponse class provides an interace for Schemas StartDiscoverer responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::startDiscoverer
 */

/*!
 * Constructs a StartDiscovererResponse object for \a reply to \a request, with parent \a parent.
 */
StartDiscovererResponse::StartDiscovererResponse(
        const StartDiscovererRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new StartDiscovererResponsePrivate(this), parent)
{
    setRequest(new StartDiscovererRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartDiscovererRequest * StartDiscovererResponse::request() const
{
    return static_cast<const StartDiscovererRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas StartDiscoverer \a response.
 */
void StartDiscovererResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartDiscovererResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::StartDiscovererResponsePrivate
 * \brief The StartDiscovererResponsePrivate class provides private implementation for StartDiscovererResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a StartDiscovererResponsePrivate object with public implementation \a q.
 */
StartDiscovererResponsePrivate::StartDiscovererResponsePrivate(
    StartDiscovererResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas StartDiscoverer response element from \a xml.
 */
void StartDiscovererResponsePrivate::parseStartDiscovererResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDiscovererResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
