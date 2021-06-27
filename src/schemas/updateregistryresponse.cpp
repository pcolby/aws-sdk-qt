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

#include "updateregistryresponse.h"
#include "updateregistryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::UpdateRegistryResponse
 * \brief The UpdateRegistryResponse class provides an interace for Schemas UpdateRegistry responses.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::updateRegistry
 */

/*!
 * Constructs a UpdateRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRegistryResponse::UpdateRegistryResponse(
        const UpdateRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SchemasResponse(new UpdateRegistryResponsePrivate(this), parent)
{
    setRequest(new UpdateRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRegistryRequest * UpdateRegistryResponse::request() const
{
    return static_cast<const UpdateRegistryRequest *>(SchemasResponse::request());
}

/*!
 * \reimp
 * Parses a successful Schemas UpdateRegistry \a response.
 */
void UpdateRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Schemas::UpdateRegistryResponsePrivate
 * \brief The UpdateRegistryResponsePrivate class provides private implementation for UpdateRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a UpdateRegistryResponsePrivate object with public implementation \a q.
 */
UpdateRegistryResponsePrivate::UpdateRegistryResponsePrivate(
    UpdateRegistryResponse * const q) : SchemasResponsePrivate(q)
{

}

/*!
 * Parses a Schemas UpdateRegistry response element from \a xml.
 */
void UpdateRegistryResponsePrivate::parseUpdateRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Schemas
} // namespace QtAws
