// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getprefetchscheduleresponse.h"
#include "getprefetchscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::GetPrefetchScheduleResponse
 * \brief The GetPrefetchScheduleResponse class provides an interace for MediaTailor GetPrefetchSchedule responses.
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
 * \sa MediaTailorClient::getPrefetchSchedule
 */

/*!
 * Constructs a GetPrefetchScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
GetPrefetchScheduleResponse::GetPrefetchScheduleResponse(
        const GetPrefetchScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new GetPrefetchScheduleResponsePrivate(this), parent)
{
    setRequest(new GetPrefetchScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPrefetchScheduleRequest * GetPrefetchScheduleResponse::request() const
{
    Q_D(const GetPrefetchScheduleResponse);
    return static_cast<const GetPrefetchScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor GetPrefetchSchedule \a response.
 */
void GetPrefetchScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPrefetchScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::GetPrefetchScheduleResponsePrivate
 * \brief The GetPrefetchScheduleResponsePrivate class provides private implementation for GetPrefetchScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a GetPrefetchScheduleResponsePrivate object with public implementation \a q.
 */
GetPrefetchScheduleResponsePrivate::GetPrefetchScheduleResponsePrivate(
    GetPrefetchScheduleResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor GetPrefetchSchedule response element from \a xml.
 */
void GetPrefetchScheduleResponsePrivate::parseGetPrefetchScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPrefetchScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
