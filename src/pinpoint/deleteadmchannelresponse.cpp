// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteadmchannelresponse.h"
#include "deleteadmchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteAdmChannelResponse
 * \brief The DeleteAdmChannelResponse class provides an interace for Pinpoint DeleteAdmChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteAdmChannel
 */

/*!
 * Constructs a DeleteAdmChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAdmChannelResponse::DeleteAdmChannelResponse(
        const DeleteAdmChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteAdmChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteAdmChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAdmChannelRequest * DeleteAdmChannelResponse::request() const
{
    Q_D(const DeleteAdmChannelResponse);
    return static_cast<const DeleteAdmChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteAdmChannel \a response.
 */
void DeleteAdmChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAdmChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteAdmChannelResponsePrivate
 * \brief The DeleteAdmChannelResponsePrivate class provides private implementation for DeleteAdmChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteAdmChannelResponsePrivate object with public implementation \a q.
 */
DeleteAdmChannelResponsePrivate::DeleteAdmChannelResponsePrivate(
    DeleteAdmChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteAdmChannel response element from \a xml.
 */
void DeleteAdmChannelResponsePrivate::parseDeleteAdmChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAdmChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
