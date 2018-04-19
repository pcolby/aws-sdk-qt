/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putnotificationchannelresponse.h"
#include "putnotificationchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::PutNotificationChannelResponse
 * \brief The PutNotificationChannelResponse class provides an interace for FMS PutNotificationChannel responses.
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
 * \sa FMSClient::putNotificationChannel
 */

/*!
 * Constructs a PutNotificationChannelResponse object for \a reply to \a request, with parent \a parent.
 */
PutNotificationChannelResponse::PutNotificationChannelResponse(
        const PutNotificationChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FMSResponse(new PutNotificationChannelResponsePrivate(this), parent)
{
    setRequest(new PutNotificationChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutNotificationChannelRequest * PutNotificationChannelResponse::request() const
{
    Q_D(const PutNotificationChannelResponse);
    return static_cast<const PutNotificationChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FMS PutNotificationChannel \a response.
 */
void PutNotificationChannelResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutNotificationChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FMS::PutNotificationChannelResponsePrivate
 * \brief The PutNotificationChannelResponsePrivate class provides private implementation for PutNotificationChannelResponse.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a PutNotificationChannelResponsePrivate object with public implementation \a q.
 */
PutNotificationChannelResponsePrivate::PutNotificationChannelResponsePrivate(
    PutNotificationChannelResponse * const q) : FMSResponsePrivate(q)
{

}

/*!
 * Parses a FMS PutNotificationChannel response element from \a xml.
 */
void PutNotificationChannelResponsePrivate::parsePutNotificationChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutNotificationChannelResponse"));
    /// @todo
}

} // namespace FMS
} // namespace QtAws
