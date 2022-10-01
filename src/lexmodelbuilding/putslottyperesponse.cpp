// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putslottyperesponse.h"
#include "putslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::PutSlotTypeResponse
 * \brief The PutSlotTypeResponse class provides an interace for LexModelBuilding PutSlotType responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::putSlotType
 */

/*!
 * Constructs a PutSlotTypeResponse object for \a reply to \a request, with parent \a parent.
 */
PutSlotTypeResponse::PutSlotTypeResponse(
        const PutSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new PutSlotTypeResponsePrivate(this), parent)
{
    setRequest(new PutSlotTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutSlotTypeRequest * PutSlotTypeResponse::request() const
{
    Q_D(const PutSlotTypeResponse);
    return static_cast<const PutSlotTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding PutSlotType \a response.
 */
void PutSlotTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutSlotTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::PutSlotTypeResponsePrivate
 * \brief The PutSlotTypeResponsePrivate class provides private implementation for PutSlotTypeResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a PutSlotTypeResponsePrivate object with public implementation \a q.
 */
PutSlotTypeResponsePrivate::PutSlotTypeResponsePrivate(
    PutSlotTypeResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding PutSlotType response element from \a xml.
 */
void PutSlotTypeResponsePrivate::parsePutSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutSlotTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
