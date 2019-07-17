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

#include "gettyperesponse.h"
#include "gettyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetTypeResponse
 * \brief The GetTypeResponse class provides an interace for AppSync GetType responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getType
 */

/*!
 * Constructs a GetTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetTypeResponse::GetTypeResponse(
        const GetTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetTypeResponsePrivate(this), parent)
{
    setRequest(new GetTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTypeRequest * GetTypeResponse::request() const
{
    Q_D(const GetTypeResponse);
    return static_cast<const GetTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetType \a response.
 */
void GetTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetTypeResponsePrivate
 * \brief The GetTypeResponsePrivate class provides private implementation for GetTypeResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetTypeResponsePrivate object with public implementation \a q.
 */
GetTypeResponsePrivate::GetTypeResponsePrivate(
    GetTypeResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetType response element from \a xml.
 */
void GetTypeResponsePrivate::parseGetTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
