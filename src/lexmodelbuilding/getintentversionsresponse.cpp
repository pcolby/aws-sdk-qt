// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintentversionsresponse.h"
#include "getintentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetIntentVersionsResponse
 * \brief The GetIntentVersionsResponse class provides an interace for LexModelBuilding GetIntentVersions responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getIntentVersions
 */

/*!
 * Constructs a GetIntentVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntentVersionsResponse::GetIntentVersionsResponse(
        const GetIntentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetIntentVersionsResponsePrivate(this), parent)
{
    setRequest(new GetIntentVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntentVersionsRequest * GetIntentVersionsResponse::request() const
{
    Q_D(const GetIntentVersionsResponse);
    return static_cast<const GetIntentVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetIntentVersions \a response.
 */
void GetIntentVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntentVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetIntentVersionsResponsePrivate
 * \brief The GetIntentVersionsResponsePrivate class provides private implementation for GetIntentVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetIntentVersionsResponsePrivate object with public implementation \a q.
 */
GetIntentVersionsResponsePrivate::GetIntentVersionsResponsePrivate(
    GetIntentVersionsResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetIntentVersions response element from \a xml.
 */
void GetIntentVersionsResponsePrivate::parseGetIntentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntentVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
