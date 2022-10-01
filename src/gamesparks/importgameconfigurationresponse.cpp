// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
