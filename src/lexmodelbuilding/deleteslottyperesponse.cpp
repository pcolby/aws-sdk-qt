// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteslottyperesponse.h"
#include "deleteslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteSlotTypeResponse
 * \brief The DeleteSlotTypeResponse class provides an interace for LexModelBuilding DeleteSlotType responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteSlotType
 */

/*!
 * Constructs a DeleteSlotTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSlotTypeResponse::DeleteSlotTypeResponse(
        const DeleteSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteSlotTypeResponsePrivate(this), parent)
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
 * Parses a successful LexModelBuilding DeleteSlotType \a response.
 */
void DeleteSlotTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSlotTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteSlotTypeResponsePrivate
 * \brief The DeleteSlotTypeResponsePrivate class provides private implementation for DeleteSlotTypeResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteSlotTypeResponsePrivate object with public implementation \a q.
 */
DeleteSlotTypeResponsePrivate::DeleteSlotTypeResponsePrivate(
    DeleteSlotTypeResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteSlotType response element from \a xml.
 */
void DeleteSlotTypeResponsePrivate::parseDeleteSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSlotTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
