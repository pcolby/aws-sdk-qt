// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describevodsourceresponse.h"
#include "describevodsourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaTailor {

/*!
 * \class QtAws::MediaTailor::DescribeVodSourceResponse
 * \brief The DescribeVodSourceResponse class provides an interace for MediaTailor DescribeVodSource responses.
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
 * \sa MediaTailorClient::describeVodSource
 */

/*!
 * Constructs a DescribeVodSourceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVodSourceResponse::DescribeVodSourceResponse(
        const DescribeVodSourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaTailorResponse(new DescribeVodSourceResponsePrivate(this), parent)
{
    setRequest(new DescribeVodSourceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVodSourceRequest * DescribeVodSourceResponse::request() const
{
    Q_D(const DescribeVodSourceResponse);
    return static_cast<const DescribeVodSourceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaTailor DescribeVodSource \a response.
 */
void DescribeVodSourceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVodSourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaTailor::DescribeVodSourceResponsePrivate
 * \brief The DescribeVodSourceResponsePrivate class provides private implementation for DescribeVodSourceResponse.
 * \internal
 *
 * \inmodule QtAwsMediaTailor
 */

/*!
 * Constructs a DescribeVodSourceResponsePrivate object with public implementation \a q.
 */
DescribeVodSourceResponsePrivate::DescribeVodSourceResponsePrivate(
    DescribeVodSourceResponse * const q) : MediaTailorResponsePrivate(q)
{

}

/*!
 * Parses a MediaTailor DescribeVodSource response element from \a xml.
 */
void DescribeVodSourceResponsePrivate::parseDescribeVodSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVodSourceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaTailor
} // namespace QtAws
