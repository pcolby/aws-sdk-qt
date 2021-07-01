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

#include "detectlabelsresponse.h"
#include "detectlabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectLabelsResponse
 * \brief The DetectLabelsResponse class provides an interace for Rekognition DetectLabels responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectLabels
 */

/*!
 * Constructs a DetectLabelsResponse object for \a reply to \a request, with parent \a parent.
 */
DetectLabelsResponse::DetectLabelsResponse(
        const DetectLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DetectLabelsResponsePrivate(this), parent)
{
    setRequest(new DetectLabelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectLabelsRequest * DetectLabelsResponse::request() const
{
    Q_D(const DetectLabelsResponse);
    return static_cast<const DetectLabelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition DetectLabels \a response.
 */
void DetectLabelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectLabelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DetectLabelsResponsePrivate
 * \brief The DetectLabelsResponsePrivate class provides private implementation for DetectLabelsResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectLabelsResponsePrivate object with public implementation \a q.
 */
DetectLabelsResponsePrivate::DetectLabelsResponsePrivate(
    DetectLabelsResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DetectLabels response element from \a xml.
 */
void DetectLabelsResponsePrivate::parseDetectLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectLabelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
