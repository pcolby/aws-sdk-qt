// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbotresponse.h"
#include "putbotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::PutBotResponse
 * \brief The PutBotResponse class provides an interace for LexModelBuilding PutBot responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::putBot
 */

/*!
 * Constructs a PutBotResponse object for \a reply to \a request, with parent \a parent.
 */
PutBotResponse::PutBotResponse(
        const PutBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new PutBotResponsePrivate(this), parent)
{
    setRequest(new PutBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBotRequest * PutBotResponse::request() const
{
    Q_D(const PutBotResponse);
    return static_cast<const PutBotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding PutBot \a response.
 */
void PutBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::PutBotResponsePrivate
 * \brief The PutBotResponsePrivate class provides private implementation for PutBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a PutBotResponsePrivate object with public implementation \a q.
 */
PutBotResponsePrivate::PutBotResponsePrivate(
    PutBotResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding PutBot response element from \a xml.
 */
void PutBotResponsePrivate::parsePutBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
