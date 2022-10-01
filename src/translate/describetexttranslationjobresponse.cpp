// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetexttranslationjobresponse.h"
#include "describetexttranslationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::DescribeTextTranslationJobResponse
 * \brief The DescribeTextTranslationJobResponse class provides an interace for Translate DescribeTextTranslationJob responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::describeTextTranslationJob
 */

/*!
 * Constructs a DescribeTextTranslationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTextTranslationJobResponse::DescribeTextTranslationJobResponse(
        const DescribeTextTranslationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new DescribeTextTranslationJobResponsePrivate(this), parent)
{
    setRequest(new DescribeTextTranslationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTextTranslationJobRequest * DescribeTextTranslationJobResponse::request() const
{
    Q_D(const DescribeTextTranslationJobResponse);
    return static_cast<const DescribeTextTranslationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate DescribeTextTranslationJob \a response.
 */
void DescribeTextTranslationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTextTranslationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::DescribeTextTranslationJobResponsePrivate
 * \brief The DescribeTextTranslationJobResponsePrivate class provides private implementation for DescribeTextTranslationJobResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a DescribeTextTranslationJobResponsePrivate object with public implementation \a q.
 */
DescribeTextTranslationJobResponsePrivate::DescribeTextTranslationJobResponsePrivate(
    DescribeTextTranslationJobResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate DescribeTextTranslationJob response element from \a xml.
 */
void DescribeTextTranslationJobResponsePrivate::parseDescribeTextTranslationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTextTranslationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
