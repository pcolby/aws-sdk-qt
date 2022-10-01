// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbuiltinintentsresponse.h"
#include "getbuiltinintentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinIntentsResponse
 * \brief The GetBuiltinIntentsResponse class provides an interace for LexModelBuilding GetBuiltinIntents responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBuiltinIntents
 */

/*!
 * Constructs a GetBuiltinIntentsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBuiltinIntentsResponse::GetBuiltinIntentsResponse(
        const GetBuiltinIntentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetBuiltinIntentsResponsePrivate(this), parent)
{
    setRequest(new GetBuiltinIntentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBuiltinIntentsRequest * GetBuiltinIntentsResponse::request() const
{
    Q_D(const GetBuiltinIntentsResponse);
    return static_cast<const GetBuiltinIntentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetBuiltinIntents \a response.
 */
void GetBuiltinIntentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBuiltinIntentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetBuiltinIntentsResponsePrivate
 * \brief The GetBuiltinIntentsResponsePrivate class provides private implementation for GetBuiltinIntentsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBuiltinIntentsResponsePrivate object with public implementation \a q.
 */
GetBuiltinIntentsResponsePrivate::GetBuiltinIntentsResponsePrivate(
    GetBuiltinIntentsResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetBuiltinIntents response element from \a xml.
 */
void GetBuiltinIntentsResponsePrivate::parseGetBuiltinIntentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBuiltinIntentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
