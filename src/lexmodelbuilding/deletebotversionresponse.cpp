// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotversionresponse.h"
#include "deletebotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteBotVersionResponse
 * \brief The DeleteBotVersionResponse class provides an interace for LexModelBuilding DeleteBotVersion responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteBotVersion
 */

/*!
 * Constructs a DeleteBotVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotVersionResponse::DeleteBotVersionResponse(
        const DeleteBotVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteBotVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteBotVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBotVersionRequest * DeleteBotVersionResponse::request() const
{
    Q_D(const DeleteBotVersionResponse);
    return static_cast<const DeleteBotVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding DeleteBotVersion \a response.
 */
void DeleteBotVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteBotVersionResponsePrivate
 * \brief The DeleteBotVersionResponsePrivate class provides private implementation for DeleteBotVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteBotVersionResponsePrivate object with public implementation \a q.
 */
DeleteBotVersionResponsePrivate::DeleteBotVersionResponsePrivate(
    DeleteBotVersionResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteBotVersion response element from \a xml.
 */
void DeleteBotVersionResponsePrivate::parseDeleteBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
