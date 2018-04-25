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

#include "deleteresolverresponse.h"
#include "deleteresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteResolverResponse
 * \brief The DeleteResolverResponse class provides an interace for AppSync DeleteResolver responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteResolver
 */

/*!
 * Constructs a DeleteResolverResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResolverResponse::DeleteResolverResponse(
        const DeleteResolverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteResolverResponsePrivate(this), parent)
{
    setRequest(new DeleteResolverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResolverRequest * DeleteResolverResponse::request() const
{
    Q_D(const DeleteResolverResponse);
    return static_cast<const DeleteResolverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteResolver \a response.
 */
void DeleteResolverResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteResolverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteResolverResponsePrivate
 * \brief The DeleteResolverResponsePrivate class provides private implementation for DeleteResolverResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteResolverResponsePrivate object with public implementation \a q.
 */
DeleteResolverResponsePrivate::DeleteResolverResponsePrivate(
    DeleteResolverResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteResolver response element from \a xml.
 */
void DeleteResolverResponsePrivate::parseDeleteResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResolverResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
