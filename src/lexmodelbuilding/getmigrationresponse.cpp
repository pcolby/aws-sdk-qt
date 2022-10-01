// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmigrationresponse.h"
#include "getmigrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetMigrationResponse
 * \brief The GetMigrationResponse class provides an interace for LexModelBuilding GetMigration responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getMigration
 */

/*!
 * Constructs a GetMigrationResponse object for \a reply to \a request, with parent \a parent.
 */
GetMigrationResponse::GetMigrationResponse(
        const GetMigrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetMigrationResponsePrivate(this), parent)
{
    setRequest(new GetMigrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMigrationRequest * GetMigrationResponse::request() const
{
    Q_D(const GetMigrationResponse);
    return static_cast<const GetMigrationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetMigration \a response.
 */
void GetMigrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMigrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetMigrationResponsePrivate
 * \brief The GetMigrationResponsePrivate class provides private implementation for GetMigrationResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetMigrationResponsePrivate object with public implementation \a q.
 */
GetMigrationResponsePrivate::GetMigrationResponsePrivate(
    GetMigrationResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetMigration response element from \a xml.
 */
void GetMigrationResponsePrivate::parseGetMigrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMigrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
