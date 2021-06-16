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

#include "createprojectversionresponse.h"
#include "createprojectversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CreateProjectVersionResponse
 * \brief The CreateProjectVersionResponse class provides an interace for Rekognition CreateProjectVersion responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::createProjectVersion
 */

/*!
 * Constructs a CreateProjectVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateProjectVersionResponse::CreateProjectVersionResponse(
        const CreateProjectVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new CreateProjectVersionResponsePrivate(this), parent)
{
    setRequest(new CreateProjectVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateProjectVersionRequest * CreateProjectVersionResponse::request() const
{
    Q_D(const CreateProjectVersionResponse);
    return static_cast<const CreateProjectVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition CreateProjectVersion \a response.
 */
void CreateProjectVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateProjectVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::CreateProjectVersionResponsePrivate
 * \brief The CreateProjectVersionResponsePrivate class provides private implementation for CreateProjectVersionResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a CreateProjectVersionResponsePrivate object with public implementation \a q.
 */
CreateProjectVersionResponsePrivate::CreateProjectVersionResponsePrivate(
    CreateProjectVersionResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition CreateProjectVersion response element from \a xml.
 */
void CreateProjectVersionResponsePrivate::parseCreateProjectVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateProjectVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
