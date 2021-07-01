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

#include "getintentversionsresponse.h"
#include "getintentversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetIntentVersionsResponse
 * \brief The GetIntentVersionsResponse class provides an interace for LexModelBuildingService GetIntentVersions responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getIntentVersions
 */

/*!
 * Constructs a GetIntentVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntentVersionsResponse::GetIntentVersionsResponse(
        const GetIntentVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetIntentVersionsResponsePrivate(this), parent)
{
    setRequest(new GetIntentVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntentVersionsRequest * GetIntentVersionsResponse::request() const
{
    Q_D(const GetIntentVersionsResponse);
    return static_cast<const GetIntentVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetIntentVersions \a response.
 */
void GetIntentVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntentVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetIntentVersionsResponsePrivate
 * \brief The GetIntentVersionsResponsePrivate class provides private implementation for GetIntentVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetIntentVersionsResponsePrivate object with public implementation \a q.
 */
GetIntentVersionsResponsePrivate::GetIntentVersionsResponsePrivate(
    GetIntentVersionsResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetIntentVersions response element from \a xml.
 */
void GetIntentVersionsResponsePrivate::parseGetIntentVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntentVersionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
