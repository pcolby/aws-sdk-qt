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

#include "listapikeysresponse.h"
#include "listapikeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListApiKeysResponse
 * \brief The ListApiKeysResponse class provides an interace for AppSync ListApiKeys responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listApiKeys
 */

/*!
 * Constructs a ListApiKeysResponse object for \a reply to \a request, with parent \a parent.
 */
ListApiKeysResponse::ListApiKeysResponse(
        const ListApiKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListApiKeysResponsePrivate(this), parent)
{
    setRequest(new ListApiKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListApiKeysRequest * ListApiKeysResponse::request() const
{
    Q_D(const ListApiKeysResponse);
    return static_cast<const ListApiKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync ListApiKeys \a response.
 */
void ListApiKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListApiKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::ListApiKeysResponsePrivate
 * \brief The ListApiKeysResponsePrivate class provides private implementation for ListApiKeysResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a ListApiKeysResponsePrivate object with public implementation \a q.
 */
ListApiKeysResponsePrivate::ListApiKeysResponsePrivate(
    ListApiKeysResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync ListApiKeys response element from \a xml.
 */
void ListApiKeysResponsePrivate::parseListApiKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListApiKeysResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
