// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeofferingresponse.h"
#include "describeofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::DescribeOfferingResponse
 * \brief The DescribeOfferingResponse class provides an interace for MediaConnect DescribeOffering responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::describeOffering
 */

/*!
 * Constructs a DescribeOfferingResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeOfferingResponse::DescribeOfferingResponse(
        const DescribeOfferingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new DescribeOfferingResponsePrivate(this), parent)
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
 * Parses a successful MediaConnect DescribeOffering \a response.
 */
void DescribeOfferingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeOfferingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::DescribeOfferingResponsePrivate
 * \brief The DescribeOfferingResponsePrivate class provides private implementation for DescribeOfferingResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a DescribeOfferingResponsePrivate object with public implementation \a q.
 */
DescribeOfferingResponsePrivate::DescribeOfferingResponsePrivate(
    DescribeOfferingResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect DescribeOffering response element from \a xml.
 */
void DescribeOfferingResponsePrivate::parseDescribeOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOfferingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
