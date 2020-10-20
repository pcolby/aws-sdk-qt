/*
    Copyright 2013-2020 Paul Colby

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

#include "describestreamprocessorresponse.h"
#include "describestreamprocessorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DescribeStreamProcessorResponse
 * \brief The DescribeStreamProcessorResponse class provides an interace for Rekognition DescribeStreamProcessor responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::describeStreamProcessor
 */

/*!
 * Constructs a DescribeStreamProcessorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStreamProcessorResponse::DescribeStreamProcessorResponse(
        const DescribeStreamProcessorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DescribeStreamProcessorResponsePrivate(this), parent)
{
    setRequest(new DescribeStreamProcessorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStreamProcessorRequest * DescribeStreamProcessorResponse::request() const
{
    Q_D(const DescribeStreamProcessorResponse);
    return static_cast<const DescribeStreamProcessorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition DescribeStreamProcessor \a response.
 */
void DescribeStreamProcessorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStreamProcessorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DescribeStreamProcessorResponsePrivate
 * \brief The DescribeStreamProcessorResponsePrivate class provides private implementation for DescribeStreamProcessorResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DescribeStreamProcessorResponsePrivate object with public implementation \a q.
 */
DescribeStreamProcessorResponsePrivate::DescribeStreamProcessorResponsePrivate(
    DescribeStreamProcessorResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DescribeStreamProcessor response element from \a xml.
 */
void DescribeStreamProcessorResponsePrivate::parseDescribeStreamProcessorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStreamProcessorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
