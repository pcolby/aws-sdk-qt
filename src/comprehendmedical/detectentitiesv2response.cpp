// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
