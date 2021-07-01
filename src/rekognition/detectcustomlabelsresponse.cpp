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

#include "detectcustomlabelsresponse.h"
#include "detectcustomlabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectCustomLabelsResponse
 * \brief The DetectCustomLabelsResponse class provides an interace for Rekognition DetectCustomLabels responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectCustomLabels
 */

/*!
 * Constructs a DetectCustomLabelsResponse object for \a reply to \a request, with parent \a parent.
 */
DetectCustomLabelsResponse::DetectCustomLabelsResponse(
        const DetectCustomLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DetectCustomLabelsResponsePrivate(this), parent)
{
    setRequest(new DetectCustomLabelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectCustomLabelsRequest * DetectCustomLabelsResponse::request() const
{
    Q_D(const DetectCustomLabelsResponse);
    return static_cast<const DetectCustomLabelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition DetectCustomLabels \a response.
 */
void DetectCustomLabelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectCustomLabelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DetectCustomLabelsResponsePrivate
 * \brief The DetectCustomLabelsResponsePrivate class provides private implementation for DetectCustomLabelsResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectCustomLabelsResponsePrivate object with public implementation \a q.
 */
DetectCustomLabelsResponsePrivate::DetectCustomLabelsResponsePrivate(
    DetectCustomLabelsResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DetectCustomLabels response element from \a xml.
 */
void DetectCustomLabelsResponsePrivate::parseDetectCustomLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectCustomLabelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
