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

#include "createremoteaccesssessionresponse.h"
#include "createremoteaccesssessionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateRemoteAccessSessionResponse
 * \brief The CreateRemoteAccessSessionResponse class provides an interace for DeviceFarm CreateRemoteAccessSession responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createRemoteAccessSession
 */

/*!
 * Constructs a CreateRemoteAccessSessionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRemoteAccessSessionResponse::CreateRemoteAccessSessionResponse(
        const CreateRemoteAccessSessionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateRemoteAccessSessionResponsePrivate(this), parent)
{
    setRequest(new CreateRemoteAccessSessionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRemoteAccessSessionRequest * CreateRemoteAccessSessionResponse::request() const
{
    Q_D(const CreateRemoteAccessSessionResponse);
    return static_cast<const CreateRemoteAccessSessionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateRemoteAccessSession \a response.
 */
void CreateRemoteAccessSessionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateRemoteAccessSessionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateRemoteAccessSessionResponsePrivate
 * \brief The CreateRemoteAccessSessionResponsePrivate class provides private implementation for CreateRemoteAccessSessionResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateRemoteAccessSessionResponsePrivate object with public implementation \a q.
 */
CreateRemoteAccessSessionResponsePrivate::CreateRemoteAccessSessionResponsePrivate(
    CreateRemoteAccessSessionResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateRemoteAccessSession response element from \a xml.
 */
void CreateRemoteAccessSessionResponsePrivate::parseCreateRemoteAccessSessionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRemoteAccessSessionResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
