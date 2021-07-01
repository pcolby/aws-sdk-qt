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

#include "deleteslotresponse.h"
#include "deleteslotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteSlotResponse
 * \brief The DeleteSlotResponse class provides an interace for LexModelsV2 DeleteSlot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteSlot
 */

/*!
 * Constructs a DeleteSlotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSlotResponse::DeleteSlotResponse(
        const DeleteSlotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteSlotResponsePrivate(this), parent)
{
    setRequest(new DeleteSlotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSlotRequest * DeleteSlotResponse::request() const
{
    Q_D(const DeleteSlotResponse);
    return static_cast<const DeleteSlotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteSlot \a response.
 */
void DeleteSlotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSlotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteSlotResponsePrivate
 * \brief The DeleteSlotResponsePrivate class provides private implementation for DeleteSlotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteSlotResponsePrivate object with public implementation \a q.
 */
DeleteSlotResponsePrivate::DeleteSlotResponsePrivate(
    DeleteSlotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteSlot response element from \a xml.
 */
void DeleteSlotResponsePrivate::parseDeleteSlotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSlotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
