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

#include "updatefunctionresponse.h"
#include "updatefunctionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateFunctionResponse
 * \brief The UpdateFunctionResponse class provides an interace for AppSync UpdateFunction responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateFunction
 */

/*!
 * Constructs a UpdateFunctionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFunctionResponse::UpdateFunctionResponse(
        const UpdateFunctionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateFunctionResponsePrivate(this), parent)
{
    setRequest(new UpdateFunctionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFunctionRequest * UpdateFunctionResponse::request() const
{
    Q_D(const UpdateFunctionResponse);
    return static_cast<const UpdateFunctionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateFunction \a response.
 */
void UpdateFunctionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFunctionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateFunctionResponsePrivate
 * \brief The UpdateFunctionResponsePrivate class provides private implementation for UpdateFunctionResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateFunctionResponsePrivate object with public implementation \a q.
 */
UpdateFunctionResponsePrivate::UpdateFunctionResponsePrivate(
    UpdateFunctionResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateFunction response element from \a xml.
 */
void UpdateFunctionResponsePrivate::parseUpdateFunctionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFunctionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
