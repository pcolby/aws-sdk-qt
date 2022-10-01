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

#include "infersnomedctresponse.h"
#include "infersnomedctresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::InferSNOMEDCTResponse
 * \brief The InferSNOMEDCTResponse class provides an interace for ComprehendMedical InferSNOMEDCT responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::inferSNOMEDCT
 */

/*!
 * Constructs a InferSNOMEDCTResponse object for \a reply to \a request, with parent \a parent.
 */
InferSNOMEDCTResponse::InferSNOMEDCTResponse(
        const InferSNOMEDCTRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new InferSNOMEDCTResponsePrivate(this), parent)
{
    setRequest(new InferSNOMEDCTRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InferSNOMEDCTRequest * InferSNOMEDCTResponse::request() const
{
    Q_D(const InferSNOMEDCTResponse);
    return static_cast<const InferSNOMEDCTRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical InferSNOMEDCT \a response.
 */
void InferSNOMEDCTResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InferSNOMEDCTResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::InferSNOMEDCTResponsePrivate
 * \brief The InferSNOMEDCTResponsePrivate class provides private implementation for InferSNOMEDCTResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a InferSNOMEDCTResponsePrivate object with public implementation \a q.
 */
InferSNOMEDCTResponsePrivate::InferSNOMEDCTResponsePrivate(
    InferSNOMEDCTResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical InferSNOMEDCT response element from \a xml.
 */
void InferSNOMEDCTResponsePrivate::parseInferSNOMEDCTResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InferSNOMEDCTResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
