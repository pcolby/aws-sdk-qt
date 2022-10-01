// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describebatchinferencejobresponse.h"
#include "describebatchinferencejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeBatchInferenceJobResponse
 * \brief The DescribeBatchInferenceJobResponse class provides an interace for Personalize DescribeBatchInferenceJob responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeBatchInferenceJob
 */

/*!
 * Constructs a DescribeBatchInferenceJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBatchInferenceJobResponse::DescribeBatchInferenceJobResponse(
        const DescribeBatchInferenceJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeBatchInferenceJobResponsePrivate(this), parent)
{
    setRequest(new DescribeBatchInferenceJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBatchInferenceJobRequest * DescribeBatchInferenceJobResponse::request() const
{
    Q_D(const DescribeBatchInferenceJobResponse);
    return static_cast<const DescribeBatchInferenceJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeBatchInferenceJob \a response.
 */
void DescribeBatchInferenceJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBatchInferenceJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeBatchInferenceJobResponsePrivate
 * \brief The DescribeBatchInferenceJobResponsePrivate class provides private implementation for DescribeBatchInferenceJobResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeBatchInferenceJobResponsePrivate object with public implementation \a q.
 */
DescribeBatchInferenceJobResponsePrivate::DescribeBatchInferenceJobResponsePrivate(
    DescribeBatchInferenceJobResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeBatchInferenceJob response element from \a xml.
 */
void DescribeBatchInferenceJobResponsePrivate::parseDescribeBatchInferenceJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBatchInferenceJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
