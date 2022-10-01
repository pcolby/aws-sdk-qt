// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevodsourceresponse.h"
#include "deletevodsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DeleteVodSourceResponse
 * \brief The DeleteVodSourceResponse class provides an interace for MediaTailor DeleteVodSource responses.
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
 * \sa MediaTailorClient::deleteVodSource
 */

/*!
 * Constructs a DeleteVodSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVodSourceResponse::DeleteVodSourceResponse(
        const DeleteVodSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new DeleteVodSourceResponsePrivate(this), parent)
{
    setRequest(new DeleteVodSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVodSourceRequest * DeleteVodSourceResponse::request() const
{
    Q_D(const DeleteVodSourceResponse);
    return static_cast<const DeleteVodSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor DeleteVodSource \a response.
 */
void DeleteVodSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVodSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::DeleteVodSourceResponsePrivate
 * \brief The DeleteVodSourceResponsePrivate class provides private implementation for DeleteVodSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DeleteVodSourceResponsePrivate object with public implementation \a q.
 */
DeleteVodSourceResponsePrivate::DeleteVodSourceResponsePrivate(
    DeleteVodSourceResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor DeleteVodSource response element from \a xml.
 */
void DeleteVodSourceResponsePrivate::parseDeleteVodSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVodSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
