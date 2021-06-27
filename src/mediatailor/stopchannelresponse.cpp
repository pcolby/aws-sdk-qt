/*
    Copyright 2013-2021 Paul Colby

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

#include "stopchannelresponse.h"
#include "stopchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::StopChannelResponse
 * \brief The StopChannelResponse class provides an interace for MediaTailor StopChannel responses.
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
 * \sa MediaTailorClient::stopChannel
 */

/*!
 * Constructs a StopChannelResponse object for \a reply to \a request, with parent \a parent.
 */
StopChannelResponse::StopChannelResponse(
        const StopChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new StopChannelResponsePrivate(this), parent)
{
    setRequest(new StopChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopChannelRequest * StopChannelResponse::request() const
{
    return static_cast<const StopChannelRequest *>(MediaTailorResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaTailor StopChannel \a response.
 */
void StopChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::StopChannelResponsePrivate
 * \brief The StopChannelResponsePrivate class provides private implementation for StopChannelResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a StopChannelResponsePrivate object with public implementation \a q.
 */
StopChannelResponsePrivate::StopChannelResponsePrivate(
    StopChannelResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor StopChannel response element from \a xml.
 */
void StopChannelResponsePrivate::parseStopChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
