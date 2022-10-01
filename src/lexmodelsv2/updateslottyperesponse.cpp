// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
