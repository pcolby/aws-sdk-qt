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

#include "getutterancesviewresponse.h"
#include "getutterancesviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetUtterancesViewResponse
 * \brief The GetUtterancesViewResponse class provides an interace for LexModelBuildingService GetUtterancesView responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getUtterancesView
 */

/*!
 * Constructs a GetUtterancesViewResponse object for \a reply to \a request, with parent \a parent.
 */
GetUtterancesViewResponse::GetUtterancesViewResponse(
        const GetUtterancesViewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetUtterancesViewResponsePrivate(this), parent)
{
    setRequest(new GetUtterancesViewRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUtterancesViewRequest * GetUtterancesViewResponse::request() const
{
    Q_D(const GetUtterancesViewResponse);
    return static_cast<const GetUtterancesViewRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetUtterancesView \a response.
 */
void GetUtterancesViewResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUtterancesViewResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetUtterancesViewResponsePrivate
 * \brief The GetUtterancesViewResponsePrivate class provides private implementation for GetUtterancesViewResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetUtterancesViewResponsePrivate object with public implementation \a q.
 */
GetUtterancesViewResponsePrivate::GetUtterancesViewResponsePrivate(
    GetUtterancesViewResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetUtterancesView response element from \a xml.
 */
void GetUtterancesViewResponsePrivate::parseGetUtterancesViewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUtterancesViewResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
