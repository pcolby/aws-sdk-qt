// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putplaybackconfigurationresponse.h"
#include "putplaybackconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::PutPlaybackConfigurationResponse
 * \brief The PutPlaybackConfigurationResponse class provides an interace for MediaTailor PutPlaybackConfiguration responses.
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
 * \sa MediaTailorClient::putPlaybackConfiguration
 */

/*!
 * Constructs a PutPlaybackConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutPlaybackConfigurationResponse::PutPlaybackConfigurationResponse(
        const PutPlaybackConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new PutPlaybackConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutPlaybackConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPlaybackConfigurationRequest * PutPlaybackConfigurationResponse::request() const
{
    Q_D(const PutPlaybackConfigurationResponse);
    return static_cast<const PutPlaybackConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor PutPlaybackConfiguration \a response.
 */
void PutPlaybackConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPlaybackConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::PutPlaybackConfigurationResponsePrivate
 * \brief The PutPlaybackConfigurationResponsePrivate class provides private implementation for PutPlaybackConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a PutPlaybackConfigurationResponsePrivate object with public implementation \a q.
 */
PutPlaybackConfigurationResponsePrivate::PutPlaybackConfigurationResponsePrivate(
    PutPlaybackConfigurationResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor PutPlaybackConfiguration response element from \a xml.
 */
void PutPlaybackConfigurationResponsePrivate::parsePutPlaybackConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPlaybackConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
