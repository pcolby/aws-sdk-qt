// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listalertsresponse.h"
#include "listalertsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListAlertsResponse
 * \brief The ListAlertsResponse class provides an interace for MediaTailor ListAlerts responses.
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
 * \sa MediaTailorClient::listAlerts
 */

/*!
 * Constructs a ListAlertsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAlertsResponse::ListAlertsResponse(
        const ListAlertsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new ListAlertsResponsePrivate(this), parent)
{
    setRequest(new ListAlertsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAlertsRequest * ListAlertsResponse::request() const
{
    Q_D(const ListAlertsResponse);
    return static_cast<const ListAlertsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor ListAlerts \a response.
 */
void ListAlertsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAlertsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::ListAlertsResponsePrivate
 * \brief The ListAlertsResponsePrivate class provides private implementation for ListAlertsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListAlertsResponsePrivate object with public implementation \a q.
 */
ListAlertsResponsePrivate::ListAlertsResponsePrivate(
    ListAlertsResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor ListAlerts response element from \a xml.
 */
void ListAlertsResponsePrivate::parseListAlertsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAlertsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
