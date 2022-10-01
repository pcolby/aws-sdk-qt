// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbotresponse.h"
#include "getbotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotResponse
 * \brief The GetBotResponse class provides an interace for LexModelBuilding GetBot responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBot
 */

/*!
 * Constructs a GetBotResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotResponse::GetBotResponse(
        const GetBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetBotResponsePrivate(this), parent)
{
    setRequest(new GetBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotRequest * GetBotResponse::request() const
{
    Q_D(const GetBotResponse);
    return static_cast<const GetBotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetBot \a response.
 */
void GetBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetBotResponsePrivate
 * \brief The GetBotResponsePrivate class provides private implementation for GetBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotResponsePrivate object with public implementation \a q.
 */
GetBotResponsePrivate::GetBotResponsePrivate(
    GetBotResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetBot response element from \a xml.
 */
void GetBotResponsePrivate::parseGetBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
