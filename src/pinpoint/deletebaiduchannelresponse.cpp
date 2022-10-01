// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebaiduchannelresponse.h"
#include "deletebaiduchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteBaiduChannelResponse
 * \brief The DeleteBaiduChannelResponse class provides an interace for Pinpoint DeleteBaiduChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::deleteBaiduChannel
 */

/*!
 * Constructs a DeleteBaiduChannelResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBaiduChannelResponse::DeleteBaiduChannelResponse(
        const DeleteBaiduChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new DeleteBaiduChannelResponsePrivate(this), parent)
{
    setRequest(new DeleteBaiduChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBaiduChannelRequest * DeleteBaiduChannelResponse::request() const
{
    Q_D(const DeleteBaiduChannelResponse);
    return static_cast<const DeleteBaiduChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint DeleteBaiduChannel \a response.
 */
void DeleteBaiduChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBaiduChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::DeleteBaiduChannelResponsePrivate
 * \brief The DeleteBaiduChannelResponsePrivate class provides private implementation for DeleteBaiduChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteBaiduChannelResponsePrivate object with public implementation \a q.
 */
DeleteBaiduChannelResponsePrivate::DeleteBaiduChannelResponsePrivate(
    DeleteBaiduChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint DeleteBaiduChannel response element from \a xml.
 */
void DeleteBaiduChannelResponsePrivate::parseDeleteBaiduChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBaiduChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
