// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevodsourceresponse.h"
#include "updatevodsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::UpdateVodSourceResponse
 * \brief The UpdateVodSourceResponse class provides an interace for MediaTailor UpdateVodSource responses.
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
 * \sa MediaTailorClient::updateVodSource
 */

/*!
 * Constructs a UpdateVodSourceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVodSourceResponse::UpdateVodSourceResponse(
        const UpdateVodSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new UpdateVodSourceResponsePrivate(this), parent)
{
    setRequest(new UpdateVodSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVodSourceRequest * UpdateVodSourceResponse::request() const
{
    Q_D(const UpdateVodSourceResponse);
    return static_cast<const UpdateVodSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor UpdateVodSource \a response.
 */
void UpdateVodSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVodSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::UpdateVodSourceResponsePrivate
 * \brief The UpdateVodSourceResponsePrivate class provides private implementation for UpdateVodSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a UpdateVodSourceResponsePrivate object with public implementation \a q.
 */
UpdateVodSourceResponsePrivate::UpdateVodSourceResponsePrivate(
    UpdateVodSourceResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor UpdateVodSource response element from \a xml.
 */
void UpdateVodSourceResponsePrivate::parseUpdateVodSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVodSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
