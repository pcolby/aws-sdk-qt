/*
    Copyright 2013-2021 Paul Colby

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
    return static_cast<const DescribeOfferingRequest *>(MediaConnectResponse::request());
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
