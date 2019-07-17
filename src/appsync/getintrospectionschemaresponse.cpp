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

#include "getintrospectionschemaresponse.h"
#include "getintrospectionschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetIntrospectionSchemaResponse
 * \brief The GetIntrospectionSchemaResponse class provides an interace for AppSync GetIntrospectionSchema responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getIntrospectionSchema
 */

/*!
 * Constructs a GetIntrospectionSchemaResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntrospectionSchemaResponse::GetIntrospectionSchemaResponse(
        const GetIntrospectionSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetIntrospectionSchemaResponsePrivate(this), parent)
{
    setRequest(new GetIntrospectionSchemaRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntrospectionSchemaRequest * GetIntrospectionSchemaResponse::request() const
{
    Q_D(const GetIntrospectionSchemaResponse);
    return static_cast<const GetIntrospectionSchemaRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetIntrospectionSchema \a response.
 */
void GetIntrospectionSchemaResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntrospectionSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetIntrospectionSchemaResponsePrivate
 * \brief The GetIntrospectionSchemaResponsePrivate class provides private implementation for GetIntrospectionSchemaResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetIntrospectionSchemaResponsePrivate object with public implementation \a q.
 */
GetIntrospectionSchemaResponsePrivate::GetIntrospectionSchemaResponsePrivate(
    GetIntrospectionSchemaResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetIntrospectionSchema response element from \a xml.
 */
void GetIntrospectionSchemaResponsePrivate::parseGetIntrospectionSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntrospectionSchemaResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
