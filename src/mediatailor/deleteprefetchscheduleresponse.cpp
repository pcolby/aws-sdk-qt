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

#include "deleteprefetchscheduleresponse.h"
#include "deleteprefetchscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeletePrefetchScheduleResponse
 * \brief The DeletePrefetchScheduleResponse class provides an interace for MediaTailor DeletePrefetchSchedule responses.
 *
 * \inmodule QtAwsMediaTailor
 *
 *  Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad insertion and linear channels. With MediaTailor,
 *  you can assemble existing content into a linear stream and serve targeted ads to viewers while maintaining broadcast
 *  quality in over-the-top (OTT) video applications. For information about using the service, including detailed
 *  information about the settings covered in this guide, see the <a
 *  href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental MediaTailor User
 * 
 *  Guide</a>>
 * 
 *  Through the SDKs and the CLI you manage AWS Elemental MediaTailor configurations and channels the same as you do through
 *  the console. For example, you specify ad insertion behavior and mapping information for the origin server and the ad
 *  decision server
 *
 * \sa MediaTailorClient::deletePrefetchSchedule
 */

/*!
 * Constructs a DeletePrefetchScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePrefetchScheduleResponse::DeletePrefetchScheduleResponse(
        const DeletePrefetchScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new DeletePrefetchScheduleResponsePrivate(this), parent)
{
    setRequest(new DeletePrefetchScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePrefetchScheduleRequest * DeletePrefetchScheduleResponse::request() const
{
    Q_D(const DeletePrefetchScheduleResponse);
    return static_cast<const DeletePrefetchScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor DeletePrefetchSchedule \a response.
 */
void DeletePrefetchScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePrefetchScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::DeletePrefetchScheduleResponsePrivate
 * \brief The DeletePrefetchScheduleResponsePrivate class provides private implementation for DeletePrefetchScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeletePrefetchScheduleResponsePrivate object with public implementation \a q.
 */
DeletePrefetchScheduleResponsePrivate::DeletePrefetchScheduleResponsePrivate(
    DeletePrefetchScheduleResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor DeletePrefetchSchedule response element from \a xml.
 */
void DeletePrefetchScheduleResponsePrivate::parseDeletePrefetchScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePrefetchScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
