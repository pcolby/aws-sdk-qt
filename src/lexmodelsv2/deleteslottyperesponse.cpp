// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteslottyperesponse.h"
#include "deleteslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteSlotTypeResponse
 * \brief The DeleteSlotTypeResponse class provides an interace for LexModelsV2 DeleteSlotType responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteSlotType
 */

/*!
 * Constructs a DeleteSlotTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSlotTypeResponse::DeleteSlotTypeResponse(
        const DeleteSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteSlotTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteSlotTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSlotTypeRequest * DeleteSlotTypeResponse::request() const
{
    Q_D(const DeleteSlotTypeResponse);
    return static_cast<const DeleteSlotTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteSlotType \a response.
 */
void DeleteSlotTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSlotTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteSlotTypeResponsePrivate
 * \brief The DeleteSlotTypeResponsePrivate class provides private implementation for DeleteSlotTypeResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteSlotTypeResponsePrivate object with public implementation \a q.
 */
DeleteSlotTypeResponsePrivate::DeleteSlotTypeResponsePrivate(
    DeleteSlotTypeResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteSlotType response element from \a xml.
 */
void DeleteSlotTypeResponsePrivate::parseDeleteSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSlotTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
