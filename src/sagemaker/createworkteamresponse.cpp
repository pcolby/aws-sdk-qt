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

#include "createworkteamresponse.h"
#include "createworkteamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateWorkteamResponse
 * \brief The CreateWorkteamResponse class provides an interace for SageMaker CreateWorkteam responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createWorkteam
 */

/*!
 * Constructs a CreateWorkteamResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWorkteamResponse::CreateWorkteamResponse(
        const CreateWorkteamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateWorkteamResponsePrivate(this), parent)
{
    setRequest(new CreateWorkteamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWorkteamRequest * CreateWorkteamResponse::request() const
{
    Q_D(const CreateWorkteamResponse);
    return static_cast<const CreateWorkteamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker CreateWorkteam \a response.
 */
void CreateWorkteamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWorkteamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::CreateWorkteamResponsePrivate
 * \brief The CreateWorkteamResponsePrivate class provides private implementation for CreateWorkteamResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateWorkteamResponsePrivate object with public implementation \a q.
 */
CreateWorkteamResponsePrivate::CreateWorkteamResponsePrivate(
    CreateWorkteamResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker CreateWorkteam response element from \a xml.
 */
void CreateWorkteamResponsePrivate::parseCreateWorkteamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWorkteamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
