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

#include "getnotificationchannelresponse.h"
#include "getnotificationchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::GetNotificationChannelResponse
 * \brief The GetNotificationChannelResponse class provides an interace for FMS GetNotificationChannel responses.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="http://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FmsClient::getNotificationChannel
 */

/*!
 * Constructs a GetNotificationChannelResponse object for \a reply to \a request, with parent \a parent.
 */
GetNotificationChannelResponse::GetNotificationChannelResponse(
        const GetNotificationChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new GetNotificationChannelResponsePrivate(this), parent)
{
    setRequest(new GetNotificationChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNotificationChannelRequest * GetNotificationChannelResponse::request() const
{
    Q_D(const GetNotificationChannelResponse);
    return static_cast<const GetNotificationChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FMS GetNotificationChannel \a response.
 */
void GetNotificationChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNotificationChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FMS::GetNotificationChannelResponsePrivate
 * \brief The GetNotificationChannelResponsePrivate class provides private implementation for GetNotificationChannelResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a GetNotificationChannelResponsePrivate object with public implementation \a q.
 */
GetNotificationChannelResponsePrivate::GetNotificationChannelResponsePrivate(
    GetNotificationChannelResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a FMS GetNotificationChannel response element from \a xml.
 */
void GetNotificationChannelResponsePrivate::parseGetNotificationChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNotificationChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FMS
} // namespace QtAws
