// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontactresponse.h"
#include "describecontactresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GroundStation {

/*!
 * \class QtAws::GroundStation::DescribeContactResponse
 * \brief The DescribeContactResponse class provides an interace for GroundStation DescribeContact responses.
 *
 * \inmodule QtAwsGroundStation
 *
 *  Welcome to the AWS Ground Station API Reference. AWS Ground Station is a fully managed service that enables you to
 *  control satellite communications, downlink and process satellite data, and scale your satellite operations efficiently
 *  and cost-effectively without having to build or manage your own ground station
 *
 * \sa GroundStationClient::describeContact
 */

/*!
 * Constructs a DescribeContactResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeContactResponse::DescribeContactResponse(
        const DescribeContactRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GroundStationResponse(new DescribeContactResponsePrivate(this), parent)
{
    setRequest(new DescribeContactRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeContactRequest * DescribeContactResponse::request() const
{
    Q_D(const DescribeContactResponse);
    return static_cast<const DescribeContactRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GroundStation DescribeContact \a response.
 */
void DescribeContactResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeContactResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GroundStation::DescribeContactResponsePrivate
 * \brief The DescribeContactResponsePrivate class provides private implementation for DescribeContactResponse.
 * \internal
 *
 * \inmodule QtAwsGroundStation
 */

/*!
 * Constructs a DescribeContactResponsePrivate object with public implementation \a q.
 */
DescribeContactResponsePrivate::DescribeContactResponsePrivate(
    DescribeContactResponse * const q) : GroundStationResponsePrivate(q)
{

}

/*!
 * Parses a GroundStation DescribeContact response element from \a xml.
 */
void DescribeContactResponsePrivate::parseDescribeContactResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContactResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GroundStation
} // namespace QtAws
