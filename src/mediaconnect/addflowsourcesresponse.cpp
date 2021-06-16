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

#include "addflowsourcesresponse.h"
#include "addflowsourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::AddFlowSourcesResponse
 * \brief The AddFlowSourcesResponse class provides an interace for MediaConnect AddFlowSources responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::addFlowSources
 */

/*!
 * Constructs a AddFlowSourcesResponse object for \a reply to \a request, with parent \a parent.
 */
AddFlowSourcesResponse::AddFlowSourcesResponse(
        const AddFlowSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new AddFlowSourcesResponsePrivate(this), parent)
{
    setRequest(new AddFlowSourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddFlowSourcesRequest * AddFlowSourcesResponse::request() const
{
    Q_D(const AddFlowSourcesResponse);
    return static_cast<const AddFlowSourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect AddFlowSources \a response.
 */
void AddFlowSourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddFlowSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::AddFlowSourcesResponsePrivate
 * \brief The AddFlowSourcesResponsePrivate class provides private implementation for AddFlowSourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a AddFlowSourcesResponsePrivate object with public implementation \a q.
 */
AddFlowSourcesResponsePrivate::AddFlowSourcesResponsePrivate(
    AddFlowSourcesResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect AddFlowSources response element from \a xml.
 */
void AddFlowSourcesResponsePrivate::parseAddFlowSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddFlowSourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
