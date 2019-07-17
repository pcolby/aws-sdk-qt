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

#include "deletecollectionresponse.h"
#include "deletecollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DeleteCollectionResponse
 * \brief The DeleteCollectionResponse class provides an interace for Rekognition DeleteCollection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::deleteCollection
 */

/*!
 * Constructs a DeleteCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCollectionResponse::DeleteCollectionResponse(
        const DeleteCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DeleteCollectionResponsePrivate(this), parent)
{
    setRequest(new DeleteCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCollectionRequest * DeleteCollectionResponse::request() const
{
    Q_D(const DeleteCollectionResponse);
    return static_cast<const DeleteCollectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition DeleteCollection \a response.
 */
void DeleteCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DeleteCollectionResponsePrivate
 * \brief The DeleteCollectionResponsePrivate class provides private implementation for DeleteCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DeleteCollectionResponsePrivate object with public implementation \a q.
 */
DeleteCollectionResponsePrivate::DeleteCollectionResponsePrivate(
    DeleteCollectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DeleteCollection response element from \a xml.
 */
void DeleteCollectionResponsePrivate::parseDeleteCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
