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

#include "listcompatibleimagesresponse.h"
#include "listcompatibleimagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::ListCompatibleImagesResponse
 * \brief The ListCompatibleImagesResponse class provides an interace for Snowball ListCompatibleImages responses.
 *
 * \inmodule QtAwsSnowball
 *
 *  AWS Snowball is a petabyte-scale data transport solution that uses secure devices to transfer large amounts of data
 *  between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The commands described here provide
 *  access to the same functionality that is available in the AWS Snowball Management Console, which enables you to create
 *  and manage jobs for Snowball and Snowball Edge devices. To transfer data locally with a device, you'll need to use the
 *  Snowball client or the Amazon S3 API adapter for
 *
 * \sa SnowballClient::listCompatibleImages
 */

/*!
 * Constructs a ListCompatibleImagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListCompatibleImagesResponse::ListCompatibleImagesResponse(
        const ListCompatibleImagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new ListCompatibleImagesResponsePrivate(this), parent)
{
    setRequest(new ListCompatibleImagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCompatibleImagesRequest * ListCompatibleImagesResponse::request() const
{
    Q_D(const ListCompatibleImagesResponse);
    return static_cast<const ListCompatibleImagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Snowball ListCompatibleImages \a response.
 */
void ListCompatibleImagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCompatibleImagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Snowball::ListCompatibleImagesResponsePrivate
 * \brief The ListCompatibleImagesResponsePrivate class provides private implementation for ListCompatibleImagesResponse.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a ListCompatibleImagesResponsePrivate object with public implementation \a q.
 */
ListCompatibleImagesResponsePrivate::ListCompatibleImagesResponsePrivate(
    ListCompatibleImagesResponse * const q) : SnowballResponsePrivate(q)
{

}

/*!
 * Parses a Snowball ListCompatibleImages response element from \a xml.
 */
void ListCompatibleImagesResponsePrivate::parseListCompatibleImagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCompatibleImagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Snowball
} // namespace QtAws
