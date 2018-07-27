/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
    /// @todo
}

} // namespace MediaLive
} // namespace QtAws
