// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebotresponse.h"
#include "deletebotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteBotResponse
 * \brief The DeleteBotResponse class provides an interace for LexModelBuilding DeleteBot responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteBot
 */

/*!
 * Constructs a DeleteBotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotResponse::DeleteBotResponse(
        const DeleteBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteBotResponsePrivate(this), parent)
{
    setRequest(new DeleteBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBotRequest * DeleteBotResponse::request() const
{
    Q_D(const DeleteBotResponse);
    return static_cast<const DeleteBotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding DeleteBot \a response.
 */
void DeleteBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteBotResponsePrivate
 * \brief The DeleteBotResponsePrivate class provides private implementation for DeleteBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteBotResponsePrivate object with public implementation \a q.
 */
DeleteBotResponsePrivate::DeleteBotResponsePrivate(
    DeleteBotResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteBot response element from \a xml.
 */
void DeleteBotResponsePrivate::parseDeleteBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
