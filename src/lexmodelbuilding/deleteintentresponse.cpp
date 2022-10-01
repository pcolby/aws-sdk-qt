// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteintentresponse.h"
#include "deleteintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteIntentResponse
 * \brief The DeleteIntentResponse class provides an interace for LexModelBuilding DeleteIntent responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteIntent
 */

/*!
 * Constructs a DeleteIntentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIntentResponse::DeleteIntentResponse(
        const DeleteIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteIntentResponsePrivate(this), parent)
{
    setRequest(new DeleteIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIntentRequest * DeleteIntentResponse::request() const
{
    Q_D(const DeleteIntentResponse);
    return static_cast<const DeleteIntentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding DeleteIntent \a response.
 */
void DeleteIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteIntentResponsePrivate
 * \brief The DeleteIntentResponsePrivate class provides private implementation for DeleteIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteIntentResponsePrivate object with public implementation \a q.
 */
DeleteIntentResponsePrivate::DeleteIntentResponsePrivate(
    DeleteIntentResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteIntent response element from \a xml.
 */
void DeleteIntentResponsePrivate::parseDeleteIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
