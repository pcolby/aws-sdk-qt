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

#include "describelanguagemodelresponse.h"
#include "describelanguagemodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TranscribeService {

/*!
 * \class QtAws::TranscribeService::DescribeLanguageModelResponse
 * \brief The DescribeLanguageModelResponse class provides an interace for TranscribeService DescribeLanguageModel responses.
 *
 * \inmodule QtAwsTranscribeService
 *
 *  Operations and objects for transcribing speech to
 *
 * \sa TranscribeServiceClient::describeLanguageModel
 */

/*!
 * Constructs a DescribeLanguageModelResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLanguageModelResponse::DescribeLanguageModelResponse(
        const DescribeLanguageModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranscribeServiceResponse(new DescribeLanguageModelResponsePrivate(this), parent)
{
    setRequest(new DescribeLanguageModelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLanguageModelRequest * DescribeLanguageModelResponse::request() const
{
    return static_cast<const DescribeLanguageModelRequest *>(TranscribeServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful TranscribeService DescribeLanguageModel \a response.
 */
void DescribeLanguageModelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLanguageModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TranscribeService::DescribeLanguageModelResponsePrivate
 * \brief The DescribeLanguageModelResponsePrivate class provides private implementation for DescribeLanguageModelResponse.
 * \internal
 *
 * \inmodule QtAwsTranscribeService
 */

/*!
 * Constructs a DescribeLanguageModelResponsePrivate object with public implementation \a q.
 */
DescribeLanguageModelResponsePrivate::DescribeLanguageModelResponsePrivate(
    DescribeLanguageModelResponse * const q) : TranscribeServiceResponsePrivate(q)
{

}

/*!
 * Parses a TranscribeService DescribeLanguageModel response element from \a xml.
 */
void DescribeLanguageModelResponsePrivate::parseDescribeLanguageModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLanguageModelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TranscribeService
} // namespace QtAws
