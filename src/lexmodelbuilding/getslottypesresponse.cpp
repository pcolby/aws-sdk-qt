// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getslottypesresponse.h"
#include "getslottypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypesResponse
 * \brief The GetSlotTypesResponse class provides an interace for LexModelBuilding GetSlotTypes responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getSlotTypes
 */

/*!
 * Constructs a GetSlotTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetSlotTypesResponse::GetSlotTypesResponse(
        const GetSlotTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetSlotTypesResponsePrivate(this), parent)
{
    setRequest(new GetSlotTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSlotTypesRequest * GetSlotTypesResponse::request() const
{
    Q_D(const GetSlotTypesResponse);
    return static_cast<const GetSlotTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetSlotTypes \a response.
 */
void GetSlotTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSlotTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypesResponsePrivate
 * \brief The GetSlotTypesResponsePrivate class provides private implementation for GetSlotTypesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetSlotTypesResponsePrivate object with public implementation \a q.
 */
GetSlotTypesResponsePrivate::GetSlotTypesResponsePrivate(
    GetSlotTypesResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetSlotTypes response element from \a xml.
 */
void GetSlotTypesResponsePrivate::parseGetSlotTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSlotTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
