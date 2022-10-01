/*
    Copyright 2013-2021 Paul Colby

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

#include "createintentversionresponse.h"
#include "createintentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::CreateIntentVersionResponse
 * \brief The CreateIntentVersionResponse class provides an interace for LexModelBuilding CreateIntentVersion responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::createIntentVersion
 */

/*!
 * Constructs a CreateIntentVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIntentVersionResponse::CreateIntentVersionResponse(
        const CreateIntentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new CreateIntentVersionResponsePrivate(this), parent)
{
    setRequest(new CreateIntentVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIntentVersionRequest * CreateIntentVersionResponse::request() const
{
    Q_D(const CreateIntentVersionResponse);
    return static_cast<const CreateIntentVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding CreateIntentVersion \a response.
 */
void CreateIntentVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIntentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::CreateIntentVersionResponsePrivate
 * \brief The CreateIntentVersionResponsePrivate class provides private implementation for CreateIntentVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a CreateIntentVersionResponsePrivate object with public implementation \a q.
 */
CreateIntentVersionResponsePrivate::CreateIntentVersionResponsePrivate(
    CreateIntentVersionResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding CreateIntentVersion response element from \a xml.
 */
void CreateIntentVersionResponsePrivate::parseCreateIntentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIntentVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
