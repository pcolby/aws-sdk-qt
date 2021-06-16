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

#include "updateflowresponse.h"
#include "updateflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowResponse
 * \brief The UpdateFlowResponse class provides an interace for MediaConnect UpdateFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlow
 */

/*!
 * Constructs a UpdateFlowResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFlowResponse::UpdateFlowResponse(
        const UpdateFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new UpdateFlowResponsePrivate(this), parent)
{
    setRequest(new UpdateFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFlowRequest * UpdateFlowResponse::request() const
{
    Q_D(const UpdateFlowResponse);
    return static_cast<const UpdateFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect UpdateFlow \a response.
 */
void UpdateFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowResponsePrivate
 * \brief The UpdateFlowResponsePrivate class provides private implementation for UpdateFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowResponsePrivate object with public implementation \a q.
 */
UpdateFlowResponsePrivate::UpdateFlowResponsePrivate(
    UpdateFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect UpdateFlow response element from \a xml.
 */
void UpdateFlowResponsePrivate::parseUpdateFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
