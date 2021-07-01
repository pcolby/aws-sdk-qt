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

#include "disconnectfromserviceresponse.h"
#include "disconnectfromserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DisconnectFromServiceResponse
 * \brief The DisconnectFromServiceResponse class provides an interace for mgn DisconnectFromService responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::disconnectFromService
 */

/*!
 * Constructs a DisconnectFromServiceResponse object for \a reply to \a request, with parent \a parent.
 */
DisconnectFromServiceResponse::DisconnectFromServiceResponse(
        const DisconnectFromServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new DisconnectFromServiceResponsePrivate(this), parent)
{
    setRequest(new DisconnectFromServiceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisconnectFromServiceRequest * DisconnectFromServiceResponse::request() const
{
    Q_D(const DisconnectFromServiceResponse);
    return static_cast<const DisconnectFromServiceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn DisconnectFromService \a response.
 */
void DisconnectFromServiceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisconnectFromServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::DisconnectFromServiceResponsePrivate
 * \brief The DisconnectFromServiceResponsePrivate class provides private implementation for DisconnectFromServiceResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DisconnectFromServiceResponsePrivate object with public implementation \a q.
 */
DisconnectFromServiceResponsePrivate::DisconnectFromServiceResponsePrivate(
    DisconnectFromServiceResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn DisconnectFromService response element from \a xml.
 */
void DisconnectFromServiceResponsePrivate::parseDisconnectFromServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisconnectFromServiceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
