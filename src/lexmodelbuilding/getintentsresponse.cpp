// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getintentsresponse.h"
#include "getintentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetIntentsResponse
 * \brief The GetIntentsResponse class provides an interace for LexModelBuilding GetIntents responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getIntents
 */

/*!
 * Constructs a GetIntentsResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntentsResponse::GetIntentsResponse(
        const GetIntentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetIntentsResponsePrivate(this), parent)
{
    setRequest(new GetIntentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntentsRequest * GetIntentsResponse::request() const
{
    Q_D(const GetIntentsResponse);
    return static_cast<const GetIntentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetIntents \a response.
 */
void GetIntentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetIntentsResponsePrivate
 * \brief The GetIntentsResponsePrivate class provides private implementation for GetIntentsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetIntentsResponsePrivate object with public implementation \a q.
 */
GetIntentsResponsePrivate::GetIntentsResponsePrivate(
    GetIntentsResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetIntents response element from \a xml.
 */
void GetIntentsResponsePrivate::parseGetIntentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
