// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putbotaliasresponse.h"
#include "putbotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::PutBotAliasResponse
 * \brief The PutBotAliasResponse class provides an interace for LexModelBuilding PutBotAlias responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::putBotAlias
 */

/*!
 * Constructs a PutBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
PutBotAliasResponse::PutBotAliasResponse(
        const PutBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new PutBotAliasResponsePrivate(this), parent)
{
    setRequest(new PutBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutBotAliasRequest * PutBotAliasResponse::request() const
{
    Q_D(const PutBotAliasResponse);
    return static_cast<const PutBotAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding PutBotAlias \a response.
 */
void PutBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::PutBotAliasResponsePrivate
 * \brief The PutBotAliasResponsePrivate class provides private implementation for PutBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a PutBotAliasResponsePrivate object with public implementation \a q.
 */
PutBotAliasResponsePrivate::PutBotAliasResponsePrivate(
    PutBotAliasResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding PutBotAlias response element from \a xml.
 */
void PutBotAliasResponsePrivate::parsePutBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
