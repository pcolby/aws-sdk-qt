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

#include "importgameconfigurationresponse.h"
#include "importgameconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ImportGameConfigurationResponse
 * \brief The ImportGameConfigurationResponse class provides an interace for GameSparks ImportGameConfiguration responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::importGameConfiguration
 */

/*!
 * Constructs a ImportGameConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
ImportGameConfigurationResponse::ImportGameConfigurationResponse(
        const ImportGameConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ImportGameConfigurationResponsePrivate(this), parent)
{
    setRequest(new ImportGameConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportGameConfigurationRequest * ImportGameConfigurationResponse::request() const
{
    Q_D(const ImportGameConfigurationResponse);
    return static_cast<const ImportGameConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ImportGameConfiguration \a response.
 */
void ImportGameConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportGameConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ImportGameConfigurationResponsePrivate
 * \brief The ImportGameConfigurationResponsePrivate class provides private implementation for ImportGameConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ImportGameConfigurationResponsePrivate object with public implementation \a q.
 */
ImportGameConfigurationResponsePrivate::ImportGameConfigurationResponsePrivate(
    ImportGameConfigurationResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ImportGameConfiguration response element from \a xml.
 */
void ImportGameConfigurationResponsePrivate::parseImportGameConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportGameConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
