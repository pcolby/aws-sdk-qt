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

#include "listappsresponse.h"
#include "listappsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::ListAppsResponse
 * \brief The ListAppsResponse class provides an interace for SMS ListApps responses.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AAWS Sever Migration Service</fullname>
 * 
 *  This is the <i>AWS Sever Migration Service API Reference</i>. It provides descriptions, syntax, and usage examples for
 *  each of the actions and data types for the AWS Sever Migration Service (AWS SMS). The topic for each action shows the
 *  Query API request parameters and the XML response. You can also view the XML request elements in the
 * 
 *  WSDL>
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>>
 * 
 *  To learn more about the Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="https://aws.amazon.com/server-migration-service/">AWS Sever Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/server-migration.html">AWS Sever
 *  Migration Service User Guide</a>
 *
 * \sa SmsClient::listApps
 */

/*!
 * Constructs a ListAppsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAppsResponse::ListAppsResponse(
        const ListAppsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new ListAppsResponsePrivate(this), parent)
{
    setRequest(new ListAppsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAppsRequest * ListAppsResponse::request() const
{
    Q_D(const ListAppsResponse);
    return static_cast<const ListAppsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SMS ListApps \a response.
 */
void ListAppsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAppsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::ListAppsResponsePrivate
 * \brief The ListAppsResponsePrivate class provides private implementation for ListAppsResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a ListAppsResponsePrivate object with public implementation \a q.
 */
ListAppsResponsePrivate::ListAppsResponsePrivate(
    ListAppsResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS ListApps response element from \a xml.
 */
void ListAppsResponsePrivate::parseListAppsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAppsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
