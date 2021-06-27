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

#include "removeflowoutputresponse.h"
#include "removeflowoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowOutputResponse
 * \brief The RemoveFlowOutputResponse class provides an interace for MediaConnect RemoveFlowOutput responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowOutput
 */

/*!
 * Constructs a RemoveFlowOutputResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveFlowOutputResponse::RemoveFlowOutputResponse(
        const RemoveFlowOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new RemoveFlowOutputResponsePrivate(this), parent)
{
    setRequest(new RemoveFlowOutputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveFlowOutputRequest * RemoveFlowOutputResponse::request() const
{
    return static_cast<const RemoveFlowOutputRequest *>(MediaConnectResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaConnect RemoveFlowOutput \a response.
 */
void RemoveFlowOutputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveFlowOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowOutputResponsePrivate
 * \brief The RemoveFlowOutputResponsePrivate class provides private implementation for RemoveFlowOutputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowOutputResponsePrivate object with public implementation \a q.
 */
RemoveFlowOutputResponsePrivate::RemoveFlowOutputResponsePrivate(
    RemoveFlowOutputResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect RemoveFlowOutput response element from \a xml.
 */
void RemoveFlowOutputResponsePrivate::parseRemoveFlowOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveFlowOutputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
