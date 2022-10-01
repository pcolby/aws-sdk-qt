// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchannelresponse.h"
#include "createchannelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::CreateChannelResponse
 * \brief The CreateChannelResponse class provides an interace for MediaTailor CreateChannel responses.
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
 * \sa MediaTailorClient::createChannel
 */

/*!
 * Constructs a CreateChannelResponse object for \a reply to \a request, with parent \a parent.
 */
CreateChannelResponse::CreateChannelResponse(
        const CreateChannelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new CreateChannelResponsePrivate(this), parent)
{
    setRequest(new CreateChannelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateChannelRequest * CreateChannelResponse::request() const
{
    Q_D(const CreateChannelResponse);
    return static_cast<const CreateChannelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor CreateChannel \a response.
 */
void CreateChannelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateChannelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::CreateChannelResponsePrivate
 * \brief The CreateChannelResponsePrivate class provides private implementation for CreateChannelResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a CreateChannelResponsePrivate object with public implementation \a q.
 */
CreateChannelResponsePrivate::CreateChannelResponsePrivate(
    CreateChannelResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor CreateChannel response element from \a xml.
 */
void CreateChannelResponsePrivate::parseCreateChannelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateChannelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
