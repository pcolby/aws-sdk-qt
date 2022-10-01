// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmigrationresponse.h"
#include "startmigrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::StartMigrationResponse
 * \brief The StartMigrationResponse class provides an interace for LexModelBuilding StartMigration responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::startMigration
 */

/*!
 * Constructs a StartMigrationResponse object for \a reply to \a request, with parent \a parent.
 */
StartMigrationResponse::StartMigrationResponse(
        const StartMigrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new StartMigrationResponsePrivate(this), parent)
{
    setRequest(new StartMigrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMigrationRequest * StartMigrationResponse::request() const
{
    Q_D(const StartMigrationResponse);
    return static_cast<const StartMigrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding StartMigration \a response.
 */
void StartMigrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMigrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::StartMigrationResponsePrivate
 * \brief The StartMigrationResponsePrivate class provides private implementation for StartMigrationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a StartMigrationResponsePrivate object with public implementation \a q.
 */
StartMigrationResponsePrivate::StartMigrationResponsePrivate(
    StartMigrationResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding StartMigration response element from \a xml.
 */
void StartMigrationResponsePrivate::parseStartMigrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMigrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
