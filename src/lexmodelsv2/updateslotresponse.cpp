// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
