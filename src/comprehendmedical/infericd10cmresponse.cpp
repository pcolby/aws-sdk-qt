// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
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
    Q_D(const InferICD10CMResponse);
    return static_cast<const InferICD10CMRequest *>(d->request);
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
