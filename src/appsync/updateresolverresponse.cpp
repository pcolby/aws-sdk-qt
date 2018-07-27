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

#include "updateresolverresponse.h"
#include "updateresolverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateResolverResponse
 * \brief The UpdateResolverResponse class provides an interace for AppSync UpdateResolver responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateResolver
 */

/*!
 * Constructs a UpdateResolverResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResolverResponse::UpdateResolverResponse(
        const UpdateResolverRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateResolverResponsePrivate(this), parent)
{
    setRequest(new UpdateResolverRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResolverRequest * UpdateResolverResponse::request() const
{
    Q_D(const UpdateResolverResponse);
    return static_cast<const UpdateResolverRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateResolver \a response.
 */
void UpdateResolverResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResolverResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateResolverResponsePrivate
 * \brief The UpdateResolverResponsePrivate class provides private implementation for UpdateResolverResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateResolverResponsePrivate object with public implementation \a q.
 */
UpdateResolverResponsePrivate::UpdateResolverResponsePrivate(
    UpdateResolverResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateResolver response element from \a xml.
 */
void UpdateResolverResponsePrivate::parseUpdateResolverResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResolverResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
