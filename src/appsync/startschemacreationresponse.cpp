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

#include "startschemacreationresponse.h"
#include "startschemacreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::StartSchemaCreationResponse
 * \brief The StartSchemaCreationResponse class provides an interace for AppSync StartSchemaCreation responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::startSchemaCreation
 */

/*!
 * Constructs a StartSchemaCreationResponse object for \a reply to \a request, with parent \a parent.
 */
StartSchemaCreationResponse::StartSchemaCreationResponse(
        const StartSchemaCreationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new StartSchemaCreationResponsePrivate(this), parent)
{
    setRequest(new StartSchemaCreationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSchemaCreationRequest * StartSchemaCreationResponse::request() const
{
    Q_D(const StartSchemaCreationResponse);
    return static_cast<const StartSchemaCreationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync StartSchemaCreation \a response.
 */
void StartSchemaCreationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSchemaCreationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::StartSchemaCreationResponsePrivate
 * \brief The StartSchemaCreationResponsePrivate class provides private implementation for StartSchemaCreationResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a StartSchemaCreationResponsePrivate object with public implementation \a q.
 */
StartSchemaCreationResponsePrivate::StartSchemaCreationResponsePrivate(
    StartSchemaCreationResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync StartSchemaCreation response element from \a xml.
 */
void StartSchemaCreationResponsePrivate::parseStartSchemaCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSchemaCreationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
