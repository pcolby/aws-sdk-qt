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

#include "createslotresponse.h"
#include "createslotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateSlotResponse
 * \brief The CreateSlotResponse class provides an interace for LexModelsV2 CreateSlot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createSlot
 */

/*!
 * Constructs a CreateSlotResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSlotResponse::CreateSlotResponse(
        const CreateSlotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateSlotResponsePrivate(this), parent)
{
    setRequest(new CreateSlotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSlotRequest * CreateSlotResponse::request() const
{
    Q_D(const CreateSlotResponse);
    return static_cast<const CreateSlotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateSlot \a response.
 */
void CreateSlotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSlotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateSlotResponsePrivate
 * \brief The CreateSlotResponsePrivate class provides private implementation for CreateSlotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateSlotResponsePrivate object with public implementation \a q.
 */
CreateSlotResponsePrivate::CreateSlotResponsePrivate(
    CreateSlotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateSlot response element from \a xml.
 */
void CreateSlotResponsePrivate::parseCreateSlotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSlotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
