/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putintentresponse.h"
#include "putintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::PutIntentResponse
 * \brief The PutIntentResponse class provides an interace for LexModelBuildingService PutIntent responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::putIntent
 */

/*!
 * Constructs a PutIntentResponse object for \a reply to \a request, with parent \a parent.
 */
PutIntentResponse::PutIntentResponse(
        const PutIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new PutIntentResponsePrivate(this), parent)
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
 * Parses a successful LexModelBuildingService PutIntent \a response.
 */
void PutIntentResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::PutIntentResponsePrivate
 * \brief The PutIntentResponsePrivate class provides private implementation for PutIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a PutIntentResponsePrivate object with public implementation \a q.
 */
PutIntentResponsePrivate::PutIntentResponsePrivate(
    PutIntentResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService PutIntent response element from \a xml.
 */
void PutIntentResponsePrivate::parsePutIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutIntentResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
