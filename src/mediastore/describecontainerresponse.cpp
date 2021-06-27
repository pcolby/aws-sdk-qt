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

#include "describecontainerresponse.h"
#include "describecontainerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DescribeContainerResponse
 * \brief The DescribeContainerResponse class provides an interace for MediaStore DescribeContainer responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::describeContainer
 */

/*!
 * Constructs a DescribeContainerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeContainerResponse::DescribeContainerResponse(
        const DescribeContainerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DescribeContainerResponsePrivate(this), parent)
{
    setRequest(new DescribeContainerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeContainerRequest * DescribeContainerResponse::request() const
{
    return static_cast<const DescribeContainerRequest *>(MediaStoreResponse::request());
}

/*!
 * \reimp
 * Parses a successful MediaStore DescribeContainer \a response.
 */
void DescribeContainerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeContainerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DescribeContainerResponsePrivate
 * \brief The DescribeContainerResponsePrivate class provides private implementation for DescribeContainerResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DescribeContainerResponsePrivate object with public implementation \a q.
 */
DescribeContainerResponsePrivate::DescribeContainerResponsePrivate(
    DescribeContainerResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DescribeContainer response element from \a xml.
 */
void DescribeContainerResponsePrivate::parseDescribeContainerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContainerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
