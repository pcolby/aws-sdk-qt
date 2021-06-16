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

#include "detectprotectiveequipmentresponse.h"
#include "detectprotectiveequipmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Rekognition {

/*!
 * \class QtAws::Rekognition::DetectProtectiveEquipmentResponse
 * \brief The DetectProtectiveEquipmentResponse class provides an interace for Rekognition DetectProtectiveEquipment responses.
 *
 * \inmodule QtAwsRekognition
 *
 *  This is the Amazon Rekognition API
 *
 * \sa RekognitionClient::detectProtectiveEquipment
 */

/*!
 * Constructs a DetectProtectiveEquipmentResponse object for \a reply to \a request, with parent \a parent.
 */
DetectProtectiveEquipmentResponse::DetectProtectiveEquipmentResponse(
        const DetectProtectiveEquipmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RekognitionResponse(new DetectProtectiveEquipmentResponsePrivate(this), parent)
{
    setRequest(new DetectProtectiveEquipmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectProtectiveEquipmentRequest * DetectProtectiveEquipmentResponse::request() const
{
    Q_D(const DetectProtectiveEquipmentResponse);
    return static_cast<const DetectProtectiveEquipmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Rekognition DetectProtectiveEquipment \a response.
 */
void DetectProtectiveEquipmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectProtectiveEquipmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Rekognition::DetectProtectiveEquipmentResponsePrivate
 * \brief The DetectProtectiveEquipmentResponsePrivate class provides private implementation for DetectProtectiveEquipmentResponse.
 * \internal
 *
 * \inmodule QtAwsRekognition
 */

/*!
 * Constructs a DetectProtectiveEquipmentResponsePrivate object with public implementation \a q.
 */
DetectProtectiveEquipmentResponsePrivate::DetectProtectiveEquipmentResponsePrivate(
    DetectProtectiveEquipmentResponse * const q) : RekognitionResponsePrivate(q)
{

}

/*!
 * Parses a Rekognition DetectProtectiveEquipment response element from \a xml.
 */
void DetectProtectiveEquipmentResponsePrivate::parseDetectProtectiveEquipmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectProtectiveEquipmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Rekognition
} // namespace QtAws
