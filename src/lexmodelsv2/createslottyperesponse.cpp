// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createslottyperesponse.h"
#include "createslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateSlotTypeResponse
 * \brief The CreateSlotTypeResponse class provides an interace for LexModelsV2 CreateSlotType responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createSlotType
 */

/*!
 * Constructs a CreateSlotTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSlotTypeResponse::CreateSlotTypeResponse(
        const CreateSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new CreateSlotTypeResponsePrivate(this), parent)
{
    setRequest(new CreateSlotTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSlotTypeRequest * CreateSlotTypeResponse::request() const
{
    Q_D(const CreateSlotTypeResponse);
    return static_cast<const CreateSlotTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 CreateSlotType \a response.
 */
void CreateSlotTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSlotTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::CreateSlotTypeResponsePrivate
 * \brief The CreateSlotTypeResponsePrivate class provides private implementation for CreateSlotTypeResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateSlotTypeResponsePrivate object with public implementation \a q.
 */
CreateSlotTypeResponsePrivate::CreateSlotTypeResponsePrivate(
    CreateSlotTypeResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 CreateSlotType response element from \a xml.
 */
void CreateSlotTypeResponsePrivate::parseCreateSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSlotTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
