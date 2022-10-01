// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintentresponse.h"
#include "getintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetIntentResponse
 * \brief The GetIntentResponse class provides an interace for LexModelBuilding GetIntent responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getIntent
 */

/*!
 * Constructs a GetIntentResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntentResponse::GetIntentResponse(
        const GetIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetIntentResponsePrivate(this), parent)
{
    setRequest(new GetIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntentRequest * GetIntentResponse::request() const
{
    Q_D(const GetIntentResponse);
    return static_cast<const GetIntentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetIntent \a response.
 */
void GetIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetIntentResponsePrivate
 * \brief The GetIntentResponsePrivate class provides private implementation for GetIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetIntentResponsePrivate object with public implementation \a q.
 */
GetIntentResponsePrivate::GetIntentResponsePrivate(
    GetIntentResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetIntent response element from \a xml.
 */
void GetIntentResponsePrivate::parseGetIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
