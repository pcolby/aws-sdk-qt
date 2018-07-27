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

#include "createuploadresponse.h"
#include "createuploadresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateUploadResponse
 * \brief The CreateUploadResponse class provides an interace for DeviceFarm CreateUpload responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createUpload
 */

/*!
 * Constructs a CreateUploadResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUploadResponse::CreateUploadResponse(
        const CreateUploadRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new CreateUploadResponsePrivate(this), parent)
{
    setRequest(new CreateUploadRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUploadRequest * CreateUploadResponse::request() const
{
    Q_D(const CreateUploadResponse);
    return static_cast<const CreateUploadRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm CreateUpload \a response.
 */
void CreateUploadResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUploadResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::CreateUploadResponsePrivate
 * \brief The CreateUploadResponsePrivate class provides private implementation for CreateUploadResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateUploadResponsePrivate object with public implementation \a q.
 */
CreateUploadResponsePrivate::CreateUploadResponsePrivate(
    CreateUploadResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm CreateUpload response element from \a xml.
 */
void CreateUploadResponsePrivate::parseCreateUploadResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUploadResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
