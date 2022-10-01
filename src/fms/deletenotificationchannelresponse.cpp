// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenotificationchannelresponse.h"
#include "deletenotificationchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DeleteNotificationChannelResponse
 * \brief The DeleteNotificationChannelResponse class provides an interace for Fms DeleteNotificationChannel responses.
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
 * Parses a successful Fms DeleteNotificationChannel \a response.
 */
void DeleteNotificationChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteNotificationChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fms::DeleteNotificationChannelResponsePrivate
 * \brief The DeleteNotificationChannelResponsePrivate class provides private implementation for DeleteNotificationChannelResponse.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DeleteNotificationChannelResponsePrivate object with public implementation \a q.
 */
DeleteNotificationChannelResponsePrivate::DeleteNotificationChannelResponsePrivate(
    DeleteNotificationChannelResponse * const q) : FmsResponsePrivate(q)
{

}

/*!
 * Parses a Fms DeleteNotificationChannel response element from \a xml.
 */
void DeleteNotificationChannelResponsePrivate::parseDeleteNotificationChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotificationChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fms
} // namespace QtAws
