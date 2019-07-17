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

#include "getuploadresponse.h"
#include "getuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetUploadResponse
 * \brief The GetUploadResponse class provides an interace for DeviceFarm GetUpload responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getUpload
 */

/*!
 * Constructs a GetUploadResponse object for \a reply to \a request, with parent \a parent.
 */
GetUploadResponse::GetUploadResponse(
        const GetUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetUploadResponsePrivate(this), parent)
{
    setRequest(new GetUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetUploadRequest * GetUploadResponse::request() const
{
    Q_D(const GetUploadResponse);
    return static_cast<const GetUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetUpload \a response.
 */
void GetUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetUploadResponsePrivate
 * \brief The GetUploadResponsePrivate class provides private implementation for GetUploadResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetUploadResponsePrivate object with public implementation \a q.
 */
GetUploadResponsePrivate::GetUploadResponsePrivate(
    GetUploadResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetUpload response element from \a xml.
 */
void GetUploadResponsePrivate::parseGetUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
