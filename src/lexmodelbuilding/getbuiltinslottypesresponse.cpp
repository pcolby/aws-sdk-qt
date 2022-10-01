// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbuiltinslottypesresponse.h"
#include "getbuiltinslottypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinSlotTypesResponse
 * \brief The GetBuiltinSlotTypesResponse class provides an interace for LexModelBuilding GetBuiltinSlotTypes responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBuiltinSlotTypes
 */

/*!
 * Constructs a GetBuiltinSlotTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetBuiltinSlotTypesResponse::GetBuiltinSlotTypesResponse(
        const GetBuiltinSlotTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetBuiltinSlotTypesResponsePrivate(this), parent)
{
    setRequest(new GetBuiltinSlotTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBuiltinSlotTypesRequest * GetBuiltinSlotTypesResponse::request() const
{
    Q_D(const GetBuiltinSlotTypesResponse);
    return static_cast<const GetBuiltinSlotTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetBuiltinSlotTypes \a response.
 */
void GetBuiltinSlotTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBuiltinSlotTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinSlotTypesResponsePrivate
 * \brief The GetBuiltinSlotTypesResponsePrivate class provides private implementation for GetBuiltinSlotTypesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBuiltinSlotTypesResponsePrivate object with public implementation \a q.
 */
GetBuiltinSlotTypesResponsePrivate::GetBuiltinSlotTypesResponsePrivate(
    GetBuiltinSlotTypesResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetBuiltinSlotTypes response element from \a xml.
 */
void GetBuiltinSlotTypesResponsePrivate::parseGetBuiltinSlotTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBuiltinSlotTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
