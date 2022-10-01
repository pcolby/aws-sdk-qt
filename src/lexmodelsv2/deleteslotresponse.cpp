// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
