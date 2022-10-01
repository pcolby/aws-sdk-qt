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

#include "getschemacreationstatusresponse.h"
#include "getschemacreationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetSchemaCreationStatusResponse
 * \brief The GetSchemaCreationStatusResponse class provides an interace for AppSync GetSchemaCreationStatus responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getSchemaCreationStatus
 */

/*!
 * Constructs a GetSchemaCreationStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetSchemaCreationStatusResponse::GetSchemaCreationStatusResponse(
        const GetSchemaCreationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetSchemaCreationStatusResponsePrivate(this), parent)
{
    setRequest(new GetSchemaCreationStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSchemaCreationStatusRequest * GetSchemaCreationStatusResponse::request() const
{
    Q_D(const GetSchemaCreationStatusResponse);
    return static_cast<const GetSchemaCreationStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetSchemaCreationStatus \a response.
 */
void GetSchemaCreationStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSchemaCreationStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetSchemaCreationStatusResponsePrivate
 * \brief The GetSchemaCreationStatusResponsePrivate class provides private implementation for GetSchemaCreationStatusResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetSchemaCreationStatusResponsePrivate object with public implementation \a q.
 */
GetSchemaCreationStatusResponsePrivate::GetSchemaCreationStatusResponsePrivate(
    GetSchemaCreationStatusResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetSchemaCreationStatus response element from \a xml.
 */
void GetSchemaCreationStatusResponsePrivate::parseGetSchemaCreationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSchemaCreationStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
