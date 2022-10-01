// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createslottypeversionresponse.h"
#include "createslottypeversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::CreateSlotTypeVersionResponse
 * \brief The CreateSlotTypeVersionResponse class provides an interace for LexModelBuilding CreateSlotTypeVersion responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::createSlotTypeVersion
 */

/*!
 * Constructs a CreateSlotTypeVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSlotTypeVersionResponse::CreateSlotTypeVersionResponse(
        const CreateSlotTypeVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new CreateSlotTypeVersionResponsePrivate(this), parent)
{
    setRequest(new CreateSlotTypeVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSlotTypeVersionRequest * CreateSlotTypeVersionResponse::request() const
{
    Q_D(const CreateSlotTypeVersionResponse);
    return static_cast<const CreateSlotTypeVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding CreateSlotTypeVersion \a response.
 */
void CreateSlotTypeVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSlotTypeVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::CreateSlotTypeVersionResponsePrivate
 * \brief The CreateSlotTypeVersionResponsePrivate class provides private implementation for CreateSlotTypeVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a CreateSlotTypeVersionResponsePrivate object with public implementation \a q.
 */
CreateSlotTypeVersionResponsePrivate::CreateSlotTypeVersionResponsePrivate(
    CreateSlotTypeVersionResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding CreateSlotTypeVersion response element from \a xml.
 */
void CreateSlotTypeVersionResponsePrivate::parseCreateSlotTypeVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSlotTypeVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
