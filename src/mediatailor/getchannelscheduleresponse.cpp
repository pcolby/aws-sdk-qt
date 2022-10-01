// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchannelscheduleresponse.h"
#include "getchannelscheduleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::GetChannelScheduleResponse
 * \brief The GetChannelScheduleResponse class provides an interace for MediaTailor GetChannelSchedule responses.
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
 * \sa MediaTailorClient::getChannelSchedule
 */

/*!
 * Constructs a GetChannelScheduleResponse object for \a reply to \a request, with parent \a parent.
 */
GetChannelScheduleResponse::GetChannelScheduleResponse(
        const GetChannelScheduleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new GetChannelScheduleResponsePrivate(this), parent)
{
    setRequest(new GetChannelScheduleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetChannelScheduleRequest * GetChannelScheduleResponse::request() const
{
    Q_D(const GetChannelScheduleResponse);
    return static_cast<const GetChannelScheduleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor GetChannelSchedule \a response.
 */
void GetChannelScheduleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetChannelScheduleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::GetChannelScheduleResponsePrivate
 * \brief The GetChannelScheduleResponsePrivate class provides private implementation for GetChannelScheduleResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a GetChannelScheduleResponsePrivate object with public implementation \a q.
 */
GetChannelScheduleResponsePrivate::GetChannelScheduleResponsePrivate(
    GetChannelScheduleResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor GetChannelSchedule response element from \a xml.
 */
void GetChannelScheduleResponsePrivate::parseGetChannelScheduleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChannelScheduleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
