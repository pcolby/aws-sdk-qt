// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateflowmediastreamresponse.h"
#include "updateflowmediastreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowMediaStreamResponse
 * \brief The UpdateFlowMediaStreamResponse class provides an interace for MediaConnect UpdateFlowMediaStream responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowMediaStream
 */

/*!
 * Constructs a UpdateFlowMediaStreamResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFlowMediaStreamResponse::UpdateFlowMediaStreamResponse(
        const UpdateFlowMediaStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new UpdateFlowMediaStreamResponsePrivate(this), parent)
{
    setRequest(new UpdateFlowMediaStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFlowMediaStreamRequest * UpdateFlowMediaStreamResponse::request() const
{
    Q_D(const UpdateFlowMediaStreamResponse);
    return static_cast<const UpdateFlowMediaStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect UpdateFlowMediaStream \a response.
 */
void UpdateFlowMediaStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFlowMediaStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowMediaStreamResponsePrivate
 * \brief The UpdateFlowMediaStreamResponsePrivate class provides private implementation for UpdateFlowMediaStreamResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowMediaStreamResponsePrivate object with public implementation \a q.
 */
UpdateFlowMediaStreamResponsePrivate::UpdateFlowMediaStreamResponsePrivate(
    UpdateFlowMediaStreamResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect UpdateFlowMediaStream response element from \a xml.
 */
void UpdateFlowMediaStreamResponsePrivate::parseUpdateFlowMediaStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFlowMediaStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
