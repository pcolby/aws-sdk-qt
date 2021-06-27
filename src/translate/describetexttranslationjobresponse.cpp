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
    return static_cast<const DescribeTextTranslationJobRequest *>(TranslateResponse::request());
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
