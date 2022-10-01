// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbuiltinintentresponse.h"
#include "getbuiltinintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinIntentResponse
 * \brief The GetBuiltinIntentResponse class provides an interace for LexModelBuilding GetBuiltinIntent responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBuiltinIntent
 */

/*!
 * Constructs a GetBuiltinIntentResponse object for \a reply to \a request, with parent \a parent.
 */
GetBuiltinIntentResponse::GetBuiltinIntentResponse(
        const GetBuiltinIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetBuiltinIntentResponsePrivate(this), parent)
{
    setRequest(new GetBuiltinIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBuiltinIntentRequest * GetBuiltinIntentResponse::request() const
{
    Q_D(const GetBuiltinIntentResponse);
    return static_cast<const GetBuiltinIntentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetBuiltinIntent \a response.
 */
void GetBuiltinIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBuiltinIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinIntentResponsePrivate
 * \brief The GetBuiltinIntentResponsePrivate class provides private implementation for GetBuiltinIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBuiltinIntentResponsePrivate object with public implementation \a q.
 */
GetBuiltinIntentResponsePrivate::GetBuiltinIntentResponsePrivate(
    GetBuiltinIntentResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetBuiltinIntent response element from \a xml.
 */
void GetBuiltinIntentResponsePrivate::parseGetBuiltinIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBuiltinIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
