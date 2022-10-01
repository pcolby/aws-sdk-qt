// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebaiduchannelresponse.h"
#include "updatebaiduchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateBaiduChannelResponse
 * \brief The UpdateBaiduChannelResponse class provides an interace for Pinpoint UpdateBaiduChannel responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateBaiduChannel
 */

/*!
 * Constructs a UpdateBaiduChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBaiduChannelResponse::UpdateBaiduChannelResponse(
        const UpdateBaiduChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new UpdateBaiduChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateBaiduChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBaiduChannelRequest * UpdateBaiduChannelResponse::request() const
{
    Q_D(const UpdateBaiduChannelResponse);
    return static_cast<const UpdateBaiduChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint UpdateBaiduChannel \a response.
 */
void UpdateBaiduChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBaiduChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::UpdateBaiduChannelResponsePrivate
 * \brief The UpdateBaiduChannelResponsePrivate class provides private implementation for UpdateBaiduChannelResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateBaiduChannelResponsePrivate object with public implementation \a q.
 */
UpdateBaiduChannelResponsePrivate::UpdateBaiduChannelResponsePrivate(
    UpdateBaiduChannelResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint UpdateBaiduChannel response element from \a xml.
 */
void UpdateBaiduChannelResponsePrivate::parseUpdateBaiduChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBaiduChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
