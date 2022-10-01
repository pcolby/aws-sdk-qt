// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlivesourcesresponse.h"
#include "listlivesourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListLiveSourcesResponse
 * \brief The ListLiveSourcesResponse class provides an interace for MediaTailor ListLiveSources responses.
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
 * \sa MediaTailorClient::listLiveSources
 */

/*!
 * Constructs a ListLiveSourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListLiveSourcesResponse::ListLiveSourcesResponse(
        const ListLiveSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new ListLiveSourcesResponsePrivate(this), parent)
{
    setRequest(new ListLiveSourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLiveSourcesRequest * ListLiveSourcesResponse::request() const
{
    Q_D(const ListLiveSourcesResponse);
    return static_cast<const ListLiveSourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor ListLiveSources \a response.
 */
void ListLiveSourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLiveSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::ListLiveSourcesResponsePrivate
 * \brief The ListLiveSourcesResponsePrivate class provides private implementation for ListLiveSourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListLiveSourcesResponsePrivate object with public implementation \a q.
 */
ListLiveSourcesResponsePrivate::ListLiveSourcesResponsePrivate(
    ListLiveSourcesResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor ListLiveSources response element from \a xml.
 */
void ListLiveSourcesResponsePrivate::parseListLiveSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLiveSourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
