// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectentitiesresponse.h"
#include "detectentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DetectEntitiesResponse
 * \brief The DetectEntitiesResponse class provides an interace for ComprehendMedical DetectEntities responses.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::detectEntities
 */

/*!
 * Constructs a DetectEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
DetectEntitiesResponse::DetectEntitiesResponse(
        const DetectEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendMedicalResponse(new DetectEntitiesResponsePrivate(this), parent)
{
    setRequest(new DetectEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DetectEntitiesRequest * DetectEntitiesResponse::request() const
{
    Q_D(const DetectEntitiesResponse);
    return static_cast<const DetectEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ComprehendMedical DetectEntities \a response.
 */
void DetectEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DetectEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ComprehendMedical::DetectEntitiesResponsePrivate
 * \brief The DetectEntitiesResponsePrivate class provides private implementation for DetectEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DetectEntitiesResponsePrivate object with public implementation \a q.
 */
DetectEntitiesResponsePrivate::DetectEntitiesResponsePrivate(
    DetectEntitiesResponse * const q) : ComprehendMedicalResponsePrivate(q)
{

}

/*!
 * Parses a ComprehendMedical DetectEntities response element from \a xml.
 */
void DetectEntitiesResponsePrivate::parseDetectEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetectEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ComprehendMedical
} // namespace QtAws
