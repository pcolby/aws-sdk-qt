/*
    Copyright 2013-2019 Paul Colby

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

#include "listcollectionsresponse.h"
#include "listcollectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::ListCollectionsResponse
 * \brief The ListCollectionsResponse class provides an interace for Rekognition ListCollections responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::listCollections
 */

/*!
 * Constructs a ListCollectionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCollectionsResponse::ListCollectionsResponse(
        const ListCollectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new ListCollectionsResponsePrivate(this), parent)
{
    setRequest(new ListCollectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCollectionsRequest * ListCollectionsResponse::request() const
{
    Q_D(const ListCollectionsResponse);
    return static_cast<const ListCollectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition ListCollections \a response.
 */
void ListCollectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCollectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::ListCollectionsResponsePrivate
 * \brief The ListCollectionsResponsePrivate class provides private implementation for ListCollectionsResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a ListCollectionsResponsePrivate object with public implementation \a q.
 */
ListCollectionsResponsePrivate::ListCollectionsResponsePrivate(
    ListCollectionsResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition ListCollections response element from \a xml.
 */
void ListCollectionsResponsePrivate::parseListCollectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCollectionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
