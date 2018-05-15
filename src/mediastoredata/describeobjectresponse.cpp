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

#include "describeobjectresponse.h"
#include "describeobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStoreData {

/*!
 * \class QtAws::MediaStoreData::DescribeObjectResponse
 * \brief The DescribeObjectResponse class provides an interace for MediaStoreData DescribeObject responses.
 *
 * \inmodule QtAwsMediaStoreData
 *
 *  An AWS Elemental MediaStore asset is an object, similar to an object in the Amazon S3 service. Objects are the
 *  fundamental entities that are stored in AWS Elemental
 *
 * \sa MediaStoreDataClient::describeObject
 */

/*!
 * Constructs a DescribeObjectResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeObjectResponse::DescribeObjectResponse(
        const DescribeObjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreDataResponse(new DescribeObjectResponsePrivate(this), parent)
{
    setRequest(new DescribeObjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeObjectRequest * DescribeObjectResponse::request() const
{
    Q_D(const DescribeObjectResponse);
    return static_cast<const DescribeObjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStoreData DescribeObject \a response.
 */
void DescribeObjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeObjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStoreData::DescribeObjectResponsePrivate
 * \brief The DescribeObjectResponsePrivate class provides private implementation for DescribeObjectResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStoreData
 */

/*!
 * Constructs a DescribeObjectResponsePrivate object with public implementation \a q.
 */
DescribeObjectResponsePrivate::DescribeObjectResponsePrivate(
    DescribeObjectResponse * const q) : MediaStoreDataResponsePrivate(q)
{

}

/*!
 * Parses a MediaStoreData DescribeObject response element from \a xml.
 */
void DescribeObjectResponsePrivate::parseDescribeObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeObjectResponse"));
    /// @todo
}

} // namespace MediaStoreData
} // namespace QtAws
