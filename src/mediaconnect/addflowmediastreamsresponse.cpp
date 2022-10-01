// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addflowmediastreamsresponse.h"
#include "addflowmediastreamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowMediaStreamsResponse
 * \brief The AddFlowMediaStreamsResponse class provides an interace for MediaConnect AddFlowMediaStreams responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowMediaStreams
 */

/*!
 * Constructs a AddFlowMediaStreamsResponse object for \a reply to \a request, with parent \a parent.
 */
AddFlowMediaStreamsResponse::AddFlowMediaStreamsResponse(
        const AddFlowMediaStreamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new AddFlowMediaStreamsResponsePrivate(this), parent)
{
    setRequest(new AddFlowMediaStreamsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddFlowMediaStreamsRequest * AddFlowMediaStreamsResponse::request() const
{
    Q_D(const AddFlowMediaStreamsResponse);
    return static_cast<const AddFlowMediaStreamsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect AddFlowMediaStreams \a response.
 */
void AddFlowMediaStreamsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddFlowMediaStreamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::AddFlowMediaStreamsResponsePrivate
 * \brief The AddFlowMediaStreamsResponsePrivate class provides private implementation for AddFlowMediaStreamsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowMediaStreamsResponsePrivate object with public implementation \a q.
 */
AddFlowMediaStreamsResponsePrivate::AddFlowMediaStreamsResponsePrivate(
    AddFlowMediaStreamsResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect AddFlowMediaStreams response element from \a xml.
 */
void AddFlowMediaStreamsResponsePrivate::parseAddFlowMediaStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddFlowMediaStreamsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
