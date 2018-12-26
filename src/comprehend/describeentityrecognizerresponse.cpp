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

#include "describeentityrecognizerresponse.h"
#include "describeentityrecognizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DescribeEntityRecognizerResponse
 * \brief The DescribeEntityRecognizerResponse class provides an interace for Comprehend DescribeEntityRecognizer responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::describeEntityRecognizer
 */

/*!
 * Constructs a DescribeEntityRecognizerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEntityRecognizerResponse::DescribeEntityRecognizerResponse(
        const DescribeEntityRecognizerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeEntityRecognizerResponsePrivate(this), parent)
{
    setRequest(new DescribeEntityRecognizerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEntityRecognizerRequest * DescribeEntityRecognizerResponse::request() const
{
    Q_D(const DescribeEntityRecognizerResponse);
    return static_cast<const DescribeEntityRecognizerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend DescribeEntityRecognizer \a response.
 */
void DescribeEntityRecognizerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEntityRecognizerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::DescribeEntityRecognizerResponsePrivate
 * \brief The DescribeEntityRecognizerResponsePrivate class provides private implementation for DescribeEntityRecognizerResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DescribeEntityRecognizerResponsePrivate object with public implementation \a q.
 */
DescribeEntityRecognizerResponsePrivate::DescribeEntityRecognizerResponsePrivate(
    DescribeEntityRecognizerResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend DescribeEntityRecognizer response element from \a xml.
 */
void DescribeEntityRecognizerResponsePrivate::parseDescribeEntityRecognizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEntityRecognizerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
