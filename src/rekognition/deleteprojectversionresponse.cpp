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

#include "deleteprojectversionresponse.h"
#include "deleteprojectversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DeleteProjectVersionResponse
 * \brief The DeleteProjectVersionResponse class provides an interace for Rekognition DeleteProjectVersion responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::deleteProjectVersion
 */

/*!
 * Constructs a DeleteProjectVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProjectVersionResponse::DeleteProjectVersionResponse(
        const DeleteProjectVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DeleteProjectVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteProjectVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProjectVersionRequest * DeleteProjectVersionResponse::request() const
{
    return static_cast<const DeleteProjectVersionRequest *>(RekognitionResponse::request());
}

/*!
 * \reimp
 * Parses a successful Rekognition DeleteProjectVersion \a response.
 */
void DeleteProjectVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProjectVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DeleteProjectVersionResponsePrivate
 * \brief The DeleteProjectVersionResponsePrivate class provides private implementation for DeleteProjectVersionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DeleteProjectVersionResponsePrivate object with public implementation \a q.
 */
DeleteProjectVersionResponsePrivate::DeleteProjectVersionResponsePrivate(
    DeleteProjectVersionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DeleteProjectVersion response element from \a xml.
 */
void DeleteProjectVersionResponsePrivate::parseDeleteProjectVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProjectVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
