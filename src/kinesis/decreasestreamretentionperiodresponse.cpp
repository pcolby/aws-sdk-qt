// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const DecreaseStreamRetentionPeriodResponse);
    return static_cast<const DecreaseStreamRetentionPeriodRequest *>(d->request);
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
