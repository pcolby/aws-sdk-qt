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

#include "infericd10cmresponse.h"
#include "infericd10cmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::InferICD10CMResponse
 * \brief The InferICD10CMResponse class provides an interace for ComprehendMedical InferICD10CM responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::inferICD10CM
 */

/*!
 * Constructs a InferICD10CMResponse object for \a reply to \a request, with parent \a parent.
 */
InferICD10CMResponse::InferICD10CMResponse(
        const InferICD10CMRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new InferICD10CMResponsePrivate(this), parent)
{
    setRequest(new InferICD10CMRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InferICD10CMRequest * InferICD10CMResponse::request() const
{
    return static_cast<const InferICD10CMRequest *>(ComprehendMedicalResponse::request());
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical InferICD10CM \a response.
 */
void InferICD10CMResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InferICD10CMResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::InferICD10CMResponsePrivate
 * \brief The InferICD10CMResponsePrivate class provides private implementation for InferICD10CMResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a InferICD10CMResponsePrivate object with public implementation \a q.
 */
InferICD10CMResponsePrivate::InferICD10CMResponsePrivate(
    InferICD10CMResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical InferICD10CM response element from \a xml.
 */
void InferICD10CMResponsePrivate::parseInferICD10CMResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InferICD10CMResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
