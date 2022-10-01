// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteemailchannelresponse.h"
#include "deleteemailchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteEmailChannelResponse
 * \brief The DeleteEmailChannelResponse class provides an interace for Pinpoint DeleteEmailChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteEmailChannel
 */

/*!
 * Constructs a DeleteEmailChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEmailChannelResponse::DeleteEmailChannelResponse(
        const DeleteEmailChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteEmailChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteEmailChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEmailChannelRequest * DeleteEmailChannelResponse::request() const
{
    Q_D(const DeleteEmailChannelResponse);
    return static_cast<const DeleteEmailChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteEmailChannel \a response.
 */
void DeleteEmailChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEmailChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteEmailChannelResponsePrivate
 * \brief The DeleteEmailChannelResponsePrivate class provides private implementation for DeleteEmailChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteEmailChannelResponsePrivate object with public implementation \a q.
 */
DeleteEmailChannelResponsePrivate::DeleteEmailChannelResponsePrivate(
    DeleteEmailChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteEmailChannel response element from \a xml.
 */
void DeleteEmailChannelResponsePrivate::parseDeleteEmailChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEmailChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
