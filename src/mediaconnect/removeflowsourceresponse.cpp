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

#include "removeflowsourceresponse.h"
#include "removeflowsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::RemoveFlowSourceResponse
 * \brief The RemoveFlowSourceResponse class provides an interace for MediaConnect RemoveFlowSource responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::removeFlowSource
 */

/*!
 * Constructs a RemoveFlowSourceResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveFlowSourceResponse::RemoveFlowSourceResponse(
        const RemoveFlowSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new RemoveFlowSourceResponsePrivate(this), parent)
{
    setRequest(new RemoveFlowSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveFlowSourceRequest * RemoveFlowSourceResponse::request() const
{
    return static_cast<const RemoveFlowSourceRequest *>(MediaConnectResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaConnect RemoveFlowSource \a response.
 */
void RemoveFlowSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveFlowSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::RemoveFlowSourceResponsePrivate
 * \brief The RemoveFlowSourceResponsePrivate class provides private implementation for RemoveFlowSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a RemoveFlowSourceResponsePrivate object with public implementation \a q.
 */
RemoveFlowSourceResponsePrivate::RemoveFlowSourceResponsePrivate(
    RemoveFlowSourceResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect RemoveFlowSource response element from \a xml.
 */
void RemoveFlowSourceResponsePrivate::parseRemoveFlowSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveFlowSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
