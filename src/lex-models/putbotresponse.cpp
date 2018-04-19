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

#include "putbotresponse.h"
#include "putbotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::PutBotResponse
 * \brief The PutBotResponse class provides an interace for LexModelBuildingService PutBot responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::putBot
 */

/*!
 * Constructs a PutBotResponse object for \a reply to \a request, with parent \a parent.
 */
PutBotResponse::PutBotResponse(
        const PutBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new PutBotResponsePrivate(this), parent)
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
 * Parses a successful LexModelBuildingService PutBot \a response.
 */
void PutBotResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::PutBotResponsePrivate
 * \brief The PutBotResponsePrivate class provides private implementation for PutBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a PutBotResponsePrivate object with public implementation \a q.
 */
PutBotResponsePrivate::PutBotResponsePrivate(
    PutBotResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService PutBot response element from \a xml.
 */
void PutBotResponsePrivate::parsePutBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBotResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
