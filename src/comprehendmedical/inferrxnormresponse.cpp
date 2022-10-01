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

#include "inferrxnormresponse.h"
#include "inferrxnormresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::InferRxNormResponse
 * \brief The InferRxNormResponse class provides an interace for ComprehendMedical InferRxNorm responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::inferRxNorm
 */

/*!
 * Constructs a InferRxNormResponse object for \a reply to \a request, with parent \a parent.
 */
InferRxNormResponse::InferRxNormResponse(
        const InferRxNormRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new InferRxNormResponsePrivate(this), parent)
{
    setRequest(new InferRxNormRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const InferRxNormRequest * InferRxNormResponse::request() const
{
    Q_D(const InferRxNormResponse);
    return static_cast<const InferRxNormRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical InferRxNorm \a response.
 */
void InferRxNormResponse::parseSuccess(QIODevice &response)
{
    //Q_D(InferRxNormResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::InferRxNormResponsePrivate
 * \brief The InferRxNormResponsePrivate class provides private implementation for InferRxNormResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a InferRxNormResponsePrivate object with public implementation \a q.
 */
InferRxNormResponsePrivate::InferRxNormResponsePrivate(
    InferRxNormResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical InferRxNorm response element from \a xml.
 */
void InferRxNormResponsePrivate::parseInferRxNormResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InferRxNormResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
