// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatechannelresponse.h"
#include "updatechannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::UpdateChannelResponse
 * \brief The UpdateChannelResponse class provides an interace for MediaTailor UpdateChannel responses.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::updateChannel
 */

/*!
 * Constructs a UpdateChannelResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateChannelResponse::UpdateChannelResponse(
        const UpdateChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new UpdateChannelResponsePrivate(this), parent)
{
    setRequest(new UpdateChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateChannelRequest * UpdateChannelResponse::request() const
{
    Q_D(const UpdateChannelResponse);
    return static_cast<const UpdateChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor UpdateChannel \a response.
 */
void UpdateChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::UpdateChannelResponsePrivate
 * \brief The UpdateChannelResponsePrivate class provides private implementation for UpdateChannelResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a UpdateChannelResponsePrivate object with public implementation \a q.
 */
UpdateChannelResponsePrivate::UpdateChannelResponsePrivate(
    UpdateChannelResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor UpdateChannel response element from \a xml.
 */
void UpdateChannelResponsePrivate::parseUpdateChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
