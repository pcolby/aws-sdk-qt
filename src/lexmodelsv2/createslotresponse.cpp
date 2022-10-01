// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
