/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putbotaliasresponse.h"
#include "putbotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::PutBotAliasResponse
 * \brief The PutBotAliasResponse class provides an interace for LexModelBuildingService PutBotAlias responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::putBotAlias
 */

/*!
 * Constructs a PutBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
PutBotAliasResponse::PutBotAliasResponse(
        const PutBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new PutBotAliasResponsePrivate(this), parent)
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
 * Parses a successful LexModelBuildingService PutBotAlias \a response.
 */
void PutBotAliasResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::PutBotAliasResponsePrivate
 * \brief The PutBotAliasResponsePrivate class provides private implementation for PutBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a PutBotAliasResponsePrivate object with public implementation \a q.
 */
PutBotAliasResponsePrivate::PutBotAliasResponsePrivate(
    PutBotAliasResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService PutBotAlias response element from \a xml.
 */
void PutBotAliasResponsePrivate::parsePutBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBotAliasResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
