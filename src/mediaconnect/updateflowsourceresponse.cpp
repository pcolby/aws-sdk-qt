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

#include "updateflowsourceresponse.h"
#include "updateflowsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::UpdateFlowSourceResponse
 * \brief The UpdateFlowSourceResponse class provides an interace for MediaConnect UpdateFlowSource responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::updateFlowSource
 */

/*!
 * Constructs a UpdateFlowSourceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFlowSourceResponse::UpdateFlowSourceResponse(
        const UpdateFlowSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new UpdateFlowSourceResponsePrivate(this), parent)
{
    setRequest(new UpdateFlowSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFlowSourceRequest * UpdateFlowSourceResponse::request() const
{
    Q_D(const UpdateFlowSourceResponse);
    return static_cast<const UpdateFlowSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect UpdateFlowSource \a response.
 */
void UpdateFlowSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFlowSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::UpdateFlowSourceResponsePrivate
 * \brief The UpdateFlowSourceResponsePrivate class provides private implementation for UpdateFlowSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a UpdateFlowSourceResponsePrivate object with public implementation \a q.
 */
UpdateFlowSourceResponsePrivate::UpdateFlowSourceResponsePrivate(
    UpdateFlowSourceResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect UpdateFlowSource response element from \a xml.
 */
void UpdateFlowSourceResponsePrivate::parseUpdateFlowSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFlowSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
