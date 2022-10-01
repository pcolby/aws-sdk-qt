// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getslottypeversionsresponse.h"
#include "getslottypeversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypeVersionsResponse
 * \brief The GetSlotTypeVersionsResponse class provides an interace for LexModelBuilding GetSlotTypeVersions responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getSlotTypeVersions
 */

/*!
 * Constructs a GetSlotTypeVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetSlotTypeVersionsResponse::GetSlotTypeVersionsResponse(
        const GetSlotTypeVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetSlotTypeVersionsResponsePrivate(this), parent)
{
    setRequest(new GetSlotTypeVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSlotTypeVersionsRequest * GetSlotTypeVersionsResponse::request() const
{
    Q_D(const GetSlotTypeVersionsResponse);
    return static_cast<const GetSlotTypeVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetSlotTypeVersions \a response.
 */
void GetSlotTypeVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSlotTypeVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetSlotTypeVersionsResponsePrivate
 * \brief The GetSlotTypeVersionsResponsePrivate class provides private implementation for GetSlotTypeVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetSlotTypeVersionsResponsePrivate object with public implementation \a q.
 */
GetSlotTypeVersionsResponsePrivate::GetSlotTypeVersionsResponsePrivate(
    GetSlotTypeVersionsResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetSlotTypeVersions response element from \a xml.
 */
void GetSlotTypeVersionsResponsePrivate::parseGetSlotTypeVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSlotTypeVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
