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

#include "deletestreamprocessorresponse.h"
#include "deletestreamprocessorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DeleteStreamProcessorResponse
 * \brief The DeleteStreamProcessorResponse class provides an interace for Rekognition DeleteStreamProcessor responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::deleteStreamProcessor
 */

/*!
 * Constructs a DeleteStreamProcessorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStreamProcessorResponse::DeleteStreamProcessorResponse(
        const DeleteStreamProcessorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DeleteStreamProcessorResponsePrivate(this), parent)
{
    setRequest(new DeleteStreamProcessorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStreamProcessorRequest * DeleteStreamProcessorResponse::request() const
{
    Q_D(const DeleteStreamProcessorResponse);
    return static_cast<const DeleteStreamProcessorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition DeleteStreamProcessor \a response.
 */
void DeleteStreamProcessorResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteStreamProcessorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DeleteStreamProcessorResponsePrivate
 * \brief The DeleteStreamProcessorResponsePrivate class provides private implementation for DeleteStreamProcessorResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DeleteStreamProcessorResponsePrivate object with public implementation \a q.
 */
DeleteStreamProcessorResponsePrivate::DeleteStreamProcessorResponsePrivate(
    DeleteStreamProcessorResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DeleteStreamProcessor response element from \a xml.
 */
void DeleteStreamProcessorResponsePrivate::parseDeleteStreamProcessorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStreamProcessorResponse"));
    /// @todo
}

} // namespace Rekognition
} // namespace QtAws
