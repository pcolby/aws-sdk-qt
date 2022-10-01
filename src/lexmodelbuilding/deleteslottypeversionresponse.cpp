// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteslottypeversionresponse.h"
#include "deleteslottypeversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteSlotTypeVersionResponse
 * \brief The DeleteSlotTypeVersionResponse class provides an interace for LexModelBuilding DeleteSlotTypeVersion responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteSlotTypeVersion
 */

/*!
 * Constructs a DeleteSlotTypeVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSlotTypeVersionResponse::DeleteSlotTypeVersionResponse(
        const DeleteSlotTypeVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteSlotTypeVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteSlotTypeVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSlotTypeVersionRequest * DeleteSlotTypeVersionResponse::request() const
{
    Q_D(const DeleteSlotTypeVersionResponse);
    return static_cast<const DeleteSlotTypeVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding DeleteSlotTypeVersion \a response.
 */
void DeleteSlotTypeVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSlotTypeVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteSlotTypeVersionResponsePrivate
 * \brief The DeleteSlotTypeVersionResponsePrivate class provides private implementation for DeleteSlotTypeVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteSlotTypeVersionResponsePrivate object with public implementation \a q.
 */
DeleteSlotTypeVersionResponsePrivate::DeleteSlotTypeVersionResponsePrivate(
    DeleteSlotTypeVersionResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteSlotTypeVersion response element from \a xml.
 */
void DeleteSlotTypeVersionResponsePrivate::parseDeleteSlotTypeVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSlotTypeVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
