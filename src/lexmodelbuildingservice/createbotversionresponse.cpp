/*
    Copyright 2013-2020 Paul Colby

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

#include "createbotversionresponse.h"
#include "createbotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::CreateBotVersionResponse
 * \brief The CreateBotVersionResponse class provides an interace for LexModelBuildingService CreateBotVersion responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::createBotVersion
 */

/*!
 * Constructs a CreateBotVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBotVersionResponse::CreateBotVersionResponse(
        const CreateBotVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new CreateBotVersionResponsePrivate(this), parent)
{
    setRequest(new CreateBotVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBotVersionRequest * CreateBotVersionResponse::request() const
{
    Q_D(const CreateBotVersionResponse);
    return static_cast<const CreateBotVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService CreateBotVersion \a response.
 */
void CreateBotVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBotVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::CreateBotVersionResponsePrivate
 * \brief The CreateBotVersionResponsePrivate class provides private implementation for CreateBotVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a CreateBotVersionResponsePrivate object with public implementation \a q.
 */
CreateBotVersionResponsePrivate::CreateBotVersionResponsePrivate(
    CreateBotVersionResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService CreateBotVersion response element from \a xml.
 */
void CreateBotVersionResponsePrivate::parseCreateBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBotVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
