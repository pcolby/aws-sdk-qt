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

#include "detectentitiesv2response.h"
#include "detectentitiesv2response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DetectEntitiesV2Response
 * \brief The DetectEntitiesV2Response class provides an interace for ComprehendMedical DetectEntitiesV2 responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::detectEntitiesV2
 */

/*!
 * Constructs a DetectEntitiesV2Response object for \a reply to \a request, with parent \a parent.
 */
DetectEntitiesV2Response::DetectEntitiesV2Response(
        const DetectEntitiesV2Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new DetectEntitiesV2ResponsePrivate(this), parent)
{
    setRequest(new DetectEntitiesV2Request(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectEntitiesV2Request * DetectEntitiesV2Response::request() const
{
    Q_D(const DetectEntitiesV2Response);
    return static_cast<const DetectEntitiesV2Request *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical DetectEntitiesV2 \a response.
 */
void DetectEntitiesV2Response::parseSuccess(QIODevice &response)
{
    //Q_D(DetectEntitiesV2Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::DetectEntitiesV2ResponsePrivate
 * \brief The DetectEntitiesV2ResponsePrivate class provides private implementation for DetectEntitiesV2Response.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DetectEntitiesV2ResponsePrivate object with public implementation \a q.
 */
DetectEntitiesV2ResponsePrivate::DetectEntitiesV2ResponsePrivate(
    DetectEntitiesV2Response * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical DetectEntitiesV2 response element from \a xml.
 */
void DetectEntitiesV2ResponsePrivate::parseDetectEntitiesV2Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectEntitiesV2Response"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
