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

#include "deleteutterancesresponse.h"
#include "deleteutterancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::DeleteUtterancesResponse
 * \brief The DeleteUtterancesResponse class provides an interace for LexModelBuildingService DeleteUtterances responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::deleteUtterances
 */

/*!
 * Constructs a DeleteUtterancesResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteUtterancesResponse::DeleteUtterancesResponse(
        const DeleteUtterancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new DeleteUtterancesResponsePrivate(this), parent)
{
    setRequest(new DeleteUtterancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteUtterancesRequest * DeleteUtterancesResponse::request() const
{
    Q_D(const DeleteUtterancesResponse);
    return static_cast<const DeleteUtterancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService DeleteUtterances \a response.
 */
void DeleteUtterancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteUtterancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::DeleteUtterancesResponsePrivate
 * \brief The DeleteUtterancesResponsePrivate class provides private implementation for DeleteUtterancesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a DeleteUtterancesResponsePrivate object with public implementation \a q.
 */
DeleteUtterancesResponsePrivate::DeleteUtterancesResponsePrivate(
    DeleteUtterancesResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService DeleteUtterances response element from \a xml.
 */
void DeleteUtterancesResponsePrivate::parseDeleteUtterancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteUtterancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
