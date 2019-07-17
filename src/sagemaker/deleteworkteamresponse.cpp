/*
    Copyright 2013-2019 Paul Colby

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

#include "deleteworkteamresponse.h"
#include "deleteworkteamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteWorkteamResponse
 * \brief The DeleteWorkteamResponse class provides an interace for SageMaker DeleteWorkteam responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::deleteWorkteam
 */

/*!
 * Constructs a DeleteWorkteamResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWorkteamResponse::DeleteWorkteamResponse(
        const DeleteWorkteamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteWorkteamResponsePrivate(this), parent)
{
    setRequest(new DeleteWorkteamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWorkteamRequest * DeleteWorkteamResponse::request() const
{
    Q_D(const DeleteWorkteamResponse);
    return static_cast<const DeleteWorkteamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DeleteWorkteam \a response.
 */
void DeleteWorkteamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWorkteamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DeleteWorkteamResponsePrivate
 * \brief The DeleteWorkteamResponsePrivate class provides private implementation for DeleteWorkteamResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteWorkteamResponsePrivate object with public implementation \a q.
 */
DeleteWorkteamResponsePrivate::DeleteWorkteamResponsePrivate(
    DeleteWorkteamResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DeleteWorkteam response element from \a xml.
 */
void DeleteWorkteamResponsePrivate::parseDeleteWorkteamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWorkteamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
