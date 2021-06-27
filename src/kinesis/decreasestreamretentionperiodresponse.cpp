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

#include "decreasestreamretentionperiodresponse.h"
#include "decreasestreamretentionperiodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::DecreaseStreamRetentionPeriodResponse
 * \brief The DecreaseStreamRetentionPeriodResponse class provides an interace for Kinesis DecreaseStreamRetentionPeriod responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::decreaseStreamRetentionPeriod
 */

/*!
 * Constructs a DecreaseStreamRetentionPeriodResponse object for \a reply to \a request, with parent \a parent.
 */
DecreaseStreamRetentionPeriodResponse::DecreaseStreamRetentionPeriodResponse(
        const DecreaseStreamRetentionPeriodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new DecreaseStreamRetentionPeriodResponsePrivate(this), parent)
{
    setRequest(new DecreaseStreamRetentionPeriodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DecreaseStreamRetentionPeriodRequest * DecreaseStreamRetentionPeriodResponse::request() const
{
    return static_cast<const DecreaseStreamRetentionPeriodRequest *>(KinesisResponse::request());
}

/*!
 * \reimp
 * Parses a successful Kinesis DecreaseStreamRetentionPeriod \a response.
 */
void DecreaseStreamRetentionPeriodResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DecreaseStreamRetentionPeriodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::DecreaseStreamRetentionPeriodResponsePrivate
 * \brief The DecreaseStreamRetentionPeriodResponsePrivate class provides private implementation for DecreaseStreamRetentionPeriodResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a DecreaseStreamRetentionPeriodResponsePrivate object with public implementation \a q.
 */
DecreaseStreamRetentionPeriodResponsePrivate::DecreaseStreamRetentionPeriodResponsePrivate(
    DecreaseStreamRetentionPeriodResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis DecreaseStreamRetentionPeriod response element from \a xml.
 */
void DecreaseStreamRetentionPeriodResponsePrivate::parseDecreaseStreamRetentionPeriodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DecreaseStreamRetentionPeriodResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
