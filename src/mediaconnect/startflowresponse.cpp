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

#include "startflowresponse.h"
#include "startflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::StartFlowResponse
 * \brief The StartFlowResponse class provides an interace for MediaConnect StartFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::startFlow
 */

/*!
 * Constructs a StartFlowResponse object for \a reply to \a request, with parent \a parent.
 */
StartFlowResponse::StartFlowResponse(
        const StartFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new StartFlowResponsePrivate(this), parent)
{
    setRequest(new StartFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartFlowRequest * StartFlowResponse::request() const
{
    return static_cast<const StartFlowRequest *>(MediaConnectResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaConnect StartFlow \a response.
 */
void StartFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::StartFlowResponsePrivate
 * \brief The StartFlowResponsePrivate class provides private implementation for StartFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a StartFlowResponsePrivate object with public implementation \a q.
 */
StartFlowResponsePrivate::StartFlowResponsePrivate(
    StartFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect StartFlow response element from \a xml.
 */
void StartFlowResponsePrivate::parseStartFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
