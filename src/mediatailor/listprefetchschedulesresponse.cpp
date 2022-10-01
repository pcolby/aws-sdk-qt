// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprefetchschedulesresponse.h"
#include "listprefetchschedulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListPrefetchSchedulesResponse
 * \brief The ListPrefetchSchedulesResponse class provides an interace for MediaTailor ListPrefetchSchedules responses.
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
 * \sa MediaTailorClient::listPrefetchSchedules
 */

/*!
 * Constructs a ListPrefetchSchedulesResponse object for \a reply to \a request, with parent \a parent.
 */
ListPrefetchSchedulesResponse::ListPrefetchSchedulesResponse(
        const ListPrefetchSchedulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new ListPrefetchSchedulesResponsePrivate(this), parent)
{
    setRequest(new ListPrefetchSchedulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPrefetchSchedulesRequest * ListPrefetchSchedulesResponse::request() const
{
    Q_D(const ListPrefetchSchedulesResponse);
    return static_cast<const ListPrefetchSchedulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor ListPrefetchSchedules \a response.
 */
void ListPrefetchSchedulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListPrefetchSchedulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::ListPrefetchSchedulesResponsePrivate
 * \brief The ListPrefetchSchedulesResponsePrivate class provides private implementation for ListPrefetchSchedulesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListPrefetchSchedulesResponsePrivate object with public implementation \a q.
 */
ListPrefetchSchedulesResponsePrivate::ListPrefetchSchedulesResponsePrivate(
    ListPrefetchSchedulesResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor ListPrefetchSchedules response element from \a xml.
 */
void ListPrefetchSchedulesResponsePrivate::parseListPrefetchSchedulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPrefetchSchedulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
