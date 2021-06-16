/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletebotresponse.h"
#include "deletebotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotResponse
 * \brief The DeleteBotResponse class provides an interace for LexModelsV2 DeleteBot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBot
 */

/*!
 * Constructs a DeleteBotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotResponse::DeleteBotResponse(
        const DeleteBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteBotResponsePrivate(this), parent)
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
 * Parses a successful LexModelsV2 DeleteBot \a response.
 */
void DeleteBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotResponsePrivate
 * \brief The DeleteBotResponsePrivate class provides private implementation for DeleteBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotResponsePrivate object with public implementation \a q.
 */
DeleteBotResponsePrivate::DeleteBotResponsePrivate(
    DeleteBotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteBot response element from \a xml.
 */
void DeleteBotResponsePrivate::parseDeleteBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
