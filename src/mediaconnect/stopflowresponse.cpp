/*
    Copyright 2013-2020 Paul Colby

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

#include "stopflowresponse.h"
#include "stopflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::StopFlowResponse
 * \brief The StopFlowResponse class provides an interace for MediaConnect StopFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::stopFlow
 */

/*!
 * Constructs a StopFlowResponse object for \a reply to \a request, with parent \a parent.
 */
StopFlowResponse::StopFlowResponse(
        const StopFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new StopFlowResponsePrivate(this), parent)
{
    setRequest(new StopFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StopFlowRequest * StopFlowResponse::request() const
{
    Q_D(const StopFlowResponse);
    return static_cast<const StopFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect StopFlow \a response.
 */
void StopFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StopFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::StopFlowResponsePrivate
 * \brief The StopFlowResponsePrivate class provides private implementation for StopFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a StopFlowResponsePrivate object with public implementation \a q.
 */
StopFlowResponsePrivate::StopFlowResponsePrivate(
    StopFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect StopFlow response element from \a xml.
 */
void StopFlowResponsePrivate::parseStopFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
