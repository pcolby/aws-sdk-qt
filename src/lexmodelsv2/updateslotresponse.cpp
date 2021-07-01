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

#include "updateslotresponse.h"
#include "updateslotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateSlotResponse
 * \brief The UpdateSlotResponse class provides an interace for LexModelsV2 UpdateSlot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateSlot
 */

/*!
 * Constructs a UpdateSlotResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSlotResponse::UpdateSlotResponse(
        const UpdateSlotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateSlotResponsePrivate(this), parent)
{
    setRequest(new UpdateSlotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSlotRequest * UpdateSlotResponse::request() const
{
    Q_D(const UpdateSlotResponse);
    return static_cast<const UpdateSlotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateSlot \a response.
 */
void UpdateSlotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSlotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateSlotResponsePrivate
 * \brief The UpdateSlotResponsePrivate class provides private implementation for UpdateSlotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateSlotResponsePrivate object with public implementation \a q.
 */
UpdateSlotResponsePrivate::UpdateSlotResponsePrivate(
    UpdateSlotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateSlot response element from \a xml.
 */
void UpdateSlotResponsePrivate::parseUpdateSlotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSlotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
