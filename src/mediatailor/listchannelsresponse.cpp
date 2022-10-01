// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelsresponse.h"
#include "listchannelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ListChannelsResponse
 * \brief The ListChannelsResponse class provides an interace for MediaTailor ListChannels responses.
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
 * \sa MediaTailorClient::listChannels
 */

/*!
 * Constructs a ListChannelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListChannelsResponse::ListChannelsResponse(
        const ListChannelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new ListChannelsResponsePrivate(this), parent)
{
    setRequest(new ListChannelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListChannelsRequest * ListChannelsResponse::request() const
{
    Q_D(const ListChannelsResponse);
    return static_cast<const ListChannelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor ListChannels \a response.
 */
void ListChannelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListChannelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::ListChannelsResponsePrivate
 * \brief The ListChannelsResponsePrivate class provides private implementation for ListChannelsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ListChannelsResponsePrivate object with public implementation \a q.
 */
ListChannelsResponsePrivate::ListChannelsResponsePrivate(
    ListChannelsResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor ListChannels response element from \a xml.
 */
void ListChannelsResponsePrivate::parseListChannelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListChannelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
