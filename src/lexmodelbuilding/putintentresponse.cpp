// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putintentresponse.h"
#include "putintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::PutIntentResponse
 * \brief The PutIntentResponse class provides an interace for LexModelBuilding PutIntent responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::putIntent
 */

/*!
 * Constructs a PutIntentResponse object for \a reply to \a request, with parent \a parent.
 */
PutIntentResponse::PutIntentResponse(
        const PutIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new PutIntentResponsePrivate(this), parent)
{
    setRequest(new PutIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutIntentRequest * PutIntentResponse::request() const
{
    Q_D(const PutIntentResponse);
    return static_cast<const PutIntentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding PutIntent \a response.
 */
void PutIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::PutIntentResponsePrivate
 * \brief The PutIntentResponsePrivate class provides private implementation for PutIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a PutIntentResponsePrivate object with public implementation \a q.
 */
PutIntentResponsePrivate::PutIntentResponsePrivate(
    PutIntentResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding PutIntent response element from \a xml.
 */
void PutIntentResponsePrivate::parsePutIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
