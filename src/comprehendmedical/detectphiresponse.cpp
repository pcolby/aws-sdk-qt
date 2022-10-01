// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
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
    Q_D(const DetectPHIResponse);
    return static_cast<const DetectPHIRequest *>(d->request);
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
