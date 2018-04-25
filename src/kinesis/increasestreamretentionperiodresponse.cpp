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

#include "increasestreamretentionperiodresponse.h"
#include "increasestreamretentionperiodresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::IncreaseStreamRetentionPeriodResponse
 * \brief The IncreaseStreamRetentionPeriodResponse class provides an interace for Kinesis IncreaseStreamRetentionPeriod responses.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::increaseStreamRetentionPeriod
 */

/*!
 * Constructs a IncreaseStreamRetentionPeriodResponse object for \a reply to \a request, with parent \a parent.
 */
IncreaseStreamRetentionPeriodResponse::IncreaseStreamRetentionPeriodResponse(
        const IncreaseStreamRetentionPeriodRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisResponse(new IncreaseStreamRetentionPeriodResponsePrivate(this), parent)
{
    setRequest(new IncreaseStreamRetentionPeriodRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const IncreaseStreamRetentionPeriodRequest * IncreaseStreamRetentionPeriodResponse::request() const
{
    Q_D(const IncreaseStreamRetentionPeriodResponse);
    return static_cast<const IncreaseStreamRetentionPeriodRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kinesis IncreaseStreamRetentionPeriod \a response.
 */
void IncreaseStreamRetentionPeriodResponse::parseSuccess(QIODevice &response)
{
    Q_D(IncreaseStreamRetentionPeriodResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kinesis::IncreaseStreamRetentionPeriodResponsePrivate
 * \brief The IncreaseStreamRetentionPeriodResponsePrivate class provides private implementation for IncreaseStreamRetentionPeriodResponse.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a IncreaseStreamRetentionPeriodResponsePrivate object with public implementation \a q.
 */
IncreaseStreamRetentionPeriodResponsePrivate::IncreaseStreamRetentionPeriodResponsePrivate(
    IncreaseStreamRetentionPeriodResponse * const q) : KinesisResponsePrivate(q)
{

}

/*!
 * Parses a Kinesis IncreaseStreamRetentionPeriod response element from \a xml.
 */
void IncreaseStreamRetentionPeriodResponsePrivate::parseIncreaseStreamRetentionPeriodResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("IncreaseStreamRetentionPeriodResponse"));
    /// @todo
}

} // namespace Kinesis
} // namespace QtAws
