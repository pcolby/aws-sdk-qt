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

#include "getdeviceregistrationresponse.h"
#include "getdeviceregistrationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SagemakerEdgeManager {

/*!
 * \class QtAws::SagemakerEdgeManager::GetDeviceRegistrationResponse
 * \brief The GetDeviceRegistrationResponse class provides an interace for SagemakerEdgeManager GetDeviceRegistration responses.
 *
 * \inmodule QtAwsSagemakerEdgeManager
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 *
 * \sa SagemakerEdgeManagerClient::getDeviceRegistration
 */

/*!
 * Constructs a GetDeviceRegistrationResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceRegistrationResponse::GetDeviceRegistrationResponse(
        const GetDeviceRegistrationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SagemakerEdgeManagerResponse(new GetDeviceRegistrationResponsePrivate(this), parent)
{
    setRequest(new GetDeviceRegistrationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceRegistrationRequest * GetDeviceRegistrationResponse::request() const
{
    return static_cast<const GetDeviceRegistrationRequest *>(SagemakerEdgeManagerResponse::request());
}

/*!
 * \reimp
 * Parses a successful SagemakerEdgeManager GetDeviceRegistration \a response.
 */
void GetDeviceRegistrationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceRegistrationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SagemakerEdgeManager::GetDeviceRegistrationResponsePrivate
 * \brief The GetDeviceRegistrationResponsePrivate class provides private implementation for GetDeviceRegistrationResponse.
 * \internal
 *
 * \inmodule QtAwsSagemakerEdgeManager
 */

/*!
 * Constructs a GetDeviceRegistrationResponsePrivate object with public implementation \a q.
 */
GetDeviceRegistrationResponsePrivate::GetDeviceRegistrationResponsePrivate(
    GetDeviceRegistrationResponse * const q) : SagemakerEdgeManagerResponsePrivate(q)
{

}

/*!
 * Parses a SagemakerEdgeManager GetDeviceRegistration response element from \a xml.
 */
void GetDeviceRegistrationResponsePrivate::parseGetDeviceRegistrationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceRegistrationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SagemakerEdgeManager
} // namespace QtAws
