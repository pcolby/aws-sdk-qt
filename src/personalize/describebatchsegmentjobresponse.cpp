// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebatchsegmentjobresponse.h"
#include "describebatchsegmentjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeBatchSegmentJobResponse
 * \brief The DescribeBatchSegmentJobResponse class provides an interace for Personalize DescribeBatchSegmentJob responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeBatchSegmentJob
 */

/*!
 * Constructs a DescribeBatchSegmentJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBatchSegmentJobResponse::DescribeBatchSegmentJobResponse(
        const DescribeBatchSegmentJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeBatchSegmentJobResponsePrivate(this), parent)
{
    setRequest(new DescribeBatchSegmentJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBatchSegmentJobRequest * DescribeBatchSegmentJobResponse::request() const
{
    Q_D(const DescribeBatchSegmentJobResponse);
    return static_cast<const DescribeBatchSegmentJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeBatchSegmentJob \a response.
 */
void DescribeBatchSegmentJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBatchSegmentJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeBatchSegmentJobResponsePrivate
 * \brief The DescribeBatchSegmentJobResponsePrivate class provides private implementation for DescribeBatchSegmentJobResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeBatchSegmentJobResponsePrivate object with public implementation \a q.
 */
DescribeBatchSegmentJobResponsePrivate::DescribeBatchSegmentJobResponsePrivate(
    DescribeBatchSegmentJobResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeBatchSegmentJob response element from \a xml.
 */
void DescribeBatchSegmentJobResponsePrivate::parseDescribeBatchSegmentJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBatchSegmentJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
