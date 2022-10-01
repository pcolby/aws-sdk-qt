// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmigrationsresponse.h"
#include "getmigrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetMigrationsResponse
 * \brief The GetMigrationsResponse class provides an interace for LexModelBuilding GetMigrations responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getMigrations
 */

/*!
 * Constructs a GetMigrationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetMigrationsResponse::GetMigrationsResponse(
        const GetMigrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetMigrationsResponsePrivate(this), parent)
{
    setRequest(new GetMigrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMigrationsRequest * GetMigrationsResponse::request() const
{
    Q_D(const GetMigrationsResponse);
    return static_cast<const GetMigrationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetMigrations \a response.
 */
void GetMigrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMigrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetMigrationsResponsePrivate
 * \brief The GetMigrationsResponsePrivate class provides private implementation for GetMigrationsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetMigrationsResponsePrivate object with public implementation \a q.
 */
GetMigrationsResponsePrivate::GetMigrationsResponsePrivate(
    GetMigrationsResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetMigrations response element from \a xml.
 */
void GetMigrationsResponsePrivate::parseGetMigrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMigrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
