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

#include "deletefunctionresponse.h"
#include "deletefunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteFunctionResponse
 * \brief The DeleteFunctionResponse class provides an interace for AppSync DeleteFunction responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteFunction
 */

/*!
 * Constructs a DeleteFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFunctionResponse::DeleteFunctionResponse(
        const DeleteFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteFunctionResponsePrivate(this), parent)
{
    setRequest(new DeleteFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFunctionRequest * DeleteFunctionResponse::request() const
{
    Q_D(const DeleteFunctionResponse);
    return static_cast<const DeleteFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteFunction \a response.
 */
void DeleteFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteFunctionResponsePrivate
 * \brief The DeleteFunctionResponsePrivate class provides private implementation for DeleteFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteFunctionResponsePrivate object with public implementation \a q.
 */
DeleteFunctionResponsePrivate::DeleteFunctionResponsePrivate(
    DeleteFunctionResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteFunction response element from \a xml.
 */
void DeleteFunctionResponsePrivate::parseDeleteFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
