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
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateRegistryResponse
 * \brief The UpdateRegistryResponse class provides an interace for Glue UpdateRegistry responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::updateRegistry
 */

/*!
 * Constructs a UpdateRegistryResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRegistryResponse::UpdateRegistryResponse(
        const UpdateRegistryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new UpdateRegistryResponsePrivate(this), parent)
{
    setRequest(new UpdateRegistryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRegistryRequest * UpdateRegistryResponse::request() const
{
    Q_D(const UpdateRegistryResponse);
    return static_cast<const UpdateRegistryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue UpdateRegistry \a response.
 */
void UpdateRegistryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRegistryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::UpdateRegistryResponsePrivate
 * \brief The UpdateRegistryResponsePrivate class provides private implementation for UpdateRegistryResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateRegistryResponsePrivate object with public implementation \a q.
 */
UpdateRegistryResponsePrivate::UpdateRegistryResponsePrivate(
    UpdateRegistryResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue UpdateRegistry response element from \a xml.
 */
void UpdateRegistryResponsePrivate::parseUpdateRegistryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRegistryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
