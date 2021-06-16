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

#include "updateslottyperesponse.h"
#include "updateslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateSlotTypeResponse
 * \brief The UpdateSlotTypeResponse class provides an interace for LexModelsV2 UpdateSlotType responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateSlotType
 */

/*!
 * Constructs a UpdateSlotTypeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSlotTypeResponse::UpdateSlotTypeResponse(
        const UpdateSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateSlotTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateSlotTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSlotTypeRequest * UpdateSlotTypeResponse::request() const
{
    Q_D(const UpdateSlotTypeResponse);
    return static_cast<const UpdateSlotTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateSlotType \a response.
 */
void UpdateSlotTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSlotTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateSlotTypeResponsePrivate
 * \brief The UpdateSlotTypeResponsePrivate class provides private implementation for UpdateSlotTypeResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateSlotTypeResponsePrivate object with public implementation \a q.
 */
UpdateSlotTypeResponsePrivate::UpdateSlotTypeResponsePrivate(
    UpdateSlotTypeResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateSlotType response element from \a xml.
 */
void UpdateSlotTypeResponsePrivate::parseUpdateSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSlotTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
