// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listvodsourcesresponse.h"
#include "listvodsourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListVodSourcesResponse
 * \brief The ListVodSourcesResponse class provides an interace for MediaTailor ListVodSources responses.
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
 * \sa MediaTailorClient::listVodSources
 */

/*!
 * Constructs a ListVodSourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListVodSourcesResponse::ListVodSourcesResponse(
        const ListVodSourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new ListVodSourcesResponsePrivate(this), parent)
{
    setRequest(new ListVodSourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListVodSourcesRequest * ListVodSourcesResponse::request() const
{
    Q_D(const ListVodSourcesResponse);
    return static_cast<const ListVodSourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor ListVodSources \a response.
 */
void ListVodSourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListVodSourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::ListVodSourcesResponsePrivate
 * \brief The ListVodSourcesResponsePrivate class provides private implementation for ListVodSourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListVodSourcesResponsePrivate object with public implementation \a q.
 */
ListVodSourcesResponsePrivate::ListVodSourcesResponsePrivate(
    ListVodSourcesResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor ListVodSources response element from \a xml.
 */
void ListVodSourcesResponsePrivate::parseListVodSourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVodSourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
