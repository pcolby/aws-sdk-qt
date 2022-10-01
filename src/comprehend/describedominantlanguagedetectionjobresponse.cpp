// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedominantlanguagedetectionjobresponse.h"
#include "describedominantlanguagedetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeDominantLanguageDetectionJobResponse
 * \brief The DescribeDominantLanguageDetectionJobResponse class provides an interace for Comprehend DescribeDominantLanguageDetectionJob responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeDominantLanguageDetectionJob
 */

/*!
 * Constructs a DescribeDominantLanguageDetectionJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDominantLanguageDetectionJobResponse::DescribeDominantLanguageDetectionJobResponse(
        const DescribeDominantLanguageDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeDominantLanguageDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeDominantLanguageDetectionJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDominantLanguageDetectionJobRequest * DescribeDominantLanguageDetectionJobResponse::request() const
{
    Q_D(const DescribeDominantLanguageDetectionJobResponse);
    return static_cast<const DescribeDominantLanguageDetectionJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeDominantLanguageDetectionJob \a response.
 */
void DescribeDominantLanguageDetectionJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDominantLanguageDetectionJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeDominantLanguageDetectionJobResponsePrivate
 * \brief The DescribeDominantLanguageDetectionJobResponsePrivate class provides private implementation for DescribeDominantLanguageDetectionJobResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeDominantLanguageDetectionJobResponsePrivate object with public implementation \a q.
 */
DescribeDominantLanguageDetectionJobResponsePrivate::DescribeDominantLanguageDetectionJobResponsePrivate(
    DescribeDominantLanguageDetectionJobResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeDominantLanguageDetectionJob response element from \a xml.
 */
void DescribeDominantLanguageDetectionJobResponsePrivate::parseDescribeDominantLanguageDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDominantLanguageDetectionJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
