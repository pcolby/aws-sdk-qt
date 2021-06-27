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

#include "updatelongtermpricingresponse.h"
#include "updatelongtermpricingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::UpdateLongTermPricingResponse
 * \brief The UpdateLongTermPricingResponse class provides an interace for Snowball UpdateLongTermPricing responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snow Family is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The Snow commands described here
 *  provide access to the same functionality that is available in the AWS Snow Family Management Console, which enables you
 *  to create and manage jobs for a Snow device. To transfer data locally with a Snow device, you'll need to use the
 *  Snowball Edge client or the Amazon S3 API Interface for Snowball or AWS OpsHub for Snow Family. For more information,
 *  see the <a href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::updateLongTermPricing
 */

/*!
 * Constructs a UpdateLongTermPricingResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLongTermPricingResponse::UpdateLongTermPricingResponse(
        const UpdateLongTermPricingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new UpdateLongTermPricingResponsePrivate(this), parent)
{
    setRequest(new UpdateLongTermPricingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLongTermPricingRequest * UpdateLongTermPricingResponse::request() const
{
    return static_cast<const UpdateLongTermPricingRequest *>(SnowballResponse::request());
}

/*!
 * \reimp
 * Parses a successful Snowball UpdateLongTermPricing \a response.
 */
void UpdateLongTermPricingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLongTermPricingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::UpdateLongTermPricingResponsePrivate
 * \brief The UpdateLongTermPricingResponsePrivate class provides private implementation for UpdateLongTermPricingResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a UpdateLongTermPricingResponsePrivate object with public implementation \a q.
 */
UpdateLongTermPricingResponsePrivate::UpdateLongTermPricingResponsePrivate(
    UpdateLongTermPricingResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball UpdateLongTermPricing response element from \a xml.
 */
void UpdateLongTermPricingResponsePrivate::parseUpdateLongTermPricingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLongTermPricingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
