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

#include "getappresponse.h"
#include "getappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::GetAppResponse
 * \brief The GetAppResponse class provides an interace for SMS GetApp responses.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AWS Server Migration Service</fullname>
 * 
 *  AWS Server Migration Service (AWS SMS) makes it easier and faster for you to migrate your on-premises workloads to AWS.
 *  To learn more about AWS SMS, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">AWS Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">AWS Server Migration Service User
 *  Guide</a>
 *
 * \sa SmsClient::getApp
 */

/*!
 * Constructs a GetAppResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppResponse::GetAppResponse(
        const GetAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new GetAppResponsePrivate(this), parent)
{
    setRequest(new GetAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppRequest * GetAppResponse::request() const
{
    return static_cast<const GetAppRequest *>(SmsResponse::request());
}

/*!
 * \reimp
 * Parses a successful SMS GetApp \a response.
 */
void GetAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SMS::GetAppResponsePrivate
 * \brief The GetAppResponsePrivate class provides private implementation for GetAppResponse.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a GetAppResponsePrivate object with public implementation \a q.
 */
GetAppResponsePrivate::GetAppResponsePrivate(
    GetAppResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a SMS GetApp response element from \a xml.
 */
void GetAppResponsePrivate::parseGetAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SMS
} // namespace QtAws
