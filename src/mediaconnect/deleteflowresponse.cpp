/*
    Copyright 2013-2018 Paul Colby

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

#include "deleteflowresponse.h"
#include "deleteflowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::DeleteFlowResponse
 * \brief The DeleteFlowResponse class provides an interace for MediaConnect DeleteFlow responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::deleteFlow
 */

/*!
 * Constructs a DeleteFlowResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFlowResponse::DeleteFlowResponse(
        const DeleteFlowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new DeleteFlowResponsePrivate(this), parent)
{
    setRequest(new DeleteFlowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFlowRequest * DeleteFlowResponse::request() const
{
    Q_D(const DeleteFlowResponse);
    return static_cast<const DeleteFlowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect DeleteFlow \a response.
 */
void DeleteFlowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFlowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::DeleteFlowResponsePrivate
 * \brief The DeleteFlowResponsePrivate class provides private implementation for DeleteFlowResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a DeleteFlowResponsePrivate object with public implementation \a q.
 */
DeleteFlowResponsePrivate::DeleteFlowResponsePrivate(
    DeleteFlowResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect DeleteFlow response element from \a xml.
 */
void DeleteFlowResponsePrivate::parseDeleteFlowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFlowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
