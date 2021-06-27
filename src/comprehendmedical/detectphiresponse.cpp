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

#include "detectphiresponse.h"
#include "detectphiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DetectPHIResponse
 * \brief The DetectPHIResponse class provides an interace for ComprehendMedical DetectPHI responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::detectPHI
 */

/*!
 * Constructs a DetectPHIResponse object for \a reply to \a request, with parent \a parent.
 */
DetectPHIResponse::DetectPHIResponse(
        const DetectPHIRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new DetectPHIResponsePrivate(this), parent)
{
    setRequest(new DetectPHIRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectPHIRequest * DetectPHIResponse::request() const
{
    return static_cast<const DetectPHIRequest *>(ComprehendMedicalResponse::request());
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical DetectPHI \a response.
 */
void DetectPHIResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectPHIResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::DetectPHIResponsePrivate
 * \brief The DetectPHIResponsePrivate class provides private implementation for DetectPHIResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DetectPHIResponsePrivate object with public implementation \a q.
 */
DetectPHIResponsePrivate::DetectPHIResponsePrivate(
    DetectPHIResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical DetectPHI response element from \a xml.
 */
void DetectPHIResponsePrivate::parseDetectPHIResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectPHIResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
