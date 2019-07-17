/*
    Copyright 2013-2019 Paul Colby

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

#include "addflowoutputsresponse.h"
#include "addflowoutputsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowOutputsResponse
 * \brief The AddFlowOutputsResponse class provides an interace for MediaConnect AddFlowOutputs responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowOutputs
 */

/*!
 * Constructs a AddFlowOutputsResponse object for \a reply to \a request, with parent \a parent.
 */
AddFlowOutputsResponse::AddFlowOutputsResponse(
        const AddFlowOutputsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new AddFlowOutputsResponsePrivate(this), parent)
{
    setRequest(new AddFlowOutputsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddFlowOutputsRequest * AddFlowOutputsResponse::request() const
{
    Q_D(const AddFlowOutputsResponse);
    return static_cast<const AddFlowOutputsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect AddFlowOutputs \a response.
 */
void AddFlowOutputsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddFlowOutputsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::AddFlowOutputsResponsePrivate
 * \brief The AddFlowOutputsResponsePrivate class provides private implementation for AddFlowOutputsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowOutputsResponsePrivate object with public implementation \a q.
 */
AddFlowOutputsResponsePrivate::AddFlowOutputsResponsePrivate(
    AddFlowOutputsResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect AddFlowOutputs response element from \a xml.
 */
void AddFlowOutputsResponsePrivate::parseAddFlowOutputsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddFlowOutputsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
