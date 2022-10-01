// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsourcelocationsresponse.h"
#include "listsourcelocationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListSourceLocationsResponse
 * \brief The ListSourceLocationsResponse class provides an interace for MediaTailor ListSourceLocations responses.
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
 * \sa MediaTailorClient::listSourceLocations
 */

/*!
 * Constructs a ListSourceLocationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSourceLocationsResponse::ListSourceLocationsResponse(
        const ListSourceLocationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new ListSourceLocationsResponsePrivate(this), parent)
{
    setRequest(new ListSourceLocationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSourceLocationsRequest * ListSourceLocationsResponse::request() const
{
    Q_D(const ListSourceLocationsResponse);
    return static_cast<const ListSourceLocationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor ListSourceLocations \a response.
 */
void ListSourceLocationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSourceLocationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::ListSourceLocationsResponsePrivate
 * \brief The ListSourceLocationsResponsePrivate class provides private implementation for ListSourceLocationsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListSourceLocationsResponsePrivate object with public implementation \a q.
 */
ListSourceLocationsResponsePrivate::ListSourceLocationsResponsePrivate(
    ListSourceLocationsResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor ListSourceLocations response element from \a xml.
 */
void ListSourceLocationsResponsePrivate::parseListSourceLocationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSourceLocationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
