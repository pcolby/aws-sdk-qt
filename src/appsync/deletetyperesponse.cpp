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

#include "deletetyperesponse.h"
#include "deletetyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteTypeResponse
 * \brief The DeleteTypeResponse class provides an interace for AppSync DeleteType responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteType
 */

/*!
 * Constructs a DeleteTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTypeResponse::DeleteTypeResponse(
        const DeleteTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTypeRequest * DeleteTypeResponse::request() const
{
    Q_D(const DeleteTypeResponse);
    return static_cast<const DeleteTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteType \a response.
 */
void DeleteTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteTypeResponsePrivate
 * \brief The DeleteTypeResponsePrivate class provides private implementation for DeleteTypeResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteTypeResponsePrivate object with public implementation \a q.
 */
DeleteTypeResponsePrivate::DeleteTypeResponsePrivate(
    DeleteTypeResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteType response element from \a xml.
 */
void DeleteTypeResponsePrivate::parseDeleteTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTypeResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
