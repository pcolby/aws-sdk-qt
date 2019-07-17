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

#include "updategraphqlapiresponse.h"
#include "updategraphqlapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateGraphqlApiResponse
 * \brief The UpdateGraphqlApiResponse class provides an interace for AppSync UpdateGraphqlApi responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateGraphqlApi
 */

/*!
 * Constructs a UpdateGraphqlApiResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGraphqlApiResponse::UpdateGraphqlApiResponse(
        const UpdateGraphqlApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateGraphqlApiResponsePrivate(this), parent)
{
    setRequest(new UpdateGraphqlApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGraphqlApiRequest * UpdateGraphqlApiResponse::request() const
{
    Q_D(const UpdateGraphqlApiResponse);
    return static_cast<const UpdateGraphqlApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateGraphqlApi \a response.
 */
void UpdateGraphqlApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGraphqlApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateGraphqlApiResponsePrivate
 * \brief The UpdateGraphqlApiResponsePrivate class provides private implementation for UpdateGraphqlApiResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateGraphqlApiResponsePrivate object with public implementation \a q.
 */
UpdateGraphqlApiResponsePrivate::UpdateGraphqlApiResponsePrivate(
    UpdateGraphqlApiResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateGraphqlApi response element from \a xml.
 */
void UpdateGraphqlApiResponsePrivate::parseUpdateGraphqlApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGraphqlApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
