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

#include "listlongtermpricingresponse.h"
#include "listlongtermpricingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::ListLongTermPricingResponse
 * \brief The ListLongTermPricingResponse class provides an interace for Snowball ListLongTermPricing responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::listLongTermPricing
 */

/*!
 * Constructs a ListLongTermPricingResponse object for \a reply to \a request, with parent \a parent.
 */
ListLongTermPricingResponse::ListLongTermPricingResponse(
        const ListLongTermPricingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new ListLongTermPricingResponsePrivate(this), parent)
{
    setRequest(new ListLongTermPricingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLongTermPricingRequest * ListLongTermPricingResponse::request() const
{
    Q_D(const ListLongTermPricingResponse);
    return static_cast<const ListLongTermPricingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball ListLongTermPricing \a response.
 */
void ListLongTermPricingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLongTermPricingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::ListLongTermPricingResponsePrivate
 * \brief The ListLongTermPricingResponsePrivate class provides private implementation for ListLongTermPricingResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a ListLongTermPricingResponsePrivate object with public implementation \a q.
 */
ListLongTermPricingResponsePrivate::ListLongTermPricingResponsePrivate(
    ListLongTermPricingResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball ListLongTermPricing response element from \a xml.
 */
void ListLongTermPricingResponsePrivate::parseListLongTermPricingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLongTermPricingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
