// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
