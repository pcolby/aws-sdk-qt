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

#include "deleterunresponse.h"
#include "deleterunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteRunResponse
 * \brief The DeleteRunResponse class provides an interace for DeviceFarm DeleteRun responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteRun
 */

/*!
 * Constructs a DeleteRunResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRunResponse::DeleteRunResponse(
        const DeleteRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new DeleteRunResponsePrivate(this), parent)
{
    setRequest(new DeleteRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRunRequest * DeleteRunResponse::request() const
{
    Q_D(const DeleteRunResponse);
    return static_cast<const DeleteRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm DeleteRun \a response.
 */
void DeleteRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::DeleteRunResponsePrivate
 * \brief The DeleteRunResponsePrivate class provides private implementation for DeleteRunResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteRunResponsePrivate object with public implementation \a q.
 */
DeleteRunResponsePrivate::DeleteRunResponsePrivate(
    DeleteRunResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm DeleteRun response element from \a xml.
 */
void DeleteRunResponsePrivate::parseDeleteRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
