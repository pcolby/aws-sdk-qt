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

#include "associateapiresponse.h"
#include "associateapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::AssociateApiResponse
 * \brief The AssociateApiResponse class provides an interace for AppSync AssociateApi responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::associateApi
 */

/*!
 * Constructs a AssociateApiResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateApiResponse::AssociateApiResponse(
        const AssociateApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new AssociateApiResponsePrivate(this), parent)
{
    setRequest(new AssociateApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateApiRequest * AssociateApiResponse::request() const
{
    Q_D(const AssociateApiResponse);
    return static_cast<const AssociateApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync AssociateApi \a response.
 */
void AssociateApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::AssociateApiResponsePrivate
 * \brief The AssociateApiResponsePrivate class provides private implementation for AssociateApiResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a AssociateApiResponsePrivate object with public implementation \a q.
 */
AssociateApiResponsePrivate::AssociateApiResponsePrivate(
    AssociateApiResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync AssociateApi response element from \a xml.
 */
void AssociateApiResponsePrivate::parseAssociateApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
