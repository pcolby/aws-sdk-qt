// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describereservationresponse.h"
#include "describereservationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::DescribeReservationResponse
 * \brief The DescribeReservationResponse class provides an interace for MediaConnect DescribeReservation responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::describeReservation
 */

/*!
 * Constructs a DescribeReservationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeReservationResponse::DescribeReservationResponse(
        const DescribeReservationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new DescribeReservationResponsePrivate(this), parent)
{
    setRequest(new DescribeReservationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeReservationRequest * DescribeReservationResponse::request() const
{
    Q_D(const DescribeReservationResponse);
    return static_cast<const DescribeReservationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect DescribeReservation \a response.
 */
void DescribeReservationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeReservationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::DescribeReservationResponsePrivate
 * \brief The DescribeReservationResponsePrivate class provides private implementation for DescribeReservationResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a DescribeReservationResponsePrivate object with public implementation \a q.
 */
DescribeReservationResponsePrivate::DescribeReservationResponsePrivate(
    DescribeReservationResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect DescribeReservation response element from \a xml.
 */
void DescribeReservationResponsePrivate::parseDescribeReservationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
