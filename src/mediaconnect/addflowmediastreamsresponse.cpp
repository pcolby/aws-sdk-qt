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
