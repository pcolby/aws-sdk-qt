// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesourcelocationresponse.h"
#include "updatesourcelocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::UpdateSourceLocationResponse
 * \brief The UpdateSourceLocationResponse class provides an interace for MediaTailor UpdateSourceLocation responses.
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
 * \sa MediaTailorClient::updateSourceLocation
 */

/*!
 * Constructs a UpdateSourceLocationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSourceLocationResponse::UpdateSourceLocationResponse(
        const UpdateSourceLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new UpdateSourceLocationResponsePrivate(this), parent)
{
    setRequest(new UpdateSourceLocationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSourceLocationRequest * UpdateSourceLocationResponse::request() const
{
    Q_D(const UpdateSourceLocationResponse);
    return static_cast<const UpdateSourceLocationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor UpdateSourceLocation \a response.
 */
void UpdateSourceLocationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSourceLocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::UpdateSourceLocationResponsePrivate
 * \brief The UpdateSourceLocationResponsePrivate class provides private implementation for UpdateSourceLocationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a UpdateSourceLocationResponsePrivate object with public implementation \a q.
 */
UpdateSourceLocationResponsePrivate::UpdateSourceLocationResponsePrivate(
    UpdateSourceLocationResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor UpdateSourceLocation response element from \a xml.
 */
void UpdateSourceLocationResponsePrivate::parseUpdateSourceLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSourceLocationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
