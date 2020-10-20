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

#include "createstreamprocessorresponse.h"
#include "createstreamprocessorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::CreateStreamProcessorResponse
 * \brief The CreateStreamProcessorResponse class provides an interace for Rekognition CreateStreamProcessor responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::createStreamProcessor
 */

/*!
 * Constructs a CreateStreamProcessorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStreamProcessorResponse::CreateStreamProcessorResponse(
        const CreateStreamProcessorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new CreateStreamProcessorResponsePrivate(this), parent)
{
    setRequest(new CreateStreamProcessorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStreamProcessorRequest * CreateStreamProcessorResponse::request() const
{
    Q_D(const CreateStreamProcessorResponse);
    return static_cast<const CreateStreamProcessorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition CreateStreamProcessor \a response.
 */
void CreateStreamProcessorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStreamProcessorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::CreateStreamProcessorResponsePrivate
 * \brief The CreateStreamProcessorResponsePrivate class provides private implementation for CreateStreamProcessorResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a CreateStreamProcessorResponsePrivate object with public implementation \a q.
 */
CreateStreamProcessorResponsePrivate::CreateStreamProcessorResponsePrivate(
    CreateStreamProcessorResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition CreateStreamProcessor response element from \a xml.
 */
void CreateStreamProcessorResponsePrivate::parseCreateStreamProcessorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStreamProcessorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
