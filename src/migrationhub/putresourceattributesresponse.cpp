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

#include "putresourceattributesresponse.h"
#include "putresourceattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::PutResourceAttributesResponse
 * \brief The PutResourceAttributesResponse class provides an interace for MigrationHub PutResourceAttributes responses.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
 *
 * \sa MigrationHubClient::putResourceAttributes
 */

/*!
 * Constructs a PutResourceAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
PutResourceAttributesResponse::PutResourceAttributesResponse(
        const PutResourceAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new PutResourceAttributesResponsePrivate(this), parent)
{
    setRequest(new PutResourceAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutResourceAttributesRequest * PutResourceAttributesResponse::request() const
{
    return static_cast<const PutResourceAttributesRequest *>(MigrationHubResponse::request());
}

/*!
 * \reimp
 * Parses a successful MigrationHub PutResourceAttributes \a response.
 */
void PutResourceAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutResourceAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MigrationHub::PutResourceAttributesResponsePrivate
 * \brief The PutResourceAttributesResponsePrivate class provides private implementation for PutResourceAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a PutResourceAttributesResponsePrivate object with public implementation \a q.
 */
PutResourceAttributesResponsePrivate::PutResourceAttributesResponsePrivate(
    PutResourceAttributesResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * Parses a MigrationHub PutResourceAttributes response element from \a xml.
 */
void PutResourceAttributesResponsePrivate::parsePutResourceAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutResourceAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MigrationHub
} // namespace QtAws
