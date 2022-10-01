// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeflowmediastreamresponse.h"
#include "removeflowmediastreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowMediaStreamResponse
 * \brief The RemoveFlowMediaStreamResponse class provides an interace for MediaConnect RemoveFlowMediaStream responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowMediaStream
 */

/*!
 * Constructs a RemoveFlowMediaStreamResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveFlowMediaStreamResponse::RemoveFlowMediaStreamResponse(
        const RemoveFlowMediaStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new RemoveFlowMediaStreamResponsePrivate(this), parent)
{
    setRequest(new RemoveFlowMediaStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveFlowMediaStreamRequest * RemoveFlowMediaStreamResponse::request() const
{
    Q_D(const RemoveFlowMediaStreamResponse);
    return static_cast<const RemoveFlowMediaStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect RemoveFlowMediaStream \a response.
 */
void RemoveFlowMediaStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveFlowMediaStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowMediaStreamResponsePrivate
 * \brief The RemoveFlowMediaStreamResponsePrivate class provides private implementation for RemoveFlowMediaStreamResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowMediaStreamResponsePrivate object with public implementation \a q.
 */
RemoveFlowMediaStreamResponsePrivate::RemoveFlowMediaStreamResponsePrivate(
    RemoveFlowMediaStreamResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect RemoveFlowMediaStream response element from \a xml.
 */
void RemoveFlowMediaStreamResponsePrivate::parseRemoveFlowMediaStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveFlowMediaStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
