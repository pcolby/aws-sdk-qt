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

#include "describecollectionresponse.h"
#include "describecollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DescribeCollectionResponse
 * \brief The DescribeCollectionResponse class provides an interace for Rekognition DescribeCollection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::describeCollection
 */

/*!
 * Constructs a DescribeCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCollectionResponse::DescribeCollectionResponse(
        const DescribeCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DescribeCollectionResponsePrivate(this), parent)
{
    setRequest(new DescribeCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCollectionRequest * DescribeCollectionResponse::request() const
{
    Q_D(const DescribeCollectionResponse);
    return static_cast<const DescribeCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition DescribeCollection \a response.
 */
void DescribeCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DescribeCollectionResponsePrivate
 * \brief The DescribeCollectionResponsePrivate class provides private implementation for DescribeCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DescribeCollectionResponsePrivate object with public implementation \a q.
 */
DescribeCollectionResponsePrivate::DescribeCollectionResponsePrivate(
    DescribeCollectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DescribeCollection response element from \a xml.
 */
void DescribeCollectionResponsePrivate::parseDescribeCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
