// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "configurelogsforplaybackconfigurationresponse.h"
#include "configurelogsforplaybackconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::ConfigureLogsForPlaybackConfigurationResponse
 * \brief The ConfigureLogsForPlaybackConfigurationResponse class provides an interace for MediaTailor ConfigureLogsForPlaybackConfiguration responses.
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
 * \sa MediaTailorClient::configureLogsForPlaybackConfiguration
 */

/*!
 * Constructs a ConfigureLogsForPlaybackConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
ConfigureLogsForPlaybackConfigurationResponse::ConfigureLogsForPlaybackConfigurationResponse(
        const ConfigureLogsForPlaybackConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new ConfigureLogsForPlaybackConfigurationResponsePrivate(this), parent)
{
    setRequest(new ConfigureLogsForPlaybackConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ConfigureLogsForPlaybackConfigurationRequest * ConfigureLogsForPlaybackConfigurationResponse::request() const
{
    Q_D(const ConfigureLogsForPlaybackConfigurationResponse);
    return static_cast<const ConfigureLogsForPlaybackConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor ConfigureLogsForPlaybackConfiguration \a response.
 */
void ConfigureLogsForPlaybackConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ConfigureLogsForPlaybackConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::ConfigureLogsForPlaybackConfigurationResponsePrivate
 * \brief The ConfigureLogsForPlaybackConfigurationResponsePrivate class provides private implementation for ConfigureLogsForPlaybackConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a ConfigureLogsForPlaybackConfigurationResponsePrivate object with public implementation \a q.
 */
ConfigureLogsForPlaybackConfigurationResponsePrivate::ConfigureLogsForPlaybackConfigurationResponsePrivate(
    ConfigureLogsForPlaybackConfigurationResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor ConfigureLogsForPlaybackConfiguration response element from \a xml.
 */
void ConfigureLogsForPlaybackConfigurationResponsePrivate::parseConfigureLogsForPlaybackConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ConfigureLogsForPlaybackConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
