// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelivesourceresponse.h"
#include "describelivesourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DescribeLiveSourceResponse
 * \brief The DescribeLiveSourceResponse class provides an interace for MediaTailor DescribeLiveSource responses.
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
 * \sa MediaTailorClient::describeLiveSource
 */

/*!
 * Constructs a DescribeLiveSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLiveSourceResponse::DescribeLiveSourceResponse(
        const DescribeLiveSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new DescribeLiveSourceResponsePrivate(this), parent)
{
    setRequest(new DescribeLiveSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLiveSourceRequest * DescribeLiveSourceResponse::request() const
{
    Q_D(const DescribeLiveSourceResponse);
    return static_cast<const DescribeLiveSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor DescribeLiveSource \a response.
 */
void DescribeLiveSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLiveSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::DescribeLiveSourceResponsePrivate
 * \brief The DescribeLiveSourceResponsePrivate class provides private implementation for DescribeLiveSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DescribeLiveSourceResponsePrivate object with public implementation \a q.
 */
DescribeLiveSourceResponsePrivate::DescribeLiveSourceResponsePrivate(
    DescribeLiveSourceResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor DescribeLiveSource response element from \a xml.
 */
void DescribeLiveSourceResponsePrivate::parseDescribeLiveSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLiveSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
