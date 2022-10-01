// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnotificationchannelresponse.h"
#include "getnotificationchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetNotificationChannelResponse
 * \brief The GetNotificationChannelResponse class provides an interace for Fms GetNotificationChannel responses.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
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
 * Parses a successful Fms GetNotificationChannel \a response.
 */
void GetNotificationChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNotificationChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::GetNotificationChannelResponsePrivate
 * \brief The GetNotificationChannelResponsePrivate class provides private implementation for GetNotificationChannelResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetNotificationChannelResponsePrivate object with public implementation \a q.
 */
GetNotificationChannelResponsePrivate::GetNotificationChannelResponsePrivate(
    GetNotificationChannelResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms GetNotificationChannel response element from \a xml.
 */
void GetNotificationChannelResponsePrivate::parseGetNotificationChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNotificationChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
