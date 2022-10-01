// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeofferingresponse.h"
#include "describeofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeOfferingResponse
 * \brief The DescribeOfferingResponse class provides an interace for MediaLive DescribeOffering responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeOffering
 */

/*!
 * Constructs a DescribeOfferingResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOfferingResponse::DescribeOfferingResponse(
        const DescribeOfferingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DescribeOfferingResponsePrivate(this), parent)
{
    setRequest(new DescribeOfferingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeOfferingRequest * DescribeOfferingResponse::request() const
{
    Q_D(const DescribeOfferingResponse);
    return static_cast<const DescribeOfferingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DescribeOffering \a response.
 */
void DescribeOfferingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOfferingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DescribeOfferingResponsePrivate
 * \brief The DescribeOfferingResponsePrivate class provides private implementation for DescribeOfferingResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeOfferingResponsePrivate object with public implementation \a q.
 */
DescribeOfferingResponsePrivate::DescribeOfferingResponsePrivate(
    DescribeOfferingResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DescribeOffering response element from \a xml.
 */
void DescribeOfferingResponsePrivate::parseDescribeOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOfferingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
