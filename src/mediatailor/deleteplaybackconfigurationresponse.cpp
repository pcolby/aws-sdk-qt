// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteplaybackconfigurationresponse.h"
#include "deleteplaybackconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeletePlaybackConfigurationResponse
 * \brief The DeletePlaybackConfigurationResponse class provides an interace for MediaTailor DeletePlaybackConfiguration responses.
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
 * \sa MediaTailorClient::deletePlaybackConfiguration
 */

/*!
 * Constructs a DeletePlaybackConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePlaybackConfigurationResponse::DeletePlaybackConfigurationResponse(
        const DeletePlaybackConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new DeletePlaybackConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeletePlaybackConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePlaybackConfigurationRequest * DeletePlaybackConfigurationResponse::request() const
{
    Q_D(const DeletePlaybackConfigurationResponse);
    return static_cast<const DeletePlaybackConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor DeletePlaybackConfiguration \a response.
 */
void DeletePlaybackConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePlaybackConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::DeletePlaybackConfigurationResponsePrivate
 * \brief The DeletePlaybackConfigurationResponsePrivate class provides private implementation for DeletePlaybackConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeletePlaybackConfigurationResponsePrivate object with public implementation \a q.
 */
DeletePlaybackConfigurationResponsePrivate::DeletePlaybackConfigurationResponsePrivate(
    DeletePlaybackConfigurationResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor DeletePlaybackConfiguration response element from \a xml.
 */
void DeletePlaybackConfigurationResponsePrivate::parseDeletePlaybackConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePlaybackConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
