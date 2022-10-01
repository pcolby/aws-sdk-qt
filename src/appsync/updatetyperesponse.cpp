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

#include "updatetyperesponse.h"
#include "updatetyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateTypeResponse
 * \brief The UpdateTypeResponse class provides an interace for AppSync UpdateType responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateType
 */

/*!
 * Constructs a UpdateTypeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTypeResponse::UpdateTypeResponse(
        const UpdateTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateTypeResponsePrivate(this), parent)
{
    setRequest(new UpdateTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTypeRequest * UpdateTypeResponse::request() const
{
    Q_D(const UpdateTypeResponse);
    return static_cast<const UpdateTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateType \a response.
 */
void UpdateTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateTypeResponsePrivate
 * \brief The UpdateTypeResponsePrivate class provides private implementation for UpdateTypeResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateTypeResponsePrivate object with public implementation \a q.
 */
UpdateTypeResponsePrivate::UpdateTypeResponsePrivate(
    UpdateTypeResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateType response element from \a xml.
 */
void UpdateTypeResponsePrivate::parseUpdateTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
