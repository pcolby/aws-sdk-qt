/*
    Copyright 2013-2020 Paul Colby

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

#include "updateuploadresponse.h"
#include "updateuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateUploadResponse
 * \brief The UpdateUploadResponse class provides an interace for DeviceFarm UpdateUpload responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateUpload
 */

/*!
 * Constructs a UpdateUploadResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateUploadResponse::UpdateUploadResponse(
        const UpdateUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new UpdateUploadResponsePrivate(this), parent)
{
    setRequest(new UpdateUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateUploadRequest * UpdateUploadResponse::request() const
{
    Q_D(const UpdateUploadResponse);
    return static_cast<const UpdateUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm UpdateUpload \a response.
 */
void UpdateUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::UpdateUploadResponsePrivate
 * \brief The UpdateUploadResponsePrivate class provides private implementation for UpdateUploadResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateUploadResponsePrivate object with public implementation \a q.
 */
UpdateUploadResponsePrivate::UpdateUploadResponsePrivate(
    UpdateUploadResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm UpdateUpload response element from \a xml.
 */
void UpdateUploadResponsePrivate::parseUpdateUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
