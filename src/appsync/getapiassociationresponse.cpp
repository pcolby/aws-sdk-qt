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

#include "getapiassociationresponse.h"
#include "getapiassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetApiAssociationResponse
 * \brief The GetApiAssociationResponse class provides an interace for AppSync GetApiAssociation responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getApiAssociation
 */

/*!
 * Constructs a GetApiAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
GetApiAssociationResponse::GetApiAssociationResponse(
        const GetApiAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetApiAssociationResponsePrivate(this), parent)
{
    setRequest(new GetApiAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApiAssociationRequest * GetApiAssociationResponse::request() const
{
    Q_D(const GetApiAssociationResponse);
    return static_cast<const GetApiAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetApiAssociation \a response.
 */
void GetApiAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApiAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetApiAssociationResponsePrivate
 * \brief The GetApiAssociationResponsePrivate class provides private implementation for GetApiAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetApiAssociationResponsePrivate object with public implementation \a q.
 */
GetApiAssociationResponsePrivate::GetApiAssociationResponsePrivate(
    GetApiAssociationResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetApiAssociation response element from \a xml.
 */
void GetApiAssociationResponsePrivate::parseGetApiAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApiAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
