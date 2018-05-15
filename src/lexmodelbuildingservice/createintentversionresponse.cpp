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

#include "createintentversionresponse.h"
#include "createintentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::CreateIntentVersionResponse
 * \brief The CreateIntentVersionResponse class provides an interace for LexModelBuildingService CreateIntentVersion responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::createIntentVersion
 */

/*!
 * Constructs a CreateIntentVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIntentVersionResponse::CreateIntentVersionResponse(
        const CreateIntentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new CreateIntentVersionResponsePrivate(this), parent)
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
 * Parses a successful LexModelBuildingService CreateIntentVersion \a response.
 */
void CreateIntentVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIntentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::CreateIntentVersionResponsePrivate
 * \brief The CreateIntentVersionResponsePrivate class provides private implementation for CreateIntentVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a CreateIntentVersionResponsePrivate object with public implementation \a q.
 */
CreateIntentVersionResponsePrivate::CreateIntentVersionResponsePrivate(
    CreateIntentVersionResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService CreateIntentVersion response element from \a xml.
 */
void CreateIntentVersionResponsePrivate::parseCreateIntentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIntentVersionResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
