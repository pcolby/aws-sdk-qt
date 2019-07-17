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

#include "deletenotificationchannelresponse.h"
#include "deletenotificationchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::DeleteNotificationChannelResponse
 * \brief The DeleteNotificationChannelResponse class provides an interace for FMS DeleteNotificationChannel responses.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FmsClient::deleteNotificationChannel
 */

/*!
 * Constructs a DeleteNotificationChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteNotificationChannelResponse::DeleteNotificationChannelResponse(
        const DeleteNotificationChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FmsResponse(new DeleteNotificationChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteNotificationChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteNotificationChannelRequest * DeleteNotificationChannelResponse::request() const
{
    Q_D(const DeleteNotificationChannelResponse);
    return static_cast<const DeleteNotificationChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FMS DeleteNotificationChannel \a response.
 */
void DeleteNotificationChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNotificationChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FMS::DeleteNotificationChannelResponsePrivate
 * \brief The DeleteNotificationChannelResponsePrivate class provides private implementation for DeleteNotificationChannelResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a DeleteNotificationChannelResponsePrivate object with public implementation \a q.
 */
DeleteNotificationChannelResponsePrivate::DeleteNotificationChannelResponsePrivate(
    DeleteNotificationChannelResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a FMS DeleteNotificationChannel response element from \a xml.
 */
void DeleteNotificationChannelResponsePrivate::parseDeleteNotificationChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotificationChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FMS
} // namespace QtAws
