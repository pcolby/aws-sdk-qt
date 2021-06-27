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

#include "createcollectionresponse.h"
#include "createcollectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CreateCollectionResponse
 * \brief The CreateCollectionResponse class provides an interace for Rekognition CreateCollection responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::createCollection
 */

/*!
 * Constructs a CreateCollectionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCollectionResponse::CreateCollectionResponse(
        const CreateCollectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new CreateCollectionResponsePrivate(this), parent)
{
    setRequest(new CreateCollectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCollectionRequest * CreateCollectionResponse::request() const
{
    return static_cast<const CreateCollectionRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition CreateCollection \a response.
 */
void CreateCollectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCollectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::CreateCollectionResponsePrivate
 * \brief The CreateCollectionResponsePrivate class provides private implementation for CreateCollectionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a CreateCollectionResponsePrivate object with public implementation \a q.
 */
CreateCollectionResponsePrivate::CreateCollectionResponsePrivate(
    CreateCollectionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition CreateCollection response element from \a xml.
 */
void CreateCollectionResponsePrivate::parseCreateCollectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCollectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
