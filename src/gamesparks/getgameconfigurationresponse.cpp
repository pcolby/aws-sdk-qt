// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgameconfigurationresponse.h"
#include "getgameconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetGameConfigurationResponse
 * \brief The GetGameConfigurationResponse class provides an interace for GameSparks GetGameConfiguration responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getGameConfiguration
 */

/*!
 * Constructs a GetGameConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetGameConfigurationResponse::GetGameConfigurationResponse(
        const GetGameConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetGameConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetGameConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGameConfigurationRequest * GetGameConfigurationResponse::request() const
{
    Q_D(const GetGameConfigurationResponse);
    return static_cast<const GetGameConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetGameConfiguration \a response.
 */
void GetGameConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGameConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetGameConfigurationResponsePrivate
 * \brief The GetGameConfigurationResponsePrivate class provides private implementation for GetGameConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetGameConfigurationResponsePrivate object with public implementation \a q.
 */
GetGameConfigurationResponsePrivate::GetGameConfigurationResponsePrivate(
    GetGameConfigurationResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetGameConfiguration response element from \a xml.
 */
void GetGameConfigurationResponsePrivate::parseGetGameConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGameConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
