// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
