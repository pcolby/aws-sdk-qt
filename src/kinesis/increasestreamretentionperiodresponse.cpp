// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(IncreaseStreamRetentionPeriodResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kinesis
} // namespace QtAws
